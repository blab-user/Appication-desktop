#ifndef USER_H
#define USER_H
#include<QList>
#include <QStringList>
#include <QString>
class user
{
private:
    QString pseudo;
    int score;
    int niveauActuel;
    QStringList historique;
public:
    user();
    // appel setter
    void setPseudo(QString pseudo){
        this->pseudo=pseudo;
    }

    void setScore(int score){
        this->score=score;
    }

    void setNiveauActuel(int niveauActuel){
        this->niveauActuel=niveauActuel;
    }

    void setHistrique(QStringList historique){
        this->historique=historique;
    }

    QString getPseudo(void){
        return(this->pseudo);
    }

    int getScore(void){
        return(this->score);
    }

    int getNiveauActuel(void){
        return(this->niveauActuel);
    }

    QStringList getHistorique(void){
        return(this->historique);
    }
};

#endif // USER_H
