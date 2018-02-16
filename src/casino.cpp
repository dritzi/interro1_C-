#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <joueur.h>
#include <jeu.h>
#include <casino.h>


#define CRAPS 1
#define ROULETTE 2
#define BLACK_JACK 3
#define nbJetonsDepart 100
#define nomJoueur Denis

using namespace std;

Casino::Casino() : public Joueur
{
    srand(time(NULL));
    fstream file;
    string ligneLue;
    string nomJoueur;
    bool quit;
    int choix;

    vector<Jeu*> lesJeux;



    //Remplir le vecteur
    for (int i=0; i<3; i++)
    {

        lesJeux.push_back(new Jeu());
    }

    //on lit le fichier contenant le nom et les points

    file.open("fichier.txt", fstream::out | fstream::in);
    getline(file, ligneLue);



    if (ligneLue.length()==0)
    {
        file << nomJoueur << endl; // si le fichier est vide, on remplit avec les valeurs par défaut
        file << nbJetonsDepart;

    }
    else
    {
        file.clear();

        file >> nomJoueur;// on récupère les infos du fichier nom

        file >> this->Joueur->nbJetons;// nbJetons

    }
    file.close();



    do
    {
        cout << "Bonjour " << nomJoueur << " voulez-vous ?" << endl <<;
        cout << "1: reprendre une partie" << endl;
        cout << "2: faire une nouvelle" << endl;
        cout << "Votre choix:";

        cin >> choix;
    }
    while (choix!=1 && choix !=2);
    if (choix==1)
    {

    }


    while(!quit)//on inerroge le joueur tant qu'il ne veut pas quitter
    {
        cout << "1: Roulette" << endl
             << "2: Craps" << endl
             << "3: Black_Jack" << endl
             << "Votre choix:";

        cin >> choixJeu;

        //On compare les choix
        switch (choixJeu)
        case 1 :

        case 2 :
        case 3 :






        }




}




Casino::~Casino()
{
    //dtor
}
