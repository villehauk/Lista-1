#include <stdio.h>

int main() {
	int n=0,i=0;
	int i0=0,i1=0,i2=0;
	do{
		printf("insira um numero natural (numero >= 0): ");
		scanf("%d",&n);
	}while(n<0);
	
	i0 = 0;
	i1 = 1;
	i2 = 1;
	if(n==0 || n==1) {
		printf("%d",n);
	}else{
		for(i=3;i<=n;i++) {
			i0 = i1;
			i1 = i2;
			i2 = i0+i1;
		}
	}
	printf("termo n%d da sequencia de fibonacci: %d",n,i2);
	return 0;
}
