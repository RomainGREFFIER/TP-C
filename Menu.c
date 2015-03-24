#include <stdlib.h>
#include <stdio.h>
#include "Menu.h"


//Affiche le menu principal avec possibilité de faire une recherche ou de s'identifier en tant qu'admin
void AfficherMenu()
{
	system("cls");
	int choix = NULL;


	printf("******* Bienvenue dans le programme de recensement Francais ********\n");
	printf("\n");
	printf(" \t\t\t 1- Recherche\n");
	printf("\n");
	printf(" \t\t\t 2- Identification\n");
	printf("\n");
	printf(" \t\t\t 3- Quitter\n");
	printf("\n");
	printf("********************************************************************\n");
	scanf("%ld", &choix);

	switch (choix)
	{
	case 1:
		Recherche();
		break;
	case 2:
		Identification();
		break;
	case 3:
		printf("A bientot\n");
		break;
	}

}

// fonction qui permet d'acceder aux communes, departements recherchés
void Recherche()
{
	int choix2 = NULL;


	system("cls");
	printf("**************************** Recherche ****************************\n");
	printf("\n");
	printf(" \t\t\t 1- Departement\n");
	printf("\n");
	printf(" \t\t\t 2- Villes\n");
	printf("\n");
	printf(" \t\t\t 3- Retour\n");
	printf("\n");
	printf("*******************************************************************\n");
	scanf("%ld", &choix2);

	switch (choix2)
	{
	case 1:
		RechercheDepartement();
		break;
	case 2:
		RechercheCommune();
		break;
	case 3:
		AfficherMenu();
		break;
	}
}

// fonction qui permet de s'identifier en tant qu'admin
void Identification()
{
	int MDP = 123;
	int saisie = NULL;
	printf("Mot de passe: \n");
	scanf("%d", &saisie);

	if (saisie == MDP)
	{
		MenuAdmin();
	}

	else
	{
		do
		{
			printf("Mot de passe eronne..\n");
			system("pause");
			printf("Mot de passe: \n");
			scanf("%d", &saisie);
		} while (saisie != MDP);
		MenuAdmin();
	}
}

// fonction qui affiche le menu admin permettant de créer, modifier, gérer les communes ainsi que de nouveaux recensements
void MenuAdmin()
{
	system("cls");
	int choix3 = NULL;

	printf("*************************** Session Admin **************************\n");
	printf("\n");
	printf(" \t\t\t 1- Editer\n");
	printf("\n");
	printf(" \t\t\t 2- Nouveau recensement\n");
	printf("\n");
	printf(" \t\t\t 3- Retour\n");
	printf("\n");
	printf("********************************************************************\n");
	scanf("%ld", &choix3);

	switch (choix3)
	{
	case 1:
		Editer();
		break;
	case 2:
		NouveauRecensement();
		break;
	case 3:
		AfficherMenu();
		break;
	}
}

// fonction pour admin permettant d'editer de nouvelles communes, département...
void Editer()
{

}