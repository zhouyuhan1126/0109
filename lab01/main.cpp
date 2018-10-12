#include <QCoreApplication>
#include <QDebug>
#include <QList>

class student
{
public:
    int num;
    QString name;
    int score1;
    int score2;
};//定义一个学生信息的类


bool com_score1(const student& st1, const student & st2)
{
    return st1.score1 > st2.score1;
}

bool com_score2(const student& st1, const student & st2)
{
    return st1.score2 > st2.score2;
}

bool com_name(const student& st1, const student & st2)
{
    return st1.name > st2.name;
}

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
    //填写4个学生的信息
    QList <student> information;
    information<<stu1<<stu2<<stu3<<stu4;
    //定义一个QList，名称为information
    for(int i=0;i<4;i++)
    {
        qDebug()<<information.at(i).num<<"\t"<<information.at(i).name<<"\t"<<information.at(i).score1<<"\t"<<information.at(i).score2;
    }
    qDebug()<<endl;
    //输出原始的学生信息，不可用qDebug直接输出
    std::sort(information.begin(),information.end(),com_score1);
    for(int i=0;i<4;i++)
    {
        qDebug()<<information.at(i).num<<"\t"<<information.at(i).name<<"\t"<<information.at(i).score1<<"\t"<<information.at(i).score2;
    }
     qDebug()<<endl;
    //比较学生成绩一的大小并按从大到小顺序输出
    std::sort(information.begin(),information.end(),com_score2);
    for(int i=0;i<4;i++)
    {
        qDebug()<<information.at(i).num<<"\t"<<information.at(i).name<<"\t"<<information.at(i).score1<<"\t"<<information.at(i).score2;
    }
     qDebug()<<endl;
    //比较学生成绩二的大小并按从大到小顺序输出
    std::sort(information.begin(),information.end(),com_name);
    for(int i=0;i<4;i++)
    {
        qDebug()<<information.at(i).num<<"\t"<<information.at(i).name<<"\t"<<information.at(i).score1<<"\t"<<information.at(i).score2;
    }
    //比较学生姓名的大小并按从大到小顺序输出
    return a.exec();
}
