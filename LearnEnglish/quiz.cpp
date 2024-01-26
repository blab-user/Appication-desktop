#include "quiz.h"
#include "answer.h"

Quiz::Quiz(QString xQuestion, QJsonArray xAnswer, int xN_quiz, int xId, int xLevel) {

    Quiz::id = xId;
    Quiz::question = xQuestion;
    Quiz::level = xLevel;

    for(const QJsonValue &item: xAnswer ){
        Quiz::setAnswer(Answer(item["rep"].toString(), 3, item["correct"].toBool(), xId));
    }

}
int Quiz::getLevel(){
    return Quiz::level;
}

QList<Answer> Quiz::getAnswer() {
    return answer;
}

void Quiz::setAnswer(Answer xAnswer){
    Quiz::answer.append(xAnswer);
}

int Quiz::getId(){
    return Quiz::id ;
}

int Quiz::getN_quiz(){
    return Quiz::n_quiz;
}

QString Quiz::getQuestion(){
    return Quiz::question;
}
