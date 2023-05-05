#include <stdio.h>

int main() {
	int i=0,n=0;
	float soma=0.0;
	for(i=1;i<=10;i++) {
		printf("%do numero: ",i);
		scanf("%d",&n);
		soma += n;
	}
	printf("\nmedia: %.2f",soma/10);
	return 0;
}
