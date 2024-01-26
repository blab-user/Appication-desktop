#ifndef QUIZ_H
#define QUIZ_H
#include "answer.h"
#include <QList>
#include <QJsonArray>
#include <QStringList>
#include <QString>
class Quiz
{
private:
    QString question;
    QList<Answer> answer;
    int n_quiz;
    int id;
    int level;

public:
    Quiz(QString xQuestion, QJsonArray answer, int n_quiz, int id, int level);
    QString getQuestion();
    QList<Answer> getAnswer();
    void setAnswer(Answer ansewer);
    int getN_quiz();
    int getId();
    int getLevel();
};

#endif // QUIZ_H
