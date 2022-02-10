#include <stdio.h>
#include "asciiEsc.h"
#include <inttypes.h>

int main(void){
	printf("some things may not be supported\n");
	printf(A_BOLD"bold"A_BOLD_OFF A_ENDL);
	printf(A_UNDERLINE"underline"A_UNDERLINE_OFF A_ENDL);
	printf(A_ITALICS"italics"A_ITALICS_OFF A_ENDL);
	printf(A_BLINK"blink"A_BLINK_OFF A_ENDL);
	printf(A_DIM"dim"A_DIM_OFF A_ENDL);
	printf(A_INVERT"inverted"A_INVERT_OFF A_ENDL);
	printf(A_HIDE"hidden"A_HIDE_OFF A_ENDL);
	printf(A_STRIKETHROUGH"strike through"A_STRIKETHROUGH_OFF A_ENDL);
	printf(A_DOUBLE_UNDERLINE"double underline"A_DOUBLE_UNDERLINE_OFF A_ENDL);
	printf(A_BLACK_F"black"A_RESET A_ENDL);
	printf(A_RED_F"red"A_RESET A_ENDL);
	printf(A_GREEN_F"green"A_RESET A_ENDL);
	printf(A_YELLOW_F"yellow"A_RESET A_ENDL);
	printf(A_BLUE_F"blue"A_RESET A_ENDL);
	printf(A_MAGENTA_F"magenta"A_RESET A_ENDL);
	printf(A_CYAN_F"cyan"A_RESET A_ENDL);
	printf(A_WHITE_F"white"A_RESET A_ENDL);
	printf(A_DEFAULT_F"default"A_RESET A_ENDL);
	printf(A_BLACK_B"black"A_RESET A_ENDL);
	printf(A_RED_B"red"A_RESET A_ENDL);
	printf(A_GREEN_B"green"A_RESET A_ENDL);
	printf(A_YELLOW_B"yellow"A_RESET A_ENDL);
	printf(A_BLUE_B"blue"A_RESET A_ENDL);
	printf(A_MAGENTA_B"magenta"A_RESET A_ENDL);
	printf(A_CYAN_B"cyan"A_RESET A_ENDL);
	printf(A_WHITE_B"white"A_RESET A_ENDL);
	printf(A_DEFAULT_B"default"A_RESET A_ENDL);
	printf(A_UNDERLINE A_STRIKETHROUGH A_BLACK_F A_CYAN_B"combinations"A_RESET A_ENDL);
	return 0;
}
