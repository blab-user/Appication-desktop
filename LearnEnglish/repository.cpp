
#include<QList>
#include <QCoreApplication>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QDebug>

class Repository
{
private:

public:
    Repository() {}

    static QJsonObject questionLevel1(){
        // Nom du fichier JSON
        QString nomFichier = "C:/Users/Rosaire-Vezolo/Desktop/projet-c++/Game_learn/Game_learn/LearnEnglish/Data_1.json";
        //QJsonObject data;
        QJsonObject quiz;
        // Ouvrir le fichier en mode lecture
        QFile file(nomFichier);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << "Impossible d'ouvrir le fichier JSON.";
            return quiz;
        }

        // Lire les données du fichier
        QByteArray donneesJson = file.readAll();

        // Fermer le fichier
        file.close();

        // Convertir les données JSON en document JSON
        QJsonDocument document = QJsonDocument::fromJson(donneesJson);

        // Vérifier si l'analyse JSON a réussi
        if (document.isNull()) {
            qDebug() << "Erreur d'analyse JSON.";
            return quiz;
        }

        // Extraire l'objet JSON racine
        quiz = document.object();

        return quiz;
    }

    static QJsonObject questionLevel2(){
        // Nom du fichier JSON
        QString nomFichier = "C:/Users/Rosaire-Vezolo/Desktop/projet-c++/Game_learn/Game_learn/LearnEnglish/Data_2.json";
        //QJsonObject data;
        QJsonObject quiz;
        // Ouvrir le fichier en mode lecture
        QFile file(nomFichier);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << "Impossible d'ouvrir le fichier JSON.";
            return quiz;
        }

        // Lire les données du fichier
        QByteArray donneesJson = file.readAll();

        // Fermer le fichier
        file.close();

        // Convertir les données JSON en document JSON
        QJsonDocument document = QJsonDocument::fromJson(donneesJson);

        // Vérifier si l'analyse JSON a réussi
        if (document.isNull()) {
            qDebug() << "Erreur d'analyse JSON.";
            return quiz;
        }

        // Extraire l'objet JSON racine
        quiz = document.object();

        return quiz;
    }

    static QJsonObject questionLevel3(){
        // Nom du fichier JSON
        QString nomFichier = "C:/Users/Rosaire-Vezolo/Desktop/projet-c++/Game_learn/Game_learn/LearnEnglish/Data_3.json";
        //QJsonObject data;
        QJsonObject quiz;
        // Ouvrir le fichier en mode lecture
        QFile file(nomFichier);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << "Impossible d'ouvrir le fichier JSON.";
            return quiz;
        }

        // Lire les données du fichier
        QByteArray donneesJson = file.readAll();

        // Fermer le fichier
        file.close();

        // Convertir les données JSON en document JSON
        QJsonDocument document = QJsonDocument::fromJson(donneesJson);

        // Vérifier si l'analyse JSON a réussi
        if (document.isNull()) {
            qDebug() << "Erreur d'analyse JSON.";
            return quiz;
        }

        // Extraire l'objet JSON racine
        quiz = document.object();

        return quiz;
    }
};
