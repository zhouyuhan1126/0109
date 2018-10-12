#include <QCoreApplication>
#include <QDebug>
#include<qdebug.h>

class student
{
public:
    int num;
    QString name;
    int score1;
    int score2;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    student stu1;
    stu1.num=1403130209;
    stu1.name="鲁智深";
    stu1.score1=80;
    stu1.score2=72;

    student stu2;
    stu2.num=1403140101;
    stu2.name="林冲";
    stu2.score1=82;
    stu2.score2=76;

    student stu3;
    stu3.num=1403140102;
    stu3.name="宋江";
    stu3.score1=76;
    stu3.score2=85;

    student stu4;
    stu4.num=1403140103;
    stu4.name="武松";
    stu4.score1=88;
    stu4.score2=80;

    QList <student> information;
    information<<stu1<<stu2<<stu3<<stu4;
    for(int i=0;i<4;i++)
    {
        qDebug()<<information.at(i).num<<"\t"<<information.at(i).name<<"\t"<<information.at(i).score1<<"\t"<<information.at(i).score2<<endl;
    }

    return a.exec();
}
