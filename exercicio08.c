#include <stdio.h>

int main() {
	int maior = 0,menor = 0;
	int n=0,i=0;
	
	while(1) {
		printf("insira um numero(insira um negativo para sair): ");
		scanf("%d",&n);
		if(n<0) {
			break;
		}
		if(i==0 || n < menor) {
			menor = n;
		}
		if(i==0 || n > maior) {
			maior = n;
		}
		i++;
	}
	printf("maior: %d\n",maior);
	printf("menor: %d",menor);
	return 0;
}
