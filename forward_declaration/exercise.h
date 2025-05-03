// define
typedef struct SnekObject snekobject_t;

typedef struct SnekObject {
  char *name;
  snekobject_t *child;
} snekobject_t;

snekobject_t new_node(char *name);

typedef struct Employee employee_t;
typedef struct Computer computer_t;

struct Employee {
  char *name;
  computer_t *computer;
};

struct Computer {
  char *brand;
  employee_t *owner;
};
