#ifndef JOUEUR_H
#define JOUEUR_H



class Joueur
{
    public:
        Joueur(int nbJetons);
        virtual ~Joueur();
        reprendrePartie();
        nouvellePartie();
        int nbJetons;
        int choixJeu;



    protected:

    private:




};

#endif // JOUEUR_H
