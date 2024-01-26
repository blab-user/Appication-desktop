#include "answer.h"

Answer::Answer(QString xAnswer, int xN_answer, bool xCorrect, int xId_quiz) {
    Answer::answer = xAnswer;
    Answer::correct = xCorrect;
    Answer::id_quiz = xId_quiz;
    Answer::n_answer = xN_answer;
}

QString Answer::getAnswerx(){
    return Answer::answer;
}

int Answer::getNAnswerx(){
    return  Answer::n_answer;

}

bool Answer::getCorrectx(){
    return Answer::correct;
}

int Answer::getIdQuiz(){
    return Answer::id_quiz;
}
