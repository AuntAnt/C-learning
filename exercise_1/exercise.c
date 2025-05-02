#include <stdio.h>
#include "exercise.h"
#include <string.h>

void dump_graphics(graphics_t gsettings[10]) {
	int *ptr = (int *)gsettings;

	for (int i = 0; i < (10 * 3); i++) {
		printf("settings[%d] = %d\n", i, ptr[i]);
	}
}

void concat_strings(char *str1, const char *str2) {
	int idx = 0;
	while (1) {
		if (str1[idx] == '\0') {
			break;
		}

		idx++;
	}

	int str2_pointer = 0;
	while (1) {
		str1[idx + str2_pointer] = str2[str2_pointer];

		if (str2[str2_pointer] == '\0') {
			return;
		}

		str2_pointer++;
	}

	printf("%s", str1);
}

int smart_append(TextBuffer *dest, const char *src) {
	if (dest == NULL || src == NULL) {
		return 1;
	}

	int src_len = strlen(src);
	int remaining_space = sizeof(dest->buffer) - dest->length - 1;

	if (src_len < remaining_space) {
		strncat(dest->buffer, src, remaining_space);
		dest->length = sizeof(dest->buffer) - 1;
		return 1;
	} else {
		strcat(dest->buffer, src);
		dest->length += src_len;
		return 0;
	}
} 
