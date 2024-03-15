#include <stdio.h>


int main() {

	int t;
	char s[101];

	scanf("%d %s", &t, s);
	
	int sum = 0;

	for (int i = 0; i < t; i++) {
		sum += s[i] - '0'; // 아스키 코드로 들어가서 0이나 48 뺴라는데 빼는 이유는 아는데 원리를 모르겠다
	}

	printf("%d", sum);


	return 0;
}