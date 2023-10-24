#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QSqlQuery>
#include<QSqlQueryModel>


class Employe
{QString nom,prenom;
    int id;
public:
    Employe();
    Employe(int,QString,QString);
    QString getnom() {return  nom ;}
    QString getprenom() {return  prenom ;}
    QString getid() {return  nom ;}



    void Setnom(QString n) {nom =n;}
    void Setprenom(QString p) {prenom =p;}
    void Setid(int id){this->id=id;}


    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);




};

#endif // EMPLOYE_H
