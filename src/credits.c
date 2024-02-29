#include <stdio.h>

#define SEVERAL "Several People"

void print_credits(void) {
    fprintf(stderr, "# == era1n-c == \n#\n");
    fprintf(stderr, "# Made by: Glitter-chan, %s, Walter White, unrealgamer, your mom\n", SEVERAL);
    fprintf(stderr, "# Thanks to: %s, lrdsnow, circular, katie, James Wallman\n", SEVERAL);
    fprintf(stderr, "# femra1n team (Glitter-chan, lrdsnow, circular)\n");
}

// Call the function to print credits
print_credits();
