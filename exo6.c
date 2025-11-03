#include <stdio.h>
int main()
 {

	printf(" r = pierre\n p = papier\n c = ciseaux");
	while (1)
	{
		char joueur1 = 'p';
		char joueur2 = 'p';
		printf("\ntour du joueur1");
		scanf(" %c", &joueur1);
		printf("\ntour du joueur2");
		scanf(" %c", &joueur2);
		if (joueur1 == joueur2)
		{
			printf("egalite \n");
		}
		else if ((joueur1 == 'r' && joueur2 == 'c') || (joueur1 == 'c' && joueur2 == 'p')
			|| (joueur1 == 'p' && joueur2 == 'r'))
		{

			printf("joueur 1 a gagne");
			break;
		}
		else {
			printf("joueur 2 a gagne ");

			break;
		}
	
	}
    return 0;
 }