#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Digite sua idade: ");
		scanf("%d", &idade);
	
	if(idade <= 15)
		printf("\nNão vota!");
	else 
		if (idade == 16 || idade == 17 || idade > 70)
			printf("\nVoto Facultativo.");
		else 
			printf("\nVoto Obrigatório!");
	printf("\n\nO voto é um direito do cidadão! Escolha bem nas próximas eleições!!!!\n\n\n\n");
	
	return 0;
}
