#include <stdio.h>

#pragma warning(disable:4996)

int main() {
	char array[101];

	while (fgets(array, 101, stdin))
		printf("%s", array);
	return 0;
}