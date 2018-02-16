#ifndef CASINO_H
#define CASINO_H
#include <joueur.h>


class Casino : public Joueur
{
public:

    Casino(Jeu);
    virtual ~Casino();


        bool jeuTermine();

protected:

private:
        Joueur * nouveauJoueur;
        Jeu craps  ;
        Jeu roulette  ;
        Jeu black_jack ;




};

#endif // CASINO_H
