#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int av1, av2, resto;
	float quociente;
	
	printf("Calcular o quociente e o resto entre dois números\n\n");
	
	printf("Primeira nota: ");
	scanf("%d", &av1);
	
	printf("Segunda nota: ");
	scanf("%d", &av2);
	
	quociente = (float) av1 / av2;
	resto = av1 % av2;
	
	printf("Calcular o quociente entre os números %d, %d foi: %.2f\n", av1, av2, quociente);
	printf("Calcular o resto entre eles %d, %d foi: %d", av1, av2, resto);

	return 0;
}
