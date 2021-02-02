#pragma once

struct element   
{
	element* suivant = nullptr;  //pointeur sur l'�l�ment suivant
	void* contenu = nullptr;	 //pointeur sur un objet quelconque
};

class liste
{
protected:
	element* debut;		//pointeur sur premier �l�ment
	int cursor;

public:
	liste();	//constructeur 
	~liste();	//destructeur 

	void ajoute(void*); //ajout d'un �l�ment en d�but de liste
	void* premier();	//premier �l�ment
	void* prochain();	//prochain �l�ment
	int fini();
};

