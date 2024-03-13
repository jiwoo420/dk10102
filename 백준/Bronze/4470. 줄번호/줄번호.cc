#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	char input[1000];

	scanf("%d", &num);

	getchar();
	

	for (int i = 1; i <= num; i++) {
		fgets(input, sizeof(input), stdin);
		
		printf("%d. ", i);
		printf("%s", input);
	}

	return 0;
}