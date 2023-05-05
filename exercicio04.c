#include <stdio.h>

int main() {
	int x=0,y=0;
	printf("insira o valor de x: ");
	scanf("%d",&x);
	printf("insira o valor de y: ");
	scanf("%d",&y);
	
	if(x==0 && y==0) {
		printf("Origem");
	} else if(x==0) {
		printf("Eixo y");
	} else if(y==0) {
		printf("Eixo X");
	} else if(x > 0){
		if(y>0) {
			printf("Q1");
		} else {
			printf("Q4");
		}
	} else if(x < 0) {
		if(y>0) {
			printf("Q2");
		} else {
			printf("Q3");
		}
	}
	return 0;
}
