#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
class shiwu
{
public:
    string mingzi;
    int price;
    shiwu(){}
    shiwu(string n,int p):mingzi(n),price(p){}
};
shiwu zhucan[3]={shiwu("�󺺱�",13),shiwu("���ⷹ",13),shiwu("�����",11)};
shiwu fushi[3]={shiwu("��������",9),shiwu("�������׻�",9),shiwu("������",6)};
shiwu drink[3]={shiwu("�ɿڿ���",5),shiwu("��������",6),shiwu("��ţ��",6)};
class Taocan
{
public:
    string mingzi;
    shiwu tc[3];
    int price;
    Taocan(){}
    Taocan(string n,shiwu a,shiwu b,shiwu c)
    {
        mingzi=n;
        tc[0]=a;
        tc[1]=b;
        tc[2]=c;
        price=a.price+b.price+c.price-10;
    }
};
Taocan taocan[3]={Taocan("���ȼ����ײ�",zhucan[0],fushi[0],drink[0]),Taocan("���㼦�׻��ײ�",zhucan[1],fushi[1],drink[0]),Taocan("����������ײ�",zhucan[2],fushi[2],drink[0])};
shiwu myshiwu[13];
int mymoney;
int mynum=0;
void write()
{
    ofstream f("list.txuant");
    int i;
    f << "KFC�����嵥\n";
    for(i=0;i<mynum;i++)    
        f<<i+1<<"��"<<myshiwu[i].mingzi<<"   �۸�"<<myshiwu[i].price<<endl;
    f<<"�ܼ۸�"<<mymoney<<endl;
    f<<endl<<endl;
    f.close();
    system("list.txuant");
}
void xuanzhucan()
{
    void Menu();
    void Diancan();
    system("cls");
    cout<<"1��"<<zhucan[0].mingzi<<" �۸�"<<zhucan[0].price<<endl;
    cout<<"2��"<<zhucan[1].mingzi<<" �۸�"<<zhucan[1].price<<endl;
    cout<<"3��"<<zhucan[2].mingzi<<" �۸�"<<zhucan[2].price<<endl;
    cout<<"4������"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   myshiwu[mynum]=zhucan[0];mymoney+=zhucan[0].price;mynum++;      break;
        case '2':   myshiwu[mynum]=zhucan[1];mymoney+=zhucan[1].price;mynum++;      break;
        case '3':   myshiwu[mynum]=zhucan[2];mymoney+=zhucan[2].price;mynum++;      break;
        case '4':   Diancan();      break;
        default: 
            printf("\n���İ������󣬰����������ѡ��\n");
            getch();
            xuanzhucan();
    }    
    printf("\n��ͳɹ����밴�����������ͻ��߷��أ�\n");
    getch();
    if(mynum>10)
    {
        cout<<"�����ε���Ѿ��ﵽ���ޣ������Ҫ�������������ͣ�"<<endl;
        printf("\n�����������˵���\n");
        getch();
        Menu();
    }
    else xuanzhucan();
}
void xuanfushi()
{
    void Menu();
    void Diancan();
    system("cls");
    cout<<"1��"<<fushi[0].mingzi<<"  �۸�"<<fushi[0].price<<endl;
    cout<<"2��"<<fushi[1].mingzi<<"  �۸�"<<fushi[1].price<<endl;
    cout<<"3��"<<fushi[2].mingzi<<"  �۸�"<<fushi[2].price<<endl;
    cout<<"4������"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   myshiwu[mynum]=fushi[0];mymoney+=fushi[0].price;mynum++;        break;
        case '2':   myshiwu[mynum]=fushi[1];mymoney+=fushi[1].price;mynum++;        break;
        case '3':   myshiwu[mynum]=fushi[2];mymoney+=fushi[2].price;mynum++;        break;
        case '4':   Diancan();      break;
        default: 
            printf("\n���İ������󣬰����������ѡ��\n");
            getch();
            xuanfushi();
    }    
    printf("\n��ͳɹ����밴�����������ͻ��߷��أ�\n");
    getch();
    if(mynum>10)
    {
        cout<<"�����ε���Ѿ��ﵽ���ޣ������Ҫ�������������ͣ�"<<endl;
        printf("\n�����������˵���\n");
        getch();
        Menu();
    }
    else xuanfushi();
}
void xuandrink()
{
    void Menu();
    void Diancan();
    system("cls");
    cout<<"1��"<<drink[0].mingzi<<"  �۸�"<<drink[0].price<<endl;
    cout<<"2��"<<drink[1].mingzi<<"  �۸�"<<drink[1].price<<endl;
    cout<<"3��"<<drink[2].mingzi<<"  �۸�"<<drink[2].price<<endl;
    cout<<"4������"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   myshiwu[mynum]=drink[0];mymoney+=drink[0].price;mynum++;        break;
        case '2':   myshiwu[mynum]=drink[1];mymoney+=drink[1].price;mynum++;        break;
        case '3':   myshiwu[mynum]=drink[2];mymoney+=drink[2].price;mynum++;        break;
        case '4':   Diancan();      break;
        default: 
            printf("\n���İ������󣬰����������ѡ��\n");
            getch();
            xuandrink();
    }    
    printf("\n��ͳɹ����밴�����������ͻ��߷��أ�\n");
    getch();
    if(mynum>10)
    {
        cout<<"�����ε���Ѿ��ﵽ���ޣ������Ҫ�������������ͣ�"<<endl;
        printf("\n�����������˵���\n");
        getch();
        Menu();
    }
    else xuandrink();
}
void Taocan()
{
    void Menu();
    void Diancan();
    system("cls");
    cout<<"1��"<<taocan[0].mingzi<<" �۸�"<<taocan[0].price<<endl;
    cout<<"2��"<<taocan[1].mingzi<<" �۸�"<<taocan[1].price<<endl;
    cout<<"3��"<<taocan[2].mingzi<<" �۸�"<<taocan[2].price<<endl;
    cout<<"4������"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   mymoney+=taocan[0].price;myshiwu[mynum]=taocan[0].tc[0];mynum++;myshiwu[mynum]=taocan[0].tc[1];mynum++;myshiwu[mynum]=taocan[0].tc[2];mynum++;      break;
        case '2':   mymoney+=taocan[1].price;myshiwu[mynum]=taocan[1].tc[0];mynum++;myshiwu[mynum]=taocan[1].tc[1];mynum++;myshiwu[mynum]=taocan[1].tc[2];mynum++;      break;
        case '3':   mymoney+=taocan[2].price;myshiwu[mynum]=taocan[2].tc[0];mynum++;myshiwu[mynum]=taocan[2].tc[1];mynum++;myshiwu[mynum]=taocan[2].tc[2];mynum++;      break;
        case '4':   Diancan();      break;
        default: 
            printf("\n���İ������󣬰����������ѡ��\n");
            getch();
            Taocan();
    }    
    printf("\n��ͳɹ����밴�����������ͻ��߷��أ�\n");
    getch();
    if(mynum>10)
    {
        cout<<"�����ε���Ѿ��ﵽ���ޣ������Ҫ�������������ͣ�"<<endl;
        printf("\n�����������˵���\n");
        getch();
        Menu();
    }
    else Taocan();
}
void Diancan()
{
    void Menu();
    system("cls");
    cout<<"1����ʳ"<<endl;
    cout<<"2��С��"<<endl;
    cout<<"3������"<<endl;
    cout<<"4���ײ�"<<endl;
    cout<<"5������"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   xuanzhucan();       break;
        case '2':   xuanfushi();        break;
        case '3':   xuandrink();        break;
        case '4':   Taocan();       break;
        case '5':   Menu();     break;
        default: 
            printf("\n���İ������󣬰����������ѡ��\n");
            getch();
            Diancan();
    }    
}
void Zhifu()
{
    void Menu();
    system("cls");
    cout<<"����������"<<mymoney<<"Ԫ����֧���ֽ�"<<endl;
    int m,s;
    cin>>m;
    s=m-mymoney;
    while(s<0)
    {
        cout<<"�������ֽ��㣬����Ҫ"<<0-s<<"Ԫ�������֧���ֽ�"<<endl;
        cin>>m;
        s=m+s;
    }
    cout<<"֧���ɹ�������"<<s<<"Ԫ��ף��������죡"<<endl;
    write();
    printf("\n����������ز˵���\n");
    getch();
    Menu();
}
void Youhuiquan()
{
    void Menu();
    system("cls");
    printf("\n�����������Ż�ȯ��\n");
    string yhq;
    cin>>yhq;
    if(yhq=="156157158")
    {
        cout<<"���ѳɹ�ʹ��5Ԫ�Ż�ȯ��"<<endl;
        mymoney=mymoney-5;
    }
    else
    {
        cout<<"�Բ��������Ż�ȯ��Ч��"<<endl;
        getch();
        Menu();
    }
    getch();
    Zhifu();
}

void Jiesuan()
{
    void Menu();
    system("cls");
    cout<<"1��ʹ���Ż�ȯ"<<endl;
    cout<<"2��ֱ��֧��"<<endl;
    cout<<"4������"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   Youhuiquan();       break;
        case '2':   Zhifu();        break;
        case '4':   Menu();     break;
        default: 
            printf("\n���İ������󣬰����������ѡ��\n");
            getch();
            Diancan();
    }    
}
void Show()
{   
    void Menu();
    system("cls");
    int i;
    for(i=0;i<mynum;i++)
        cout<<i+1<<"��"<<myshiwu[i].mingzi<<"    �۸�"<<myshiwu[i].price<<endl;
    cout<<"�ܼ۸�"<<mymoney<<endl;
    printf("\n����������ز˵���\n");
    getch();
    Menu();
}
void Clean()
{
    void Menu();
    system("cls");
    mynum=0;
    mymoney=0;
    printf("\n��ճɹ���\n����������ز˵���\n");
    getch();
    Menu();
}
void Menu()
{
    system("cls");
    cout<<endl<<endl<<"��ӭ���룡"<<endl<<endl;
    cout<<"��ѡ�����"<<endl;
    cout<<"1�����"<<endl;
    cout<<"2���鿴�ѵ�"<<endl;
    cout<<"3������ѵ�"<<endl;
    cout<<"4������"<<endl;
    cout<<"5���˳�"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   Diancan();      break;
        case '2':   Show(); break;
        case '3':   Clean();    break;
        case '4':   Jiesuan();  break;
        case '5':   exit(0);
        default: 
            printf("\n���İ������󣬰����������ѡ��\n");
            getch();
            Menu();
    }    
}
int main()
{
    Menu();
}

