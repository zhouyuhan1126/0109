#include <QCoreApplication>
#include<QDebug>

typedef quint32 word;

typedef quint8 byte;

#define WORD_HHI(x) ((byte)((word)(x)>>24)) //最高8位
#define WORD_LHI(x) ((byte)((word)(x)>>8&&255)) //次高8位
#define WORD_HLO(x) ((byte)((word)(x)>>16&&255)) //次低8位
#define WORD_LLO(x) ((byte)((word)(x)&&255)) //最低8位

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    
    
    
    
    return a.exec();
}
