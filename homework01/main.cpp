#include <QApplication>
#include<QDebug>

typedef quint32 word;
typedef quint8 byte;

#define LLO(x)  ((byte) ((word)(x) & 255)) //最低8位
#define HLO(x)  ((byte) ((word)(x) >> 8)) //次低8位
#define LHI(x)  ((byte) ((word)(x) >> 16)) //次高8位
#define HHI(x)  ((byte) ((word)(x) >> 24)) //最高8位

#define MAX(x,y) (((x)>(y))?(x):(y)) //求最大值
#define MIN(x,y) (((x)<(y))?(x):(y)) //求最小值


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int n=0x12345678;
    QList <byte> values;
    values.append(HHI(n));
    values.append(LHI(n));
    values.append(HLO(n));
    values.append(LLO(n));
    qDebug()<<"初始数字为："<<values;

    qDebug("最高8位和次高八位的最大值是：0x%x(%d);次低8位和最低8位的最小值是：0x%x(%d)",
           MAX(values.at(0),values.at(1)),MAX(values.at(0),values.at(1)),
           MIN(values.at(2),values.at(3)),MIN(values.at(2),values.at(3)));
    int czn;
    czn=(values.at(2)<<24)+(values.at(0)<<16)+(values.at(3)<<8)+(values.at(1));
    qDebug("重组后的数字为：0x%x(%d)",czn,czn);

    std::sort(values.begin(),values.end(),std::greater<quint8>()); //将数字从大到小排序
    qDebug("排序后的顺序为：0x%x(%d),0x%x(%d),0x%x(%d),0x%x(%d)",values.at(0),values.at(0),
           values.at(1),values.at(1),values.at(2),values.at(2),values.at(3),values.at(3));

}
