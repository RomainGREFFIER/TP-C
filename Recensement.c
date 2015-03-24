#include <stdlib.h>
#include <stdio.h>
#include "Recensement.h"

void ChargerRecensements(FILE* fichier2, RECENSEMENT* recensements);
void NouveauRecensement();

void ChargerRecensements(FILE* fichier2, RECENSEMENT* recensements)
{
	int c = 0;
	int i = 0;

	rewind(fichier2);

	while ((c = fgetc(fichier2)) != EOF)
	{
		fscanf(fichier2, "%[^;];%[^;];%[^;];%[^\n]", (recensements + i)->NomCommune, (recensements + i)->Population, (recensements + i)->Annee);
		i++;
	}
}

// fonction pour admin qui permet d'editer de nouveaux recensement
void NouveauRecensement()
{

}



