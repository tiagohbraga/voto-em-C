#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Digite sua idade: ");
		scanf("%d", &idade);
	
	if(idade <= 15)
		printf("\nN�o vota!");
	else 
		if (idade == 16 || idade == 17 || idade > 70)
			printf("\nVoto Facultativo.");
		else 
			printf("\nVoto Obrigat�rio!");
	printf("\n\nO voto � um direito do cidad�o! Escolha bem nas pr�ximas elei��es!!!!\n\n\n\n");
	
	return 0;
}
