#ifndef ANSWER_H
#define ANSWER_H
#include<QString>

class Answer
{

private:
    QString answer;
    int n_answer;
    bool correct;
    int id_quiz;
public:
    Answer(QString xAnswer, int xN_answer, bool xCorrect, int xId_quiz);
    QString getAnswerx();
    int getNAnswerx();
    bool getCorrectx();
    int getIdQuiz();
};
/*

private:
    int n_answer;
    int ans_false;
    int ans_true;
    int id_quiz;
public:
    Answer();
    //appel getter
    void setN_answer(int n_answer){
        this->n_answer= n_answer;
    }
    void setAns_false(int ans_false){
        this->ans_false=ans_false;
    }

    void setAns_true(int ans_true){
        this->ans_true=ans_true;
    }

    void setId_quiz(int id_quiz){
        this->id_quiz=id_quiz;
    }
    //appel setter
    int getN_answer(void){
        return(this->n_answer);
    }

    int getAns_false(void){
        return(this->ans_false);
    }

    int getAns_true(void){
        return(this->ans_true);
    }

    int getId_quiz(void){
        return(this->id_quiz);
    }

*/

#endif // ANSWER_H
