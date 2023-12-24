
#ifndef CARD_H
#define CARD_H

#include <QString>
#include <QList>

class Carte
{
public:
    Carte(QString type, int valeur, QString chemin,int indice);
    QString getType() const;
    int getValeur() const;
    QString getChemin() const;
    int getIndice() const;
    static QList<Carte*> genererPaquetDeCartes();

private:
    QString type;
    int valeur;
    QString chemin;
    int indice;
};

#endif // CARD_H


