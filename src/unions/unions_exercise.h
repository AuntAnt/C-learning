typedef enum SnekObjectKind {
    INTEGER,
    STRING
} snek_object_kind_t;

typedef union SnekObjectData {
    int v_int;
    char *v_string;
} snek_object_data_t;

typedef struct SnekObjects {
    snek_object_kind_t kind;
    snek_object_data_t data;
} snek_object_t;

snek_object_t new_integer(int);
snek_object_t new_string(char *str);

void format_object(snek_object_t obj, char *buffer);
