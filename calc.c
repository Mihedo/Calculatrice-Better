#include <stdio.h>
#include <stdlib.h>



/*En console, pour faire un menu, on fait des printf qui affichent les différentes options possibles. Chaque option est numérotée, et l'utilisateur doit entrer le numéro du menu qui l'intéresse.
Voici par exemple ce que la console devra afficher :
=== Menu ===
1. Royal Cheese
2. Mc Deluxe
3. Mc Bacon
4. Big Mac
Votre choix ?
Votre mission (si vous l'acceptez) :
Reproduire ce menu à l'aide de printf.
Ajouter un scanf pour enregistrer le choix de l'utilisateur dans une variable choixMenu.
Faire un switch pour dire à l'utilisateur "tu as choisi le menu Royal Cheese", par exemple.*/

int main()
{


	int menuchoice, number1 = 0, number2 = 0, result = 0;

	printf("1.addition\n");
	printf("2. soustraction\n");
	printf("3. Division\n");

	scanf_s("%d", &menuchoice);

	switch (menuchoice)
	{
	case 1:
		printf("calculatrice V 0.0\n ");
		printf(" write your first number  \n ");
		scanf_s("%d", &number1);
		printf(" Now write your seconde number\n ");
		scanf_s("%d", &number2);

		printf("Ok good now i will show you the result");

		result = number1 + number2;

		printf("Your result for %d + %d = %d", number1, number2, result);
		break;
	case 2:
		printf("calculatrice V 0.0\n ");
		printf(" write your first number  \n ");
		scanf_s("%d", &number1);
		printf(" Now write your seconde number\n ");
		scanf_s("%d", &number2);

		printf("Ok good now i will show you the result");

		result = number1 - number2;

		printf("Your result for %d + %d = %d", number1, number2, result);		break;
	case 3:
		printf("calculatrice V 0.0\n ");
		printf(" write your first number  \n ");
		scanf_s("%d", &number1);
		printf(" Now write your seconde number\n ");
		scanf_s("%d", &number2);

		printf("Ok good now i will show you the result");

		result = number1 + number2;

		printf("Your result for %d / %d = %d", number1, number2, result);
		break;
	default:
		printf("Avez vous fait un voyage dans le temps ? \nCar pour l'instant nous possedon pas le menu %d ", menuchoice);
		break;
	}




	return 0;
}
