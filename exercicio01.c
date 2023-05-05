#include <stdio.h>

int main() {
	int a=0,b=0,c=0,d=0;
	int diferenca=0;
	printf("insira o valor de A: ");
	scanf("%d",&a);
	printf("insira o valor de B: ");
	scanf("%d",&b);
	printf("insira o valor de C: ");
	scanf("%d",&c);
	printf("insira o valor de D: ");
	scanf("%d",&d);
	
	diferenca = (a*b)-(c*d);
	printf("DIFERENCA = (%d*%d-%d*%d)\n",a,b,c,d);
	printf("DIFERENCA = %d",diferenca);
	return 0;
}
