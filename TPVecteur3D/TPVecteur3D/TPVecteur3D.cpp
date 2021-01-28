#include <iostream>
#include "TPVecteur3D.h"
#include "TPVecteur2D.h"
#include "TabVecteur.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    cout << endl;
    cout << "Vecteur 3D" << endl;
    //premier vecteur
    vect3D<int> v1(1, 2, 3);
    v1.affiche();
    //second vecteur
    vect3D<int> v2(4, 5, 6);
    v2.affiche();
    vect3D<int> v3;

    //appel du template addition 
    cout << endl;
    cout << "Addition : " << endl;
    v3 = v1.addition(v2);
    v3.affiche();

    //appel du template soustraction
    cout << endl;
    cout << "Soustraction : " << endl;
    v3 = v1.soustraction(v2);
    v3.affiche();

    //appel du template de produit scalaire
    cout << endl;
    cout << "Produit par un scalaire (ici 12) : " << endl;
    v3 = v1.prodScal(12);
    v3.affiche();

    //appel du template de produit scalaire entre 2 vecteurs
    cout << endl;
    int scale = v1.prodScalVect(v2);
    cout << "Produit scalaire entre 2 vecteurs : " << scale << endl;

    //appel du template du produit vectoriel
    cout << endl;
    cout << "Produit vectoriel : " << endl;
    v3 = v1.prodVect(v2);
    v3.affiche();

    //appel de la fonction coincide 
    cout << endl;
    if (coincide(v1, v2)) {
        cout << "Les vecteurs coincident" << endl;
    }
    else {
        cout << "Les vecteurs ne coincident pas" << endl;
    }

    //surcharge des opérateurs 
    cout << endl;
    cout << "Surcharge operateur" << endl;
    cout << v1;
    cout << v2;

    //addition avec la surcharge d'opérateurs
    cout << endl;
    cout << "Addition : " << endl;
    v3 = v1 + v2;
    cout << v3;

    //soustraction avec la surcharge d'opérateurs
    cout << endl;
    cout << "Soustraction : " << endl;
    v3 = v1 - v2;
    cout << v3;

    //produit scalaire avec la surcharge d'opérateurs
    cout << endl;
    cout << "Produit par un scalaire (ici 12) : " << endl;
    v3 = v1 * 12;
    cout << v3;

    //produit scalaire de 2 vecteurs avec la surcharge d'opérateurs
    cout << "Produit scalaire entre 2 vecteurs : " << v1 * v2 << endl;

    //produit vectoriel avec la surcharge d'opérateurs
    cout << endl;
    cout << "Produit vectoriel : " << endl;
    v3 = v1 ^ v2;
    cout << v3;

    //fonction coincide avec la surcharge d'opérateurs
    cout << endl;
    if (v1 == v2) {
        cout << "Les vecteurs coincident" << endl;
    }
    else {
        cout << "Les vecteurs ne coincident pas" << endl;
    }

    //Vecteur 2D

    cout << endl;
    cout << "Vecteur 2D" << endl;
    vect2D<int> v1_2D(1, 2);
    vect2D<int> v2_2D(3, 4);
    vect2D<int> v3_2D(v1_2D);
    cout << v1_2D;
    cout << v2_2D;

    //addition
    cout << "Addition : " << endl;
    v3_2D = v1_2D + v2_2D;
    cout << v3_2D;

    //soustraction
    cout << endl;
    cout << "Soustraction : " << endl;
    v3_2D = v1_2D - v2_2D;
    cout << v3_2D;

    //produit scalaire de coordonnées
    cout << endl;
    cout << "Produit par un scalaire (ici 12) : " << endl;
    v3_2D = v1_2D * 12;
    cout << v3_2D;

    //produit scalaire de deux vecteurs
    cout << "Produit scalaire entre 2 vecteurs : " << v1_2D * v2_2D << endl;

    cout << endl;
    cout << "Conteneur de vecteurs : " << endl;
    tabVecteur<vect3D<int>, 3> tab;

    tab[0] = v1;
    tab[1] = v2;
    tab[2] = v3;

    cout << tab[0];
    cout << tab[1];
    cout << tab[2];
}