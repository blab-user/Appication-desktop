#ifndef GAME_H
#define GAME_H
#include "quiz.h"
#include<QList>
#include <QStringList>
#include <QString>
#include <QSlider>

class Game
{
private:
    bool start;
    bool end;
    QList<Quiz> listQuiz;
    int niveau;
    int n_question;
public:
    Game();
    void playLevel1();
    void playLevel2();
    void playLevel3();
    void setListQuiz(Quiz quiz);
    QList<Quiz> getListQuiz();
    void stop();
    void next();
};

/*
private:
    bool start;
    bool end;
    QList<Quiz> listQuiz;
    int niveau;
    int n_question;
public:
    Game();
   void play();
   void stop();
   void next();
   //appel setter
   void setStart(bool start){
       this->start=start;
   }
   void setEnd(bool end){
       this->end=end;
   }
   void setNiveau(int niveau){
       this->niveau=niveau;
   }

   void setN_question(int n_question){
       this->n_question=n_question;
   }


   void setListQuiz( QString listQuiz){
       this->listQuiz=listQuiz;
   }


    void setListQuiz(QList<Quiz>);


   //appel getter
   bool getStart(void){
       return(this->start);
   }

   bool getEnd(void){
       return(this->end);
   }


   QString getListQuiz(void){
       return(this->listQuiz);
   }


   QList<Quiz> GetListQuiz();

   int getN_question(void){
       return(this->n_question);
   }

   int getNiveau(void){
       return(this->niveau);
   }
   */

#endif // GAME_H
