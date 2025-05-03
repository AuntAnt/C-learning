#include <stdio.h>

typedef struct CodeFile {
	int lines;
	int filetype;
} codefile_t;


void change_filetype(codefile_t *f, int new_type) {
	//codefile_t new_f = *f;
	printf("%d\n", f->filetype);
	//new_f.filetype = new_type;

	f->filetype = new_type;
	//return new_f;
}


int main() {
	int a = 100;
	int *a_ptr = &a;

	//printf("%d\n", a);
	
	*a_ptr = 12;

	//printf("%d\n", a);

	
	codefile_t some_f = {
		.lines = 10,
		.filetype = 0
	};

	printf("%d\n", some_f.filetype);

	codefile_t *cf_t_ptr = &some_f;
	change_filetype(cf_t_ptr, 2);	

	printf("%d\n", some_f.filetype);
	//printf("%d\n", *a_ptr);
	//printf("%p\n", &a);
	return 0;
}
