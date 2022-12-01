#include <stdio.h>
#include <string.h>

int reverse(char *str) {
	int i, j;
	char temp;

	j = strlen(str) - 1;
	for (i = 0; i < j; i++) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
	}
	return 0;
}

int main() {
	char a[20] = { 0 };
	scanf("%s", &a);
	reverse(a);
	printf("%s\n", a);
	return 0;
}