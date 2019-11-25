
#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
class CZ
{
    public:
//    BOOL SetConsoleTextAttribute(
//        HANDLE YanS;
//        WORD WenB
//    )

    HANDLE ShuC;
    HANDLE ShuR;
    CONSOLE_SCREEN_BUFFER_INFO XinX;
    INPUT_RECORD Xinx;
    DWORD			dwRes;
    CZ()
    {
        ShuC=GetStdHandle(STD_OUTPUT_HANDLE);
        GetConsoleScreenBufferInfo(ShuC,&XinX);
    }
//    CZplus()
//    {
//        ShuC=GetStdHandle(STD_OUTPUT_HANDLE);
//        GetConsoleScreenBufferInfo(ShuC,&XinX);
//    }
    ~CZ()
    {
        CloseHandle(ShuC);
    }
    void QingPing()
    {
        COORD pos={0,0};
        FillConsoleOutputCharacter(ShuC,
                                   ' ',
                                   XinX.dwSize.X*XinX.dwSize.Y,
                                   pos,
                                   NULL
                                   );
        SetConsoleCursorPosition(ShuC,pos);
    }
    void BiaoTi(const TCHAR *biaoti)
    {
        SetConsoleTitle(biaoti);
    }
    void GuangBiao(int x,int y)
    {
        COORD pos={x,y};
        SetConsoleCursorPosition(ShuC,pos);
    }
    void DaXiao(int x,int y)
    {
        COORD pos ={x,y};
        SMALL_RECT dx={0,0,x-1,y-1};
        SetConsoleWindowInfo(ShuC,1,&dx);
        SetConsoleScreenBufferSize(ShuC,pos);
    }
    int bjys=0,wbys=15;
/*  有关颜色的提示：
    0   黑色1   深蓝色2   深绿色3   深青色4   深红色5   深粉色6   黄色7   深白色8   灰色
    9   浅蓝色10  浅绿色11  浅青色12  浅红色13  浅粉色14  浅黄色15  浅白色*/
    void WBYS(int yanse)
    {
        wbys=yanse-1;
        SetConsoleTextAttribute(ShuC,wbys+bjys);
    }
    void BJYS(int yanse)
    {
        bjys=yanse*15;
        SetConsoleTextAttribute(ShuC,bjys+wbys);
    }
};
void miao();
class BGM
{
    public:
    HANDLE bgm;
    DWORD bgmtxt;
    BGM()
    {
        bgm=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)miao,NULL,0,&bgmtxt);
    }
//    void miao()
//    {
//        Beep(262,300);
//    }
};
void YUCAOZUO(CZ &wnna)
{
    wnna.DaXiao(120,40);
    wnna.BiaoTi("Fall in love at first sight");
    wnna.GuangBiao(45,18);
    cout<<"Presh anything to continue"<<endl;
    wnna.GuangBiao(51,20);
    cout<<"按任意键继续"<<endl;
    getchar();
//    wnna.QingPing();
    system("cls");
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(40);
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(40);
    for(int i=1;i<=35;i++)
    {
        cout<<"■■                                                                                                                ■■"<<endl;
        Sleep(40);
    }
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(40);
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(200);
    wnna.GuangBiao(20,10);
    string a="Presh UP,DOWN,LEFT and RIGHT to move the block";
    string b="按上下左右方向键移动方块";
    for(int i=0;i<a.length();i++)
    {
        cout<<a[i];
        Sleep(20);
    }
    Sleep(400);
    wnna.GuangBiao(25,12);
    for(int i=0;i<b.length();i+=2)
    {
        cout<<b[i]<<b[i+1];
        Sleep(50);
    }
    return;
}
void jiguanchufa(int x,int y,int arcc,CZ &wnna)
{
    wnna.GuangBiao(x-2,y-1);
    printf("      ");
    wnna.GuangBiao(x-2,y);
    printf("  ");
    printf("  ");
    printf("  ");
    wnna.GuangBiao(x-2,y+1);
    printf("      ");
    wnna.GuangBiao(x,y);
    if(arcc==1)
    {
            wnna.WBYS(14);
            printf("■");
            string a="Shall I compare thee to a summer's day? 我来比你作夏天，好不好？";
            string b="Thou art more lovely and more temperate, 不，你比她更可爱，更温和";
            wnna.WBYS(254);
            wnna.GuangBiao(x-20,y+2);
            for(int i=0;i<a.length();i++)
            {
                cout<<a[i];
                Sleep(20);
            }
            wnna.GuangBiao(x-20,y+4);
            for(int i=0;i<b.length();i++)
            {
                cout<<b[i];
                Sleep(20);
            }
            wnna.GuangBiao(x,y);
            wnna.WBYS(14);
        }
    if(arcc==2)
    {
            wnna.WBYS(10);
            printf("■");
            string a="Rough winds do shake the darling buds of May, 暮春的娇花有暴风侵扰";
            string b="And summer's lease hath all too short a date: 夏住在人间的时日并不多:";
            wnna.WBYS(250);
            wnna.GuangBiao(x-6,y+2);
            for(int i=0;i<a.length();i++)
            {
                cout<<a[i];
                Sleep(20);
            }
            wnna.GuangBiao(x-6,y+4);
            for(int i=0;i<b.length();i++)
            {
                cout<<b[i];
                Sleep(20);
            }
            wnna.GuangBiao(x,y);
            wnna.WBYS(10);
        }
    if(arcc==3)
    {
            wnna.WBYS(12);
            printf("■");
            string a="Sometime too hot the eye of heaven shines, 有时天之目亮得太凌人";
            string b="And often is his gold complexion dimm'd; 他的金容常被云霾蒙蔽";
            wnna.WBYS(252);
            wnna.GuangBiao(x-55,y+2);
            for(int i=0;i<a.length();i++)
            {
                cout<<a[i];
                Sleep(20);
            }
            wnna.GuangBiao(x-55,y+4);
            for(int i=0;i<b.length();i++)
            {
                cout<<b[i];
                Sleep(20);
            }
            wnna.GuangBiao(x,y);
            wnna.WBYS(12);
        }
    if(arcc==4)
    {
        wnna.WBYS(11);
        printf("■");
        string a="And every fair from fair sometime declines, 有时因了意外，四季周行";
        string b="By chance or nature's changing course untrimm'd 今天的明美天已不再美丽";
        wnna.WBYS(251);
        wnna.GuangBiao(x-6,y+2);
        for(int i=0;i<a.length();i++)
        {
            cout<<a[i];
            Sleep(20);
        }
        wnna.GuangBiao(x-6,y+4);
        for(int i=0;i<b.length();i++)
        {
            cout<<b[i];
            Sleep(20);
        }
        wnna.GuangBiao(x,y);
        wnna.WBYS(11);
    }
    if(arcc==5)
    {
        wnna.WBYS(15);
        printf("■");
        string a="But thy eternal summer shall not fade, 你的永存之夏却不黄萎";
        string b="Nor lose possession of that fair thou owest; 你的美丽亦将长寿万年";
        wnna.WBYS(255);
        wnna.GuangBiao(x-60,y+2);
        for(int i=0;i<a.length();i++)
        {
            cout<<a[i];
            Sleep(20);
        }
        wnna.GuangBiao(x-60,y+4);
        for(int i=0;i<b.length();i++)
        {
            cout<<b[i];
            Sleep(20);
        }
        wnna.GuangBiao(x,y);
        wnna.WBYS(15);
    }
    if(arcc==6)
    {
        wnna.WBYS(7);
        printf("■");
        string a="Nor shall Death brag thou wander'st in his shade, 你不会死，死神无从夸嘴";
        string b="When in eternal lines to time thou growest: 因为你的名字入了史诗";
        wnna.WBYS(247);
        wnna.GuangBiao(x-10,y+2);
        for(int i=0;i<a.length();i++)
        {
            cout<<a[i];
            Sleep(20);
        }
        wnna.GuangBiao(x-10,y+4);
        for(int i=0;i<b.length();i++)
        {
            cout<<b[i];
            Sleep(20);
        }
        wnna.GuangBiao(x,y);
        wnna.WBYS(7);
    }
    if(arcc==7)
    {
        wnna.WBYS(13);
        printf("■");
        string a="So long as men can breathe or eyes can see, 一天还有人活着，有眼睛";
        string b="So long lives this and this gives life to thee. 你的名字便将于此常新";
        wnna.WBYS(253);
        wnna.GuangBiao(x-40,y+2);
        for(int i=0;i<a.length();i++)
        {
            cout<<a[i];
            Sleep(20);
        }
        wnna.GuangBiao(x-40,y+4);
        for(int i=0;i<b.length();i++)
        {
            cout<<b[i];
            Sleep(20);
        }
        wnna.GuangBiao(x,y);
        wnna.WBYS(13);
    }
}
void jiguanshengcheng(int x,int y,CZ &wnna,int ysa,int ysb)
{
        {
        wnna.WBYS(ysa);
        wnna.GuangBiao(x-2,y-1);
        printf("■■■");
        wnna.GuangBiao(x-2,y);
        Sleep(100);
        printf("■");
        wnna.WBYS(ysb);
        printf("■");
        wnna.WBYS(ysa);
        printf("■");
        wnna.GuangBiao(x-2,y+1);
        Sleep(100);
        printf("■■■");
    }
}
int jiguan(int x,int y,CZ &wnna)
{
    if(x==42&&y==31)
    {
        jiguanchufa(x,y,1,wnna);
        jiguanshengcheng(10,8,wnna,10,12);
        wnna.GuangBiao(x,y);
        wnna.WBYS(14);
    }
    if(x==10&&y==8)
    {
        jiguanchufa(x,y,2,wnna);
        jiguanshengcheng(106,4,wnna,12,11);
        wnna.GuangBiao(x,y);
        wnna.WBYS(10);
    }
    if(x==106&&y==4)
    {
        jiguanchufa(x,y,3,wnna);
        jiguanshengcheng(14,30,wnna,11,15);
        wnna.GuangBiao(x,y);
        wnna.WBYS(12);
    }
    if(x==14&&y==30)
    {
        jiguanchufa(x,y,4,wnna);
        jiguanshengcheng(98,24,wnna,15,7);
        wnna.GuangBiao(x,y);
        wnna.WBYS(11);
    }
    if(x==98&&y==24)
    {
        jiguanchufa(x,y,5,wnna);
        jiguanshengcheng(30,16,wnna,7,13);
        wnna.GuangBiao(x,y);
        wnna.WBYS(15);
    }
    if(x==30&&y==16)
    {
        jiguanchufa(x,y,6,wnna);
        jiguanshengcheng(86,13,wnna,13,16);
        wnna.GuangBiao(x,y);
        wnna.WBYS(7);
    }
    if(x==86&&y==13)
    {
        jiguanchufa(x,y,7,wnna);
        wnna.GuangBiao(x,y);
        wnna.WBYS(13);
    }
    if(x==86&&y==13)
        return 1;
    else return 0;

}
void YIDONG(CZ &wnna)
{

    //上2，下36
    //左4，右114
    /*  有关颜色的提示：
    0   黑色1   深蓝色2   深绿色3   深青色4   深红色5   深粉色6   黄色7   深白色
    8   灰色9   浅蓝色10  浅绿色11  浅青色12  浅红色13  浅粉色14  浅黄色15  浅白色*/

    jiguanshengcheng(42,31,wnna,14,10);
    int xz=4,yz=36;
    wnna.GuangBiao(4,36);
    wnna.WBYS(13);
    printf("■");
    wnna.GuangBiao(4,36);
    char c;
    int flag=0;
    while(1)
    {
        if (_kbhit())
        {
            c=getch();
            int a=c;
//            printf("%d",a);
//            wnna.GuangBiao(4,2);
            if(!flag)
            {
                wnna.GuangBiao(20,10);cout<<"                                                     ";
                wnna.GuangBiao(20,12);cout<<"                              ";
                flag++;
                wnna.GuangBiao(4,36);
            }
            if(a==13)
            {
                if(flag==2)
                {
                    wnna.GuangBiao(30,25);cout<<"                                                     ";
                    wnna.GuangBiao(30,27);cout<<"                              ";
                    flag++;
                    wnna.GuangBiao(42,31);
                }
                if(jiguan(xz,yz,wnna))return;
            }
            if(a==72)
            {
                if(yz!=2)
                {
                    yz--;
                    printf("  ");
                    wnna.GuangBiao(xz,yz);
                    printf("■");
                    wnna.GuangBiao(xz,yz);
                }
                continue;
            }
            if(a==80)
            {
                if(yz!=36)
                {
                    yz++;
                    printf("  ");
                    wnna.GuangBiao(xz,yz);
                    printf("■");
                    wnna.GuangBiao(xz,yz);
                }
            }
            if(a==75)
            {
                if(xz!=4)
                {
                    xz-=2;
                    printf("  ");
                    wnna.GuangBiao(xz,yz);
                    printf("■");
                    wnna.GuangBiao(xz,yz);
                }
            }
            if(a==77)
            {
                if(xz!=114)
                {
                    xz+=2;
                    printf("  ");
                    wnna.GuangBiao(xz,yz);
                    printf("■");
                    wnna.GuangBiao(xz,yz);
                }
            }
            if(flag==1)
            {
                if(yz==31&&xz==42)
                {
                    wnna.WBYS(16);
                    flag++;
                    wnna.GuangBiao(30,25);
                    cout<<"Presh ENTER to trigger the gear";
                    wnna.GuangBiao(30,27);
                    cout<<"按下回车触发机关";
                    wnna.GuangBiao(xz,yz);
                    wnna.WBYS(13);
                }
            }
        }
    }
}
void JIESHU(CZ &wnna)
{
    wnna.GuangBiao(8,2);
    wnna.WBYS(16);
    system("pause");
    system("cls");
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(40);
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(40);
    for(int i=1;i<=35;i++)
    {
        cout<<"■■                                                                                                                ■■"<<endl;
        Sleep(40);
    }
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(40);
    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    Sleep(200);

    Sleep(1000);
    wnna.WBYS(253);
    wnna.GuangBiao(35,3);
    cout<<"莎翁的十四行诗，英吉利海峡的湾";

    Sleep(1000);
    wnna.WBYS(254);
    wnna.GuangBiao(35,5);
    cout<<"夏日的光，茫茫散去";

    Sleep(1000);
    wnna.WBYS(252);
    wnna.GuangBiao(35,7);
    cout<<"海风，飓风，台风，天边云";

    Sleep(1000);
    wnna.WBYS(251);
    wnna.GuangBiao(35,9);
    cout<<"大西洋的暖流，本格拉的寒流";

    Sleep(1000);
    wnna.WBYS(250);
    wnna.GuangBiao(35,11);
    cout<<"信封带来，遥远的祝福，一句深情";

    Sleep(1000);
    wnna.WBYS(249);
    wnna.GuangBiao(35,13);
    cout<<"遥远的天边，与面前的人";

    wnna.GuangBiao(50,20);
    system("pause");
    wnna.GuangBiao(50,23);
    wnna.WBYS(13);
    string a="u,my love";
    for(int i=0;i<a.length();i++)
    {
        wnna.WBYS(i+2);
        cout<<a[i];
    }

    }
int main()
{
//    cout << "Hello world!" << endl;
    CZ wnna;
    BGM iwanna;
    YUCAOZUO(wnna);
    YIDONG(wnna);
    JIESHU(wnna);
    getchar();
    Sleep(10000);
    return 0;
}
//这下面define是定义给BGM的
#include <cstdio>
#include <windows.h>
#define qdo 262
#define qre 294
#define qmi 330
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
#define chang 1000
#define chang3 1500
#define p 500
#define w 250
#define q 125
#define b(a,b) Beep(a,b)
void  miao()
{
    while(1)
    {
        //
        b(mi,p);
        b(do,w);
        b(mi,w);
        b(fa,p);
        b(fa,w);
        b(re,w);
        //
        b(re,w);
        b(qso,w);
        b(fa,w);
        b(re,w);
        b(mi,chang);
        //
        b(so,p);
        b(mi,w);
        b(so,w);
        b(la,p);
        b(so,w);
        b(so,w);
        //
        b(do,p);
        b(re,w);
        b(do,w);
        b(re,chang);

        //
        b(mi,p);
        b(do,w);
        b(mi,w);
        b(fa,p);
        b(fa,w);
        b(fa,w);
        //
        b(mi,p);
        b(si,p);
        b(do1,p);
        b(do,w);
        b(la,w);
        //
        b(la,p);
        b(la,w);
        b(do1,w);
        b(la,w);
        b(so,w);
        b(mi,w);
        b(do,w);
        //
        b(do,chang3);
        b(so,w);
        b(so,w);

        //
        b(si,p);
        b(so,p);
        b(la,p);
        b(mi,p);
        //
        b(fa,w);
        b(mi,w);
        b(mi,w);
        b(so,w);
        b(la-30,chang);
        //
        b(so,p);
        b(do1,p);
        b(re1,w);
        b(mi1,w);
        b(mi1,w);
        b(la,w);
        //
        b(la,p);
        b(la,w);
        b(re,w);
        b(re,w);
        b(la,w);
        b(do1,w);
        b(si,w);

        //
        b(si,w);
        b(so,w);
        Sleep(p*3);
        //
        Sleep(w);
        b(do,w);
        b(re,w);
        b(do,w);
        //
        b(re,w);
        b(mi,w);
        b(mi,w);
        b(mi,w);
        b(mi,w);
        b(mi,w);
        b(re,w);
        b(do,w);
        //
        b(re,w);
        b(so,w);
        b(so,w);
        b(so,w);
        b(so,w);
        b(mi,w);
        b(mi,w);
        b(so,w);

        //
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(so,w);
        b(mi,w);
        b(re,w);
        //
        b(mi,chang);
        Sleep(w);
        b(mi,w);
        b(mi,w);
        b(so,w);
        //
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(so,w);
        b(mi,w);
        //
        b(so,w);
        b(re1,w);
        b(re1,w);
        b(do1,w);
        b(do1,w);
        b(do,w);
        b(la,w);
        b(la,w);

        //
        b(la,w);
        b(do,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(do,w);
        b(la,w);
        b(la,w);
        //
        b(la,w);
        b(so,w);
        b(mi,w);
        b(re,w);
        b(re,w);
        b(do,w);
        b(re,w);
        b(do,w);
        //
        b(re,w);
        b(mi,w);
        b(mi,w);
        b(mi,w);
        b(mi,w);
        b(mi,w);
        b(re,w);
        b(do,w);
        //
        b(re,w);
        b(so,w);
        b(so,w);
        b(so,w);
        b(so,w);
        b(mi,w);
        b(mi,w);
        b(so,w);

        //
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(do1,w);
        b(si,w);
        b(so,w);
        //
        b(mi,chang);
        Sleep(w);
        b(mi,w);
        b(mi,w);
        b(so,w);
        //
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(mi,w);
        b(mi1,w);
        b(re1,w);
        //
        b(re1,w);
        b(do1,w);
        b(la,w);
        b(re1,w);
        b(do1,w);
        b(so,w);
        b(la,p);

        //
        Sleep(w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(la,w);
        b(so,w);
        b(mi,w);
        b(so,w);
        //
        b(so,p);
        Sleep(w);
        b(so,q);
        b(so,q);
        b(fa,w);
        b(mi,w);
        b(mi,w);
        b(do,w);
        //
        b(do,p*4);
    }

}


/*  这里是废弃的颜色代码
    WORD wbys;
    WORD bjys;
    void WZYS(int yanse,bool gaoliang)
    {
        printf("QAQ");
        wbys=0;
        switch (yanse)
        {
            case 1:wbys |=FOREGROUND_RED;break;
            case 2:wbys |=FOREGROUND_BLUE;break;
            case 3:wbys |=FOREGROUND_GREEN;break;
        }
        if(gaoliang)wbys=FOREGROUND_INTENSITY;
        SetConsoleTextAttribute(ShuC,wbys | bjys);
    }
    void BJYS(int yanse,bool gaoliang)
    {
        bjys=0;
        switch (yanse)
        {
            case 1:bjys |=BACKGROUND_RED;break;
            case 2:bjys |=BACKGROUND_BLUE;break;
            case 3:bjys |=BACKGROUND_GREEN;break;
        }
        if(gaoliang)bjys=BACKGROUND_INTENSITY;

        SetConsoleTextAttribute(ShuC,wbys|bjys);
    }
*/


//下面是废弃的移动操作
//void YIDONG(CZ &wnna)
//{
////上2，下36
////左4，右114
//    int xz=4,yz=36;
//    wnna.GuangBiao(xz,yz);
//    while(1)
//    {
//        ReadConsoleInput(wnna.ShuR,&wnna.Xinx,1,&wnna.dwRes);
//        if(wnna.Xinx.EventType==KEY_EVENT)
//        {
//            printf("1");
//            if(wnna.Xinx.Event.KeyEvent.wVirtualKeyCode==VK_UP)
//            {
//                if(yz!=2)
//                {
//                    yz--;
//                    wnna.GuangBiao(xz,yz);
//                }
//            }
//            if(wnna.Xinx.Event.KeyEvent.wVirtualKeyCode==VK_DOWN)
//            {
//                if(yz!=36)
//                {
//                    yz++;
//                    wnna.GuangBiao(xz,yz);
//                }
//            }
//            if(wnna.Xinx.Event.KeyEvent.wVirtualKeyCode==VK_LEFT)
//            {
//                if(xz!=4)
//                {
//                    xz--;
//                    wnna.GuangBiao(xz,yz);
//                }
//            }
//            if(wnna.Xinx.Event.KeyEvent.wVirtualKeyCode==VK_RIGHT)
//            {
//                if(xz!=114)
//                {
//                    xz++;
//                    wnna.GuangBiao(xz,yz);
//                }
//            }
//        }
//    }
//}
