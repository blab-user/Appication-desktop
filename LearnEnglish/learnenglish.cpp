#include "learnenglish.h"
#include "./ui_learnenglish.h"
#include "QSettings"
#include "QDebug"
#include "QLineEdit"
#include "game.h"
#include <QMessageBox>
#include <QListView>
#include <QStandardItemModel>
#include <QRadioButton>

LearnEnglish::LearnEnglish(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LearnEnglish)
{
    ui->setupUi(this);
    QSettings settings("LeranEnglish","InterfaceSouscription");
    QString user = settings.value("pseudo").toString(); //recuper le pseudo
    //Déconnexiion
    //settings.remove("pseudo");
    //settings.remove("pseudo");
    if(user.isEmpty()){
        ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+ 1); //afficher la page de 1 pseudo
    }else{
        ui->label_8->setText(user);// recupéré l'element dans le label

        ui->stackedWidget->setCurrentIndex(0); //afficher la 2eme pages
    }
    connect(ui->pushButton_6, &QPushButton::clicked, this, &QWidget::close); // bouton close

    connect(ui->actionA_Propos, & QAction::triggered, this, &::LearnEnglish::a_propro);// fenetre a propos
}

LearnEnglish::~LearnEnglish()
{
    delete ui;
}
void LearnEnglish:: a_propro(void){

    QMessageBox::information(this, "A Propos ", "ceci est un message est une application pour tester votre niveau en anglais");
}

void LearnEnglish::on_pushButton_clicked()
{

    try { //enregistrer le pseudo
        QString pseudo = ui->field_pseudo->text(); // saisir la valeur dans le chand
        QSettings settings("LeranEnglish","InterfaceSouscription");
        settings.setValue("pseudo", pseudo);
        // qDebug<<"la votre pseudo est: "<<pseudo;
        ui->label_8->setText(settings.value("pseudo").toString());// recupéré l'element dans le label
        ui->stackedWidget->setCurrentIndex(0); //afficher la page suivante
    } catch (...) {

    }
}


void LearnEnglish::on_pushButton_5_clicked()
{
    QSettings settings("LeranEnglish","InterfaceSouscription");
    QString user = settings.value("pseudo").toString(); //recuper le pseudo
    QString level = settings.value("usually_level").toString(); // recuperer le niveau actuel
    ui->label_19->setText(user);
    ui->label_21->setText(level);
    ui->stackedWidget->setCurrentIndex(5);
}


void LearnEnglish::on_pushButton_2_clicked()
{
    QSettings settings("LeranEnglish","InterfaceSouscription");
    //Index de la question a affiché
    int questionId = 1;
    settings.setValue("questionId", questionId);
    // Créer un modèle de données
    QStandardItemModel *model = new QStandardItemModel;
    Game game = Game();

    //Initialisation des questions
    game.playLevel1();

    //La liste des questions
    QList<Quiz> questions = game.getListQuiz();

    //Recherche de la question via son id
    foreach (Quiz quiz, questions) {
        //Vérification de l'id de la question
        if(quiz.getId() == questionId){
            //Quiz quiz = questions.first();
            //Le nombre de question
            int nbre = questions.length();
            QString nbreQuestion = QString::number(questionId)+"/"+QString::number(nbre);

            ui->label_11->setText(nbreQuestion);
            //qDebug() <<"Valeur: "<< question.length();
            ui->label_9->setText(quiz.getQuestion());
            foreach (auto valeur, quiz.getAnswer()) {
                QStandardItem *item = new QStandardItem(valeur.getAnswerx());
                bool correct = valeur.getCorrectx();
                if(correct){
                    settings.setValue("answerCorrect", valeur.getAnswerx());
                }
                QRadioButton *boutonRadio = new QRadioButton();
                item->setData(QVariant::fromValue(boutonRadio), Qt::DecorationRole);
                model->appendRow(item);
            }
            //qDebug() <<"Valeur: "<< question.first().getQuestion();
            QListView *listView  = ui->listView;
            listView->setModel(model);

            ui->stackedWidget->setCurrentIndex(1); //niveau 1
            break;
        }
    }

}



void LearnEnglish::on_pushButton_3_clicked()
{
    QSettings settings("LeranEnglish","InterfaceSouscription");
    //Index de la question a affiché
    int questionId = 1;
    settings.setValue("questionId", questionId);
    // Créer un modèle de données
    QStandardItemModel *model = new QStandardItemModel;
    Game game = Game();

    //Initialisation des questions
    game.playLevel2();

    //La liste des questions
    QList<Quiz> questions = game.getListQuiz();
    //qDebug() <<"Valeur: "<< questions.length();
    //Recherche de la question via son id
    foreach (Quiz quiz, questions) {
        //Vérification de l'id de la question
        if(quiz.getId() == questionId){
            //Quiz quiz = questions.first();
            //Le nombre de question
            int nbre = questions.length();
            QString nbreQuestion = QString::number(questionId)+"/"+QString::number(nbre);

            ui->label_28->setText(nbreQuestion);

            ui->label_45->setText(quiz.getQuestion());
            foreach (auto valeur, quiz.getAnswer()) {
                QStandardItem *item = new QStandardItem(valeur.getAnswerx());
                bool correct = valeur.getCorrectx();
                if(correct){
                    settings.setValue("answerCorrect", valeur.getAnswerx());
                }
                QRadioButton *boutonRadio = new QRadioButton();
                item->setData(QVariant::fromValue(boutonRadio), Qt::DecorationRole);
                model->appendRow(item);
            }
            //qDebug() <<"Valeur: "<< quiz.getQuestion();
            QListView *listView  = ui->listView_3;
            listView->setModel(model);

            ui->stackedWidget->setCurrentIndex(2); //niveau 2
            break;
        }
    }
}


void LearnEnglish::on_pushButton_4_clicked()
{
    QSettings settings("LeranEnglish","InterfaceSouscription");
    //Index de la question a affiché
    int questionId = 1;
    settings.setValue("questionId", questionId);
    // Créer un modèle de données
    QStandardItemModel *model = new QStandardItemModel;
    Game game = Game();

    //Initialisation des questions
    game.playLevel3();

    //La liste des questions
    QList<Quiz> questions = game.getListQuiz();
    //qDebug() <<"Valeur: "<< questions.length();
    //Recherche de la question via son id
    foreach (Quiz quiz, questions) {
        //Vérification de l'id de la question
        if(quiz.getId() == questionId){
            //Quiz quiz = questions.first();
            //Le nombre de question
            int nbre = questions.length();
            QString nbreQuestion = QString::number(questionId)+"/"+QString::number(nbre);

            ui->label_50->setText(nbreQuestion);

            ui->label_47->setText(quiz.getQuestion());
            foreach (auto valeur, quiz.getAnswer()) {
                QStandardItem *item = new QStandardItem(valeur.getAnswerx());
                bool correct = valeur.getCorrectx();
                if(correct){
                    settings.setValue("answerCorrect", valeur.getAnswerx());
                }
                QRadioButton *boutonRadio = new QRadioButton();
                item->setData(QVariant::fromValue(boutonRadio), Qt::DecorationRole);
                model->appendRow(item);
            }
            //qDebug() <<"Valeur: "<< quiz.getQuestion();
            QListView *listView  = ui->listView_6;
            listView->setModel(model);

            ui->stackedWidget->setCurrentIndex(3); //niveau 3
            break;
        }
    }
}



void LearnEnglish::on_pushButton_8_clicked()
{

    QSettings settings("LeranEnglish","InterfaceSouscription");
    //Index de la question
    int questionId = settings.value("questionId").toInt();
    //Réccuperation de la réponse correcte
    QString answerCorrect = settings.value("answerCorrect").toString();
    // Récupérer l'élément actuellement sélectionné dans la vue
    QModelIndex index = ui->listView->currentIndex();
    // Récupérer la valeur associée à l'élément
    QVariant answer = index.data(Qt::DisplayRole);
    Game game = Game();

    //Initialisation des questions
    game.playLevel1();

    //La liste des questions
    QList<Quiz> questions = game.getListQuiz();


    //Le nombre de question
    int nbre = questions.length();

    if(answerCorrect == answer && questionId == questions.length()){
        settings.setValue("usually_level","NIveau 1");
       ui->stackedWidget->setCurrentIndex(4);
    }else if(answerCorrect != answer){
        ui->label_12->setText("Réponse incorrecte");

    }else{
        ui->label_12->setText("");
        questionId += 1;
        settings.setValue("questionId", questionId);
        // Créer un modèle de données
        QStandardItemModel *model = new QStandardItemModel(this);


        //Recherche de la question via son id
        foreach (Quiz quiz, questions) {
            //Vérification de l'id de la question
            if(quiz.getId() == questionId){

                QString nbreQuestion = QString::number(questionId)+"/"+QString::number(nbre);

                settings.setValue("niveau", quiz.getLevel());

                ui->label_11->setText(nbreQuestion);
                //qDebug() <<"Valeur: "<< question.length();
                ui->label_9->setText(quiz.getQuestion());

                foreach (auto valeur, quiz.getAnswer()) {
                    QStandardItem *item = new QStandardItem(valeur.getAnswerx());
                    bool correct = valeur.getCorrectx();
                    //Sauvégarder la bonne réponse
                    if(correct){
                        settings.setValue("answerCorrect", valeur.getAnswerx());
                    }
                    QRadioButton *boutonRadio = new QRadioButton();
                    item->setData(QVariant::fromValue(boutonRadio), Qt::DecorationRole);
                    model->appendRow(item);
                }
                //qDebug() <<"Valeur: "<< question.first().getQuestion();
                QListView *listView  = ui->listView;
                listView->setModel(model);

                ui->stackedWidget->setCurrentIndex(1); //niveau 1

                break;
            }
        }
    }

}

//page 0 bouton deconnexion
void LearnEnglish::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);  //  boutton Deconnexion vers la page de connexion saisie pseudo
    QSettings settings("LeranEnglish","InterfaceSouscription");
    settings.remove("pseudo"); // a la deconnexion le pseudo disparait et le niveau actuel sur le profil
    settings.remove("usually_level");//page accueil
}


void LearnEnglish::on_pushButton_30_clicked()
{
  ui->stackedWidget->setCurrentIndex(0);  // page_3 niveau 1 boutton levels
}

 //page niveau_2

void LearnEnglish::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);  // page niveau 2 boutton acceuil
}


void LearnEnglish::on_pushButton_31_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);  // page niveau 2 boutton levels
}

//page niveau_3
void LearnEnglish::on_pushButton_34_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);  // page niveau 3 boutton acceuil
}


void LearnEnglish::on_pushButton_33_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);  // page niveau 3 boutton levels
}
void LearnEnglish::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // page de felicitation retour bouton page d'accueil
}

void LearnEnglish::on_pushButton_19_clicked()
{
    QSettings settings("LeranEnglish","InterfaceSouscription");
    //Index de la question
    int questionId = settings.value("questionId").toInt();
    //Réccuperation de la réponse correcte
    QString answerCorrect = settings.value("answerCorrect").toString();
    // Récupérer l'élément actuellement sélectionné dans la vue
    QModelIndex index = ui->listView_3->currentIndex();
    // Récupérer la valeur associée à l'élément
    QVariant answer = index.data(Qt::DisplayRole);
    // Créer un modèle de données
    QStandardItemModel *model = new QStandardItemModel(this);
    Game game = Game();

    //Initialisation des questions
    game.playLevel2();

    //La liste des questions
    QList<Quiz> questions = game.getListQuiz();

    if(answerCorrect == answer && questionId == questions.length()){
        settings.setValue("usually_level","NIveau 2");
        ui->stackedWidget->setCurrentIndex(4);
    }else if(answerCorrect != answer){
        ui->label_25->setText("Réponse incorrecte");

    }else{
        ui->label_25->setText("");
        questionId += 1;
        settings.setValue("questionId", questionId);


        //Recherche de la question via son id
        foreach (Quiz quiz, questions) {
            //Vérification de l'id de la question
            if(quiz.getId() == questionId){
                //Le nombre de question
                int nbre = questions.length();
                QString nbreQuestion = QString::number(questionId)+"/"+QString::number(nbre);

                ui->label_28->setText(nbreQuestion);
                //qDebug() <<"Valeur: "<< question.length();
                ui->label_45->setText(quiz.getQuestion());

                foreach (auto valeur, quiz.getAnswer()) {
                    QStandardItem *item = new QStandardItem(valeur.getAnswerx());
                    bool correct = valeur.getCorrectx();
                    settings.setValue("niveau", quiz.getLevel());
                    //Sauvégarder la bonne réponse
                    if(correct){
                        settings.setValue("answerCorrect", valeur.getAnswerx());
                    }
                    QRadioButton *boutonRadio = new QRadioButton();
                    item->setData(QVariant::fromValue(boutonRadio), Qt::DecorationRole);
                    model->appendRow(item);
                }
                //qDebug() <<"Valeur: "<< question.first().getQuestion();
                QListView *listView  = ui->listView_3;
                listView->setModel(model);

                ui->stackedWidget->setCurrentIndex(2); //niveau 2
                if(questionId == nbre){

                }
                break;
            }
        }
    }
}


void LearnEnglish::on_pushButton_32_clicked()
{
    QSettings settings("LeranEnglish","InterfaceSouscription");
    //Index de la question
    int questionId = settings.value("questionId").toInt();
    //Réccuperation de la réponse correcte
    QString answerCorrect = settings.value("answerCorrect").toString();
    // Récupérer l'élément actuellement sélectionné dans la vue
    QModelIndex index = ui->listView_6->currentIndex();
    // Récupérer la valeur associée à l'élément
    QVariant answer = index.data(Qt::DisplayRole);

    QStandardItemModel *model = new QStandardItemModel(this);
    Game game = Game();

    //Initialisation des questions
    game.playLevel3();

    //La liste des questions
    QList<Quiz> questions = game.getListQuiz();

    if(answerCorrect == answer && questionId == questions.length()){
        ui->stackedWidget->setCurrentIndex(5);
    }else if(answerCorrect != answer){
        ui->label_46->setText("Réponse incorrecte");

    }else{
        ui->label_46->setText("");
        questionId += 1;
        settings.setValue("questionId", questionId);
        // Créer un modèle de données


        //Recherche de la question via son id
        foreach (Quiz quiz, questions) {
            //Vérification de l'id de la question
            if(quiz.getId() == questionId){
                //Le nombre de question
                int nbre = questions.length();
                settings.setValue("usually_level","NIveau 3");
                QString nbreQuestion = QString::number(questionId)+"/"+QString::number(nbre);

                ui->label_50->setText(nbreQuestion);
                //qDebug() <<"Valeur: "<< question.length();
                ui->label_47->setText(quiz.getQuestion());

                foreach (auto valeur, quiz.getAnswer()) {
                    QStandardItem *item = new QStandardItem(valeur.getAnswerx());
                    bool correct = valeur.getCorrectx();
                    settings.setValue("niveau", quiz.getLevel());
                    //Sauvégarder la bonne réponse
                    if(correct){
                        settings.setValue("answerCorrect", valeur.getAnswerx());
                    }
                    QRadioButton *boutonRadio = new QRadioButton();
                    item->setData(QVariant::fromValue(boutonRadio), Qt::DecorationRole);
                    model->appendRow(item);
                }
                //qDebug() <<"Valeur: "<< question.first().getQuestion();
                QListView *listView  = ui->listView_6;
                listView->setModel(model);

                ui->stackedWidget->setCurrentIndex(3); //niveau 2

                break;
            }
        }
    }
}


void LearnEnglish::on_pushButton_10_clicked()
{
    QSettings settings("LeranEnglish","InterfaceSouscription");
    int level = settings.value("niveau").toInt();

    Game game = Game();

qDebug() <<"level1: "<< level;
    if(level == 1){
        //Initialisation des questions
        game.playLevel2();

    }else if(level == 2 ){
        //Initialisation des questions
        game.playLevel3();
         qDebug() <<"level3: "<< level;
    }

    //Index de la question a affiché
    int questionId = 1;
    settings.setValue("questionId", questionId);
    // Créer un modèle de données
    QStandardItemModel *model = new QStandardItemModel;


    //La liste des questions
    QList<Quiz> questions = game.getListQuiz();
    qDebug() <<"Lenght: "<< questions.length();
    //Recherche de la question via son id
    foreach (Quiz quiz, questions) {
        //Vérification de l'id de la question
        if(quiz.getId() == questionId){
            //Quiz quiz = questions.first();

            //Le nombre de question
            int nbre = questions.length();
            QString nbreQuestion = QString::number(questionId)+"/"+QString::number(nbre);
            if(level == 1){
                ui->label_28->setText(nbreQuestion);
                //qDebug() <<"Valeur: "<< question.length();
                ui->label_45->setText(quiz.getQuestion());
            }else if(level == 2 ){
                ui->label_50->setText(nbreQuestion);
                //qDebug() <<"Valeur: "<< question.length();
                ui->label_47->setText(quiz.getQuestion());
            }

            foreach (auto valeur, quiz.getAnswer()) {
                QStandardItem *item = new QStandardItem(valeur.getAnswerx());
                bool correct = valeur.getCorrectx();
                if(correct){
                    settings.setValue("answerCorrect", valeur.getAnswerx());
                }
                QRadioButton *boutonRadio = new QRadioButton();
                item->setData(QVariant::fromValue(boutonRadio), Qt::DecorationRole);
                model->appendRow(item);
            }
            //qDebug() <<"Valeur: "<< question.first().getQuestion();
            QListView *listView = level== 1 ? ui->listView_3 : ui->listView_6;
            listView->setModel(model);

            if(level == 1){
                ui->stackedWidget->setCurrentIndex(2); //niveau 2

            }else if(level == 2 ){
                ui->stackedWidget->setCurrentIndex(3); //niveau 3
            }
            break;
        }
    }

}


void LearnEnglish::on_pushButton_12_clicked()
{      
        ui->stackedWidget->setCurrentIndex(0);

}

