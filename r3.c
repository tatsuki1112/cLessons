#include <stdio.h>
int main(void) {
	int x;
	int y;
	y = 0;
	while(y == 0) {
		printf("input x y note: y should not be 0\n");
		scanf("%d %d", &x, &y);
	}
	printf("x divide y = %d", x/y);
	return 0;
}
