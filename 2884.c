#include <stdio.h>

int main() {
	int H, M;

	scanf("%d %d", &H, &M);
	if (M < 45) {
		if (H == 0) {
			M += 15;
			H = 23;
		}
		else {
			H -= 1;
			M += 15;
		}
	}
	else M -= 45;

	printf("%d %d",  H, M);
}