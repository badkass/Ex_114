#pragma once
#include "liste.h"
#include "point.h"

//class h�ritant de liste et de point 
class liste_points : public liste, public point
{

public:
	liste_points();
	point* premier();
	point* prochain();
	void affiche();
};
