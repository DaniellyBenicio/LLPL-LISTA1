#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int av1, av2, av3, soma, subtracao;
	
	printf("Calcular a soma entre dois números\n\n");
	
	printf("Primeira nota: ");
	scanf("%d", &av1);
	
	printf("Segunda nota: ");
	scanf("%d", &av2);
	
	soma = (av1 + av2);
	
	printf("Terceira nota: ");
	scanf("%d", &av3);
	
	
	subtracao = soma - av3;
	
	printf("O valor calculado de %d + %d = %d\n\n", av1, av2, soma);
	printf("O valor calculado de %d - %d  = %d", soma, av3, subtracao);

	return 0;
}
