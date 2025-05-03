#include <stdio.h>

typedef struct Coordinate {
  int x;
  int y;
  int z;
} coordinate_t;

coordinate_t scale_coordinate(struct Coordinate c, int scale) {
  coordinate_t scaled_coordinate = {
	.x = c.x * scale,
	.y = c.y * scale,
	.z = c.z * scale
  };

  return scaled_coordinate;
}

int main() {
  coordinate_t c = {
      .x = 10,
      .y = 20,
      .z = 30,
  };

  coordinate_t scaled = scale_coordinate(c, 5);
  printf("%d\n", scaled.x);

  return 0;
}
