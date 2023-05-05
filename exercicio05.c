#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	printf("insira o numero: ");
	scanf("%d",&n);
	printf("divisores: ");
	for(i=1;i<=(n/2);i++) {
		if(n%i==0) {
			printf("%d, ",i);
		}
	}
	printf("%d;",n);
	return 0;
}
