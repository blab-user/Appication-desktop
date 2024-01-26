#ifndef LEARNENGLISH_H
#define LEARNENGLISH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LearnEnglish;
}
QT_END_NAMESPACE

class LearnEnglish : public QMainWindow
{
    Q_OBJECT

public:
    LearnEnglish(QWidget *parent = nullptr);
    ~LearnEnglish();
     void a_propro();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::LearnEnglish *ui;
};
#endif // LEARNENGLISH_H
