#include <stdio.h>
#define PI 3.14159

int main() {
	float r = 0.0;
	printf("insira o raio: ");
	scanf("%f",&r);
	
	printf("area de superficie = %f\n",4*PI*(r*r));
	printf("volume = %f",(4.0/3)*PI*(r*r*r));
	return 0;
}
