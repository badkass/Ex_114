#include <iostream>
#include "liste.h"
#include "listes_points.h"
#include "point.h"

using namespace std;

int main()
{
    liste l;
    int a = 2;
    float b = 5.23f;
    l.ajoute(&a);
    l.ajoute(&b);
    //on va afficher l'adresse du premier élément de la liste
    cout << l.premier() << endl;
    //temps que le bout de la liste n'est pas atteint, on va afficher l'adresse de chaque point contenu dans cette liste
    while (!l.fini())
    {
        void* ptr;
        ptr = l.prochain();
        cout << ptr << endl;
    }
    //on créé lp de type listes_points et pa et pb de type point
    liste_points lp;
    point pa(1, 2);
    point pb(3, 4);

    //on ajoute pa et pb à la liste
    lp.ajoute(&pa);
    lp.ajoute(&pb);

    //on affiche le tout
    lp.affiche();
}
