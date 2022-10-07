#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float av1, av2, av3, av4, produto;
	
	printf("Produto entre quatro números\n\n");
	
	printf("Primeira nota: ");
	scanf("%f", &av1);
	
	printf("Segunda nota: ");
	scanf("%f", &av2);
	
	printf("Terceira nota: ");
	scanf("%f", &av3);
	
	printf("Quarta nota: ");
	scanf("%f", &av4);
	
	produto = (av1 * av2 * av3 * av4);
	
	printf("O valor calculado do produto entre os números %.2f, %.2f, %.2f e %.2f foi: %.2f", av1, av2, av3, av4, produto);

	return 0;
}
