#include <stdlib.h>
#include <stdio.h>
#include "Commune.h"
#include "Departement.h"
#include "Recensement.h"
#include "Menu.h"

int FichierNbLigne(FILE* fichier);
int FichierNbLignes(FILE* fichier2);

int main(int argc, char *argv[])
{
	AfficherMenu();
	FILE* fichier = NULL;
	FILE* fichier2 = NULL;
	DEPARTEMENT* departements = NULL;
	COMMUNE* communes = NULL;
	RECENSEMENT* recensements = NULL;

	fichier = fopen("departements.csv", "r");
	fichier2 = fopen("recensements.csv", "r");

	int nbLignes = 0;


	if (fichier2 != NULL)
	{
		nbLignes = FichierNbLignes(fichier2);
		recensements = malloc(sizeof(RECENSEMENT)* nbLignes);

		ChargerRecensements(fichier2, recensements);

		//for (int i = 0; i < nbLignes; i++)
		//{
		//	printf("NomCommune : %s\nPopulation : %s\nAnnée : %s\n\n", (recensements + i)->NomCommune, (recensements + i)->Population, (recensements + i)->Annee);
		//}
	}
	else
	{
		printf("Erreur");
	}
	fclose(fichier2);


	if (fichier != NULL)
	{
		nbLignes = FichierNbLignes(fichier);
		departements = malloc(sizeof(DEPARTEMENT)* nbLignes);

		ChargerDepartements(fichier, departements);

		//for (int i = 0; i < nbLignes; i++)
		//{
		//	printf("NumDepartement : %s\nNomDepartement : %s\nPrefecture : %s\nRegion : %s\n\n", (departements + i)->NumDepartement, (departements + i)->NomDepartement, (departements + i)->Prefecture, (departements + i)->Region);
		//}
	}
	else
	{
		printf("Erreur");
	}

	fclose(fichier);


	if (fichier2 != NULL)
	{
		nbLignes = FichierNbLignes(fichier2);
		communes = malloc(sizeof(COMMUNE)* nbLignes);

		ChargerCommunes(fichier2, communes);

		//for (int i = 0; i < nbLignes; i++)
		//{
		//	printf("NumDepartement : %s\nIdCommune : %s\nNomCommune : %s\n\n", (communes + i)->NumDepartement, (communes + i)->IdCommune, (communes + i)->NomCommune);
		//}
	}
	else
	{
		printf("Erreur");
	}

	fclose(fichier2);



	system("pause");
	return 0;

}

int FichierNbLignes(FILE* fichier2)
{
	int nbLignes = 0;
	int ch;

	rewind(fichier2);

	do
	{
		ch = fgetc(fichier2);
		if (ch == '\n')
		{
			nbLignes++;
		}
	} while (ch != EOF);

	return nbLignes;
}

int FichierNbLigne(FILE* fichier)
{
	int nbLignes = 0;
	int ch;

	rewind(fichier);

	do
	{
		ch = fgetc(fichier);
		if (ch == '\n')
		{
			nbLignes++;
		}
	} while (ch != EOF);

	return nbLignes;
}


















