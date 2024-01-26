#include "game.h"
#include "quiz.h"
#include "qjsonobject.h"
#include "repository.cpp"

Game::Game() {

}
void Game::playLevel1(){
    QJsonObject quizLevel1 = Repository::questionLevel1();
    QJsonArray quiz = quizLevel1["quiz"].toArray();
    for(const  QJsonValue &item: quiz){
        //qDebug() << "&valeur" <<item["answers"];
        Game::listQuiz.append(Quiz(item["question"].toString(),item["answers"].toArray(),quizLevel1["length"].toInt(), item["id"].toInt(),item["level"].toInt()));
    }
}

void Game::playLevel2(){
    QJsonObject quizLevel1 = Repository::questionLevel2();
    QJsonArray quiz = quizLevel1["quiz"].toArray();
    for(const  QJsonValue &item: quiz){
        Game::listQuiz.append(Quiz(item["question"].toString(),item["answers"].toArray(),quizLevel1["length"].toInt(), item["id"].toInt(),item["level"].toInt()));
    }
}

void Game::playLevel3(){
    QJsonObject quizLevel1 = Repository::questionLevel3();
    QJsonArray quiz = quizLevel1["quiz"].toArray();
    for(const  QJsonValue &item: quiz){
        //qDebug() << "&valeur" <<item["answers"];
        Game::listQuiz.append(Quiz(item["question"].toString(),item["answers"].toArray(),quizLevel1["length"].toInt(), item["id"].toInt(),item["level"].toInt()));
    }
}

void Game::setListQuiz(Quiz xQuiz)
{
    Game::listQuiz.append(xQuiz);
}

QList<Quiz> Game::getListQuiz()
{
    return Game::listQuiz;
}

void Game::next(){

}

void Game::stop(){

}


/*

Game::getListQuiz(){
    return (this->listQuiz);
}

Game::setListQuiz(QList<Quiz> listQuiz){
    this->listQuiz = listQuiz;
}

*/


