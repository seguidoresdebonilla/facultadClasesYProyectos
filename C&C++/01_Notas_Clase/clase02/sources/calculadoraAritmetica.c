#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
	{
	
		// Declarando variables
 
		int primerValor;
		int segundoValor;
		int resultado;
		int option;

		// Parametros del usuario
		
		printf("**********************|SUPER CALCULADORA|************************ \n");
		printf("|---------------------------------------------------------------| \n");
		printf("|Seleccionar una opcion: \n");
		printf("|---------------------------------------------------------------| \n");
		printf("|1... Suma	\n");
		printf("|2... Multiplicar \n");
		printf("|3... Resta	\n");
		printf("|4... Division \n");
		printf("|---------------------------------------------------------------| \n");
		printf("Ingresa una opcion: ");
		scanf("%d", &option);
		
		if (option == 1){
				// Suma super simple
			printf("SUMA \n");
			printf("------ \n");
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor + segundoValor;
			printf("Resultado de la suma: %d", resultado);
			printf("\n");
		}
		
		if (option == 2){
				// Multiplicacion super simple
			printf("MULTIPLICACION \n");
			printf("------ \n");
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor * segundoValor;
			printf("Resultado de la multiplicacion: %d", resultado);
			printf("\n");
		}

		if (option == 3){
				// Resta super simple
			printf("RESTA \n");
			printf("------ \n");
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor - segundoValor;
			printf("Resultado de la resta: %d", resultado);
			printf("\n");
		}
		
		if (option == 4){
				// Division super simple
			printf("DIVISION \n");
			printf("------ \n");
			printf("Ingrese el primer valor: ");
			scanf("%d", &primerValor);
			printf("Ingrese el segundo valor: ");
			scanf("%d", &segundoValor);
			resultado = primerValor / segundoValor;
			printf("Resultado de la division: %d", resultado);
			printf("\n");
		}
		else{
				printf("Ingresa una opcion valida \n");
		}
		
	system("pause");	
	return 0;

	}
