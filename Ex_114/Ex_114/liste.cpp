#include "liste.h"

//constructeur
liste::liste()
{
	this->debut = nullptr;
	cursor = 0;
}

//destructeur 
liste::~liste()
{
	delete (debut);
}

//fonction ajoute
void liste::ajoute(void* newCont)
{
	element* el = new element;
	el->suivant = this->debut;
	el->contenu = newCont;

	this->debut = el;
}

//fonction premier qui fournit l'adresse de l'information associé au premier noeud de la liste
void* liste::premier()
{
	this->cursor = 0;
	return this->debut->contenu;
}

//fonction prochain qui fournit l'adresse de l'information associé au prochain noeud 
void* liste::prochain()
{
	int i = 0;
	cursor++;
	element* el = this->debut;
	while (i < cursor)
	{
		if (el->suivant == nullptr)
			return el->contenu;
		el = el->suivant;
		i++;
	}
	return el->contenu;
}

//fonction fini qui permet de savoir si la fin de la liste est atteinte
int liste::fini()
{
	int i = 0;
	element* el = this->debut;
	while (el->suivant != nullptr)
	{
		el = el->suivant;
		i++;
	}
	return (cursor == i);
}