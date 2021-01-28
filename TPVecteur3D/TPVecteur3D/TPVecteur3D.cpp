#include <iostream>
#include "TPVecteur3D.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

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
    cout << "Produit par un scalaire (ici 2) : " << endl;
    v3 = v1 * 2;
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
}