#include <stdio.h>

int main() {
	int x1=0,y1=0;
	int x2=0,y2=0;
	float distancia_bruta=0.0;
	float dec=1.0;
	float raiz=0.0;
	printf("P1(x) : ");
	scanf("%d",&x1);
	printf("P1(y) : ");
	scanf("%d",&y1);
	
	printf("P2(x) : ");
	scanf("%d",&x2);
	printf("P2(y) : ");
	scanf("%d",&y2);
	
	distancia_bruta = (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	
	while(dec<10000) {
		while(raiz*raiz < distancia_bruta) {
			raiz += 1/dec;
		} 
		raiz -= 1/dec;
		dec *= 10;
	}
	
	printf("distancia = %.4f",raiz);
	return 0;
}
