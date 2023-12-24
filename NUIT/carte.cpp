
#include "carte.h"

Carte::Carte(QString type, int valeur, QString chemin, int indice)
    : type(type), valeur(valeur), chemin(chemin), indice(indice)
{
}

QString Carte::getType() const
{
    return type;
}

int Carte::getValeur() const
{
    return valeur;
}

QString Carte::getChemin() const
{
    return chemin;
}
int Carte::getIndice() const
{
    return indice;
}


QList<Carte*> Carte::genererPaquetDeCartes()
{
    QList<Carte*> paquetDeCartes;

    // Cartes de type B
    for (int i = 1; i <= 12; ++i) {
        QString chemin = QString(":/Cards/B.%1.jpg").arg(i);
        paquetDeCartes << new Carte("B", i, chemin, i );
    }

    // Cartes de type C
    for (int i = 1; i <= 12; ++i) {
        QString chemin = QString(":/Cards/C.%1.jpg").arg(i);
        paquetDeCartes << new Carte("C", i, chemin, i + 12);
    }

    // Cartes de type O
    for (int i = 1; i <= 12; ++i) {
        QString chemin = QString(":/Cards/O.%1.jpg").arg(i);
        paquetDeCartes << new Carte("O", i, chemin, i + 24);
    }

    // Cartes de type P
    for (int i = 1; i <= 12; ++i) {
        QString chemin = QString(":/Cards/P.%1.jpg").arg(i);
        paquetDeCartes << new Carte("P", i, chemin, i + 36);
    }

    return paquetDeCartes;
}




