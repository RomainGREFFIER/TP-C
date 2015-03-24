#include <stdlib.h>
#include <stdio.h>
#include "Departement.h"

void ChargerDepartements(FILE* fichier, DEPARTEMENT* departements);
void RechercheDepartement();



void ChargerDepartements(FILE* fichier, DEPARTEMENT* departements)
{
	int c = 0;
	int i = 0;

	rewind(fichier);

	while ((c = fgetc(fichier)) != EOF)
	{
		fscanf(fichier, "%[^;];%[^;];%[^;];%[^\n]", (departements + i)->NumDepartement, (departements + i)->NomDepartement, (departements + i)->Prefecture, (departements + i)->Region);
		i++;
	}
}

// fonction qui permet de rechercher des infos relativent au departement saisie par l'utilisateur
void RechercheDepartement()
{
	int saisie;
	DEPARTEMENT* departements = NULL;
	int nbLignes = 0;

	for (int i = 0; i < nbLignes; i++)
	{
		printf("NumDepartement : %s\nNomDepartement : %s\nPrefecture : %s\nRegion : %s\n\n", (departements + i)->NumDepartement, (departements + i)->NomDepartement, (departements + i)->Prefecture, (departements + i)->Region);
	}
}
