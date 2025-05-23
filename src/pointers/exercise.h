#include <stddef.h>
typedef struct Graphics {
	int fps;
	int height;
	int weight;
} graphics_t;

void dump_graphics(graphics_t gsettings[10]);

void concat_strings(char *str1, const char *str2);

typedef struct {
	size_t length;
	char buffer[64];
} TextBuffer;

int smart_append(TextBuffer *dest, const char *src);
