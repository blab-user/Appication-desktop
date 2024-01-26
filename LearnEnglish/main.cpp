#include "learnenglish.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include<QSplashScreen>
#include<QTimer>
#include "learnenglish.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "LearnEnglish_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    LearnEnglish w;
    // afficher une image de demarage
    QSplashScreen *splash = new QSplashScreen;
    //QPixmap pixmap("Desktop\projet-c++\Game_learn\Game_learn\Ressource\img demarrage");
    splash->setPixmap(QPixmap("C:/Users/Rosaire-Vezolo/Desktop/projet-c++/Game_learn/Game_learn/Ressource/img_demarrage/imag.png"));
    splash->show();

    //faire la fermeture
    QTimer::singleShot(3000,splash, SLOT(close()));
    //creer la fenetre principale
    QTimer::singleShot(3000, &w, SLOT(show()));


    return a.exec();
}
