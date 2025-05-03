# Executable name
TARGET = app

# Define OS
UNAME_S := $(shell uname -s)

# Compiler
ifeq ($(UNAME_S),Darwin)
	CC = clang
else
	CC = gcc
endif

# Flags
# -Wall  - Show all compication warnings
# -MMD   - Create dependency file
# -MP    - Create fake targets in .d if .h was deleted
CFLAGS = -Wall -MMD -MP

# Find all .c files in project directory
SRCS := $(shell find . -name '*.c')

# Where place .o files
BUILD_DIR = build

# Make path from .c files to .o inside build dir 
OBJS := $(patsubst ./%, $(BUILD_DIR)/%, $(SRCS:.c=.o))
DEPS := $(OBJS:.o=.d)

# Default rule. Calling make without args calls this rule
all: $(TARGET)

# Link .o to executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Building rule .o from .c
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(BUILD_DIR) $(TARGET)

# Dependencies if exist
-include $(DEPS)
