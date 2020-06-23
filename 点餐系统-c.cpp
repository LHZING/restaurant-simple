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
shiwu zhucan[3]={shiwu("大汉堡",13),shiwu("烤肉饭",13),shiwu("鸡肉卷",11)};
shiwu fushi[3]={shiwu("麻辣鸡钉",9),shiwu("劲爆鸡米花",9),shiwu("大薯条",6)};
shiwu drink[3]={shiwu("可口可乐",5),shiwu("拿铁咖啡",6),shiwu("热牛奶",6)};
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
Taocan taocan[3]={Taocan("鸡腿鸡翅套餐",zhucan[0],fushi[0],drink[0]),Taocan("鳕鱼鸡米花套餐",zhucan[1],fushi[1],drink[0]),Taocan("鸡肉卷薯条套餐",zhucan[2],fushi[2],drink[0])};
shiwu myshiwu[13];
int mymoney;
int mynum=0;
void write()
{
    ofstream f("list.txuant");
    int i;
    f << "KFC消费清单\n";
    for(i=0;i<mynum;i++)    
        f<<i+1<<"、"<<myshiwu[i].mingzi<<"   价格："<<myshiwu[i].price<<endl;
    f<<"总价格、"<<mymoney<<endl;
    f<<endl<<endl;
    f.close();
    system("list.txuant");
}
void xuanzhucan()
{
    void Menu();
    void Diancan();
    system("cls");
    cout<<"1、"<<zhucan[0].mingzi<<" 价格："<<zhucan[0].price<<endl;
    cout<<"2、"<<zhucan[1].mingzi<<" 价格："<<zhucan[1].price<<endl;
    cout<<"3、"<<zhucan[2].mingzi<<" 价格："<<zhucan[2].price<<endl;
    cout<<"4、返回"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   myshiwu[mynum]=zhucan[0];mymoney+=zhucan[0].price;mynum++;      break;
        case '2':   myshiwu[mynum]=zhucan[1];mymoney+=zhucan[1].price;mynum++;      break;
        case '3':   myshiwu[mynum]=zhucan[2];mymoney+=zhucan[2].price;mynum++;      break;
        case '4':   Diancan();      break;
        default: 
            printf("\n您的按键有误，按任意键重新选择！\n");
            getch();
            xuanzhucan();
    }    
    printf("\n点餐成功！请按任意键继续点餐或者返回！\n");
    getch();
    if(mynum>10)
    {
        cout<<"您本次点餐已经达到上限！如果需要！请结算后继续点餐！"<<endl;
        printf("\n按任意键进入菜单！\n");
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
    cout<<"1、"<<fushi[0].mingzi<<"  价格："<<fushi[0].price<<endl;
    cout<<"2、"<<fushi[1].mingzi<<"  价格："<<fushi[1].price<<endl;
    cout<<"3、"<<fushi[2].mingzi<<"  价格："<<fushi[2].price<<endl;
    cout<<"4、返回"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   myshiwu[mynum]=fushi[0];mymoney+=fushi[0].price;mynum++;        break;
        case '2':   myshiwu[mynum]=fushi[1];mymoney+=fushi[1].price;mynum++;        break;
        case '3':   myshiwu[mynum]=fushi[2];mymoney+=fushi[2].price;mynum++;        break;
        case '4':   Diancan();      break;
        default: 
            printf("\n您的按键有误，按任意键重新选择！\n");
            getch();
            xuanfushi();
    }    
    printf("\n点餐成功！请按任意键继续点餐或者返回！\n");
    getch();
    if(mynum>10)
    {
        cout<<"您本次点餐已经达到上限！如果需要！请结算后继续点餐！"<<endl;
        printf("\n按任意键进入菜单！\n");
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
    cout<<"1、"<<drink[0].mingzi<<"  价格："<<drink[0].price<<endl;
    cout<<"2、"<<drink[1].mingzi<<"  价格："<<drink[1].price<<endl;
    cout<<"3、"<<drink[2].mingzi<<"  价格："<<drink[2].price<<endl;
    cout<<"4、返回"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   myshiwu[mynum]=drink[0];mymoney+=drink[0].price;mynum++;        break;
        case '2':   myshiwu[mynum]=drink[1];mymoney+=drink[1].price;mynum++;        break;
        case '3':   myshiwu[mynum]=drink[2];mymoney+=drink[2].price;mynum++;        break;
        case '4':   Diancan();      break;
        default: 
            printf("\n您的按键有误，按任意键重新选择！\n");
            getch();
            xuandrink();
    }    
    printf("\n点餐成功！请按任意键继续点餐或者返回！\n");
    getch();
    if(mynum>10)
    {
        cout<<"您本次点餐已经达到上限！如果需要！请结算后继续点餐！"<<endl;
        printf("\n按任意键进入菜单！\n");
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
    cout<<"1、"<<taocan[0].mingzi<<" 价格："<<taocan[0].price<<endl;
    cout<<"2、"<<taocan[1].mingzi<<" 价格："<<taocan[1].price<<endl;
    cout<<"3、"<<taocan[2].mingzi<<" 价格："<<taocan[2].price<<endl;
    cout<<"4、返回"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   mymoney+=taocan[0].price;myshiwu[mynum]=taocan[0].tc[0];mynum++;myshiwu[mynum]=taocan[0].tc[1];mynum++;myshiwu[mynum]=taocan[0].tc[2];mynum++;      break;
        case '2':   mymoney+=taocan[1].price;myshiwu[mynum]=taocan[1].tc[0];mynum++;myshiwu[mynum]=taocan[1].tc[1];mynum++;myshiwu[mynum]=taocan[1].tc[2];mynum++;      break;
        case '3':   mymoney+=taocan[2].price;myshiwu[mynum]=taocan[2].tc[0];mynum++;myshiwu[mynum]=taocan[2].tc[1];mynum++;myshiwu[mynum]=taocan[2].tc[2];mynum++;      break;
        case '4':   Diancan();      break;
        default: 
            printf("\n您的按键有误，按任意键重新选择！\n");
            getch();
            Taocan();
    }    
    printf("\n点餐成功！请按任意键继续点餐或者返回！\n");
    getch();
    if(mynum>10)
    {
        cout<<"您本次点餐已经达到上限！如果需要！请结算后继续点餐！"<<endl;
        printf("\n按任意键进入菜单！\n");
        getch();
        Menu();
    }
    else Taocan();
}
void Diancan()
{
    void Menu();
    system("cls");
    cout<<"1、主食"<<endl;
    cout<<"2、小吃"<<endl;
    cout<<"3、饮料"<<endl;
    cout<<"4、套餐"<<endl;
    cout<<"5、返回"<<endl;
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
            printf("\n您的按键有误，按任意键重新选择！\n");
            getch();
            Diancan();
    }    
}
void Zhifu()
{
    void Menu();
    system("cls");
    cout<<"您本次消费"<<mymoney<<"元！请支付现金！"<<endl;
    int m,s;
    cin>>m;
    s=m-mymoney;
    while(s<0)
    {
        cout<<"您给的现金不足，还需要"<<0-s<<"元！请继续支付现金！"<<endl;
        cin>>m;
        s=m+s;
    }
    cout<<"支付成功！找零"<<s<<"元！祝您生活愉快！"<<endl;
    write();
    printf("\n按任意键返回菜单！\n");
    getch();
    Menu();
}
void Youhuiquan()
{
    void Menu();
    system("cls");
    printf("\n请输入您的优惠券！\n");
    string yhq;
    cin>>yhq;
    if(yhq=="156157158")
    {
        cout<<"您已成功使用5元优惠券！"<<endl;
        mymoney=mymoney-5;
    }
    else
    {
        cout<<"对不起！您的优惠券无效！"<<endl;
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
    cout<<"1、使用优惠券"<<endl;
    cout<<"2、直接支付"<<endl;
    cout<<"4、返回"<<endl;
    char c;
    c=getch();
    switch(c)
    {
        case '1':   Youhuiquan();       break;
        case '2':   Zhifu();        break;
        case '4':   Menu();     break;
        default: 
            printf("\n您的按键有误，按任意键重新选择！\n");
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
        cout<<i+1<<"、"<<myshiwu[i].mingzi<<"    价格："<<myshiwu[i].price<<endl;
    cout<<"总价格、"<<mymoney<<endl;
    printf("\n按任意键返回菜单！\n");
    getch();
    Menu();
}
void Clean()
{
    void Menu();
    system("cls");
    mynum=0;
    mymoney=0;
    printf("\n清空成功！\n按任意键返回菜单！\n");
    getch();
    Menu();
}
void Menu()
{
    system("cls");
    cout<<endl<<endl<<"欢迎进入！"<<endl<<endl;
    cout<<"请选择服务："<<endl;
    cout<<"1、点餐"<<endl;
    cout<<"2、查看已点"<<endl;
    cout<<"3、清空已点"<<endl;
    cout<<"4、结算"<<endl;
    cout<<"5、退出"<<endl;
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
            printf("\n您的按键有误，按任意键重新选择！\n");
            getch();
            Menu();
    }    
}
int main()
{
    Menu();
}

