#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<process.h>
void main()
{
    int gd=DETECT,gm,i;
    long int rem;
    float a,b,res,pi=3.142;
    char opt;
    char press;



    do
    {
    clrscr();
    initgraph(&gd,&gm,"C://TC/BGI");

    //upper calculator part
    rectangle(150,40,462,430);
    rectangle(149,39,463,431);

    rectangle(160,50,452,220);
    rectangle(159,49,453,221);
    // first button part
    rectangle(160,230,210,270);
    rectangle(220,230,270,270);
    rectangle(280,230,330,270);
    rectangle(340,230,390,270);
    rectangle(400,230,450,270);
    // second button part
    rectangle(160,280,210,320);
    rectangle(220,280,270,320);
    rectangle(280,280,330,320);
    rectangle(340,280,390,320);
    rectangle(400,280,450,320);
    // third button part
    rectangle(160,330,210,370);
    rectangle(220,330,270,370);
    rectangle(280,330,330,370);
    rectangle(340,330,390,370);
    rectangle(400,330,450,370);
    //fourth button part
    rectangle(160,380,210,420);
    rectangle(220,380,270,420);
    rectangle(280,380,330,420);
    rectangle(340,380,390,420);
    rectangle(400,380,450,420);
    // text part
    rectangle(160,50,452,80);
    settextstyle(1,0,1);
    outtextxy(250,55,"CALCULATOR");
    rectangle(160,195,452,220);

    settextstyle( 0,0 ,0 );
    outtextxy(250,205,"FIRST PROJECT");
    // button text part

    setcolor(WHITE);
    settextstyle(1,0,1);
    outtextxy(182,240,"C");
    settextstyle(1,0,1);
    outtextxy(240,240,"%");
    outtextxy(295,240,"x^");
    outtextxy(182,290,"7");
    outtextxy(240,290,"8");
    outtextxy(300,290,"9");
    outtextxy(182,340,"4");
    outtextxy(240,340,"5");
    outtextxy(300,340,"6");
    outtextxy(182,390,"1");
    outtextxy(240,390,"2");
    outtextxy(300,390,"3");
    outtextxy(360,240,"+");
    outtextxy(420,240,"-");
    outtextxy(360,290,"*");
    outtextxy(420,290,"/");
    outtextxy(360,340,"sq");
    outtextxy(420,340,"pi");
    outtextxy(360,390,"0");
    outtextxy(420,390,"=");
    settextstyle(1,1,1);
    outtextxy(120,150,"PRESS C FOR EXIT..");

    //calculation part
    gotoxy(22,7);
    fflush(stdin);
    scanf("%f",&a);
    gotoxy(22,8);
    fflush(stdin);
    scanf("%c",&opt);
    gotoxy(22,9);
    fflush(stdin);
    scanf("%f",&b);
    gotoxy(22,10);
    printf("-------------");
    gotoxy(22,11);
    if(opt=='+')
    {
       res=a+b;
       printf("= %.2f",res);
    }
    else if(opt=='-')
    {
       res=a-b;
       printf("= %.2f",res);
    }
    else if(opt=='*')
    {
       res=a*b;
       printf("= %.2f",res);
    }
    else if(opt=='/')
    {
       res=a/b;
       printf("= %.2f",res);
    }
    else if(opt=='^')
    {
       res=pow(a,b);
       printf("= %.2f",res);
    }
    else if(opt=='%')
    {
       rem=(long int)a%(long int)b;
       printf("= %ld",(long int) rem);
    }
    else if(opt=='C' || opt=='c')
    {
       exit(0);
    }
    getch();
    }
    while(1);
}
