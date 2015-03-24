#include <stdlib.h>
#include <stdio.h>
#include "Commune.h"

void ChargerCommunes(FILE* fichier2, COMMUNE* communes);
void RechercheCommune();

// fonction qui permet de rechercher des infos relativent a la commune saisie par l'utilisateur
void RechercheCommune()
{
	int saisie;

	printf("Entrer un nom de commune: \n");
	scanf("%s", &saisie);
	system("pause");
}

void ChargerCommunes(FILE* fichier2, COMMUNE* communes)
{
	int c = 0;
	int i = 0;

	rewind(fichier2);

	while ((c = fgetc(fichier2)) != EOF)
	{
		fscanf(fichier2, "%[^;];%[^;];%[^;]", (communes + i)->IdCommune, (communes + i)->NumDepartement, (communes + i)->NomCommune);
		i++;
	}
}

