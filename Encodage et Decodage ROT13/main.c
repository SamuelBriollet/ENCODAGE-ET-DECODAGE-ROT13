#include "stdafx.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char* MotACoder = argv[1];
	int key = 13;
	unsigned int n;
	size_t len = strlen(MotACoder);

	char* MotACoder = argv[1];
	int key = 13;
	unsigned int n;
	
	
	/*if (MotACoder == 0) { 
		MotACoder = "test";
	}
	size_t len = strlen(MotACoder); */ // Me permet de m'assurer que MotACoder pointe vers une cha�ne de caract�res.



	// Toutes les lettres du Mot � Coder

	for (n = 0; n < len; n++)
	{
		int currentLetter = MotACoder[n];

		char cipher = currentLetter + key;

		// On v�rifie que la lettre suivant ne d�passera pas 26
		// Ou n'est pas une lettre ASCII
		// Si c'est le cas, on applique %26 pour revenir dans le groupe de lettre

		if ((currentLetter - 'a') + key > 26)
		{
			key = ((currentLetter - 'a') + key) % 26;
			cipher = 'a' + key;
		}

		// On affiche le codage
		printf("%c", cipher);

		// On remet Key � 13
		// On passe � la lettre suivante
		key = 13;
	}

	printf("\n");
	return 0;
}