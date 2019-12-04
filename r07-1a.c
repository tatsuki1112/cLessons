#include <stdio.h>

void print_OK(){
        printf(" OOO  K  K\n");
	printf("O   O K K\n");
	printf("O   O KK\n");
	printf("O   O K K\n");
	printf("O   O K  K\n");
	printf(" OOO  K   K\n");
}

int main(void){
	int x,y,z;
	scanf("%d", &x);
	print_OK();
	scanf("%d %d", &y,&z);
	print_OK();
	printf("%d\n", x+y*z);
}
