#include <stdio.h>

int main()
{
	int g;

	scanf("%d", &g);

	if (90 <= g) {
		printf("A");
	}

	else if (80 <= g) {
		printf("B");
	}

	else if (70 <= g) {
		printf("C");
	}

	else if (60 <= g) {
		printf("D");
	}

	else printf("F");
	return 0;
		
}