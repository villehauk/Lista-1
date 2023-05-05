#include <stdio.h>
#include <stdlib.h>

int main() {
	int mode=0;
	int pineapple = 0, apple = 0, pear = 0;
	float pine_price=5.0, appl_price=1.0, pear_price=4.0;
	int select = 0;
	while(1) {
		if(mode == 0) {
			system("cls");
			printf("+------------------------------+\n");
			printf(" carrinho:\n");
			printf(" ABACAXIS %d   %.2f\n",pineapple,pineapple*pine_price);
			printf(" MACA     %d   %.2f\n",apple,apple*appl_price);
			printf(" PERA     %d   %.2f\n",pear,pear*pear_price);
			printf("\n");
			printf(" Total    %d   %.2f\n",pineapple+apple+pear,pineapple*pine_price+apple*appl_price+pear*pear_price);
			printf("+------------------------------+\n");
			printf(" 1 => ABACAXI : 5.00 a unidade\n");
			printf(" 2 => MACA : 1.00 a unidade\n");
			printf(" 3 => PERA : 4.00 a unidade\n");
			printf("\n");
			printf(" 0 => sair\n");
			printf("+------------------------------+\n");
			scanf("%d",&select);
			switch(select) {
				case 1:
					pineapple++;
					break;
				case 2:
					apple++;
					break;
				case 3:
					pear++;
					break;
				case 0:
					mode = 1;
					break;
			}
		}else if(mode == 1) {
			system("cls");
			printf("+-----------------------------------+\n");
			printf(" ABACAXIS %d   %.2f\n",pineapple,pineapple*pine_price);
			printf(" MACA     %d   %.2f\n",apple,apple*appl_price);
			printf(" PERA     %d   %.2f\n",pear,pear*pear_price);
			printf("\n");
			printf(" Total    %d   %.2f\n",pineapple+apple+pear,pineapple*pine_price+apple*appl_price+pear*pear_price);
			printf("+-----------------------------------+\n");
			printf(" 0 => voltar ao menu\n");
			printf(" 1 => voltar ao menu e nova compra\n");
			printf(" 2 => sair\n");
			printf("+-----------------------------------+\n");
			scanf("%d",&select);
			switch(select) {
				case 0:
					mode = 0;
					break;
				case 1:
					mode = 0;
					pineapple = 0;
					apple = 0;
					pear = 0;
					break;
				case 2:
					mode = 2;
					break;
			}
		} else {
			break;
		}
	}
	return 0;
}
