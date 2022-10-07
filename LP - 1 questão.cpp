#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float av1, av2, av3, media;
	
	printf("Calculadora de Média Final\n\n");
	
	printf("Primeira nota: ");
	scanf("%f", &av1);
	
	printf("Segunda nota: ");
	scanf("%f", &av2);
	
	printf("Terceira nota: ");
	scanf("%f", &av3);
	
	media = (av1+ av2 + av3)/3;
	
	printf("O valor calculado da media entre os números %.2f, %.2f e %.2f foi: %.2f", av1, av2, av3, media);

	return 0;
}
