#include "exercise.h"
#include <stdio.h>
#include <string.h>

void string_concat_exercises() {
	graphics_t graphics_array[10] = {
		{60, 1080, 1920},
		{30, 720, 1280},
		{144, 1440, 2560},
		{75, 900, 1600},
		{120, 1080, 1920},
		{60, 2160, 3840},
		{240, 1080, 1920},
		{60, 768, 1366},
		{165, 1440, 2560},
		{90, 1200, 1920}
	};
	
	/*dump_graphics(graphics_array);*/

	char buffer[100] = "Hello";
	concat_strings(buffer, "Johnny");

	TextBuffer dest;
	strcpy(dest.buffer, "Some text that will be appended any other text");
	dest.length = 63;
	const char *src = " Extra";
	int result = smart_append(&dest, src);
	printf("Smart concat result is %d", result);
}
