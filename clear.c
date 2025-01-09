// clear.c - My implmentation of clear.

#include <stdio.h>

int main() {
	// Clear screen using ANSI
	printf("\033[H\033[2J");

	return 0;
}
