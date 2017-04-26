#include <stdio.h>
	
int main (void) {

	int p, q;
	double preco;
	scanf("%d %d", &p, &q);

	if(p == 1){
		preco = 4.00;
	}
	if(p == 2){
		preco = 4.50;
	}
	if(p == 3){
		preco = 5.00;
	}
	if(p == 4){
		preco = 2.00;
	}
	if(p ==5){
		preco = 1.50;
	}

		printf("Total: R$ %.2f\n",preco * q);
return 0;
}


