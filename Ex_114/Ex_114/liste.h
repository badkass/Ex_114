#pragma once

struct element   
{
	element* suivant = nullptr;  //pointeur sur l'élément suivant
	void* contenu = nullptr;	 //pointeur sur un objet quelconque
};

class liste
{
protected:
	element* debut;		//pointeur sur premier élément
	int cursor;

public:
	liste();	//constructeur 
	~liste();	//destructeur 

	void ajoute(void*); //ajout d'un élément en début de liste
	void* premier();	//premier élément
	void* prochain();	//prochain élément
	int fini();
};

