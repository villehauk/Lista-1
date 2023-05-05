#include <stdio.h>

int main() {
	int soma=0;
	int i=0;
	for(i=0;i<1000;i++) {
		if(i%3==0 && i%5==0) {
			soma += i;
		}
	}
	printf("soma de todos os numeros naturais menores que 1000 multiplos de 3 e de 5 = %d",soma);
	return 0;
}
