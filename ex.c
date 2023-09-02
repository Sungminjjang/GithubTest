#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define buffer_size 10

int read_lin(char str[], int limit);

int main() {
	char buffer[buffer_size];
	int k;
	printf("Git Test Sentence2\n");
	while (1)
	{
		printf("$ ");
		k = read_line(buffer, buffer_size);
		printf("%s:%d\n",buffer,k);
	}
	return 0;
}
	
int read_line(char str[], int limit)
{
	int ch, i = 0;
	while((ch = getchar()) != '\n')
	{	
	
			str[i++] = ch;
	
	}

	str[i] = '\0';
	return i;
}