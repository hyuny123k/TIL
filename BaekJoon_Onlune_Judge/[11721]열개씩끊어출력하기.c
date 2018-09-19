#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(int argc, char *argv[]) {
	
	int i;
	int word_len;
	char word[100];
		
	scanf("%s", word);
	word_len = strlen(word);

	for (i = 0; i < word_len; i++) {
		if ((i % 10) == 9)
			printf("%c\n", word[i]);
		else
			printf("%c", word[i]);
	}
	return 0;
}