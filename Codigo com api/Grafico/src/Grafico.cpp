#include<stdio.h>
#include "Grafico.h"
#include <graphics.h>


int main(){
    //int gd = DETECT, gm;
    //initgraph(&gd,&gm,"C:\\TC\\BGI");
    int n1,n2,n3,n4,n5,n6,n7,n8,n9;

    printf("Quantidade do numero 1: ");
    scanf("%i",&n1);

   printf("Quantidade do numero 2: ");
    scanf("%i",&n2);

    printf("Quantidade do numero 3: ");
    scanf("%i",&n3);

    printf("Quantidade do numero 4: ");
    scanf("%i",&n4);

    printf("Quantidade do numero 5: ");
    scanf("%i",&n5);

    printf("Quantidade do numero 6: ");
    scanf("%i",&n6);

    printf("Quantidade do numero 7: ");
    scanf("%i",&n7);

    printf("Quantidade do numero 8: ");
    scanf("%i",&n8);

    printf("Quantidade do numero 9: ");
    scanf("%i",&n9);

    initwindow(1280,800,"Histograma");

    line(60,100,60,650);
    line(60,650,1100,650);

    //axis text
    outtextxy(75,100,"X");
    outtextxy(1100,660,"Y");
    //outtextxy(50,650,"0");

    //Arrow
    line(50,120,60,100);
    line(70,120,60,100);

    line(1100,650,1080,640);
    line(1100,650,1080,660);

    outtextxy(10,45,"Quantidade");
    outtextxy(600,700,"Numeros");

    //Y axis text

    outtextxy(110,655,"1");
    outtextxy(210,655,"2");
    outtextxy(310,655,"3");
    outtextxy(410,655,"4");
    outtextxy(510,655,"5");
    outtextxy(610,655,"6");
    outtextxy(710,655,"7");
    outtextxy(810,655,"8");
    outtextxy(910,655,"9");


    //X axis text

    outtextxy(20,550,"<=1");
    outtextxy(20,500,"2");
    outtextxy(20,450,"3");
    outtextxy(20,400,"4");
    outtextxy(20,350,"5");
    outtextxy(20,300,"6");
    outtextxy(20,250,"7");
    outtextxy(20,200,"8");
    outtextxy(20,150,">=9");

    //Draw bars on screen

/////////////////////////////////////////

    if(n1 <= 1){
    bar(100,645,130,550); // n1
    }if(n1 == 2){
        bar(100,645,130,500);
    } if(n1 == 3){
        bar(100,645,130,450);
    } if(n1==4){
        bar(100,645,130,400);
    } if(n1==5){
        bar(100,645,130,350);
    } if(n1 ==6){
        bar(100,645,130,300);
    } if(n1==7){
        bar(100,645,130,250);
    } if(n1==8){
        bar(100,645,130,200);
    } if(n1>=9){
        bar(100,645,130,150);
    }else{
    printf("Numero invalido");
    }
/////////////////////////////////////////

  if(n2<= 1){
         bar(200,645,230,550); // n2
    } if(n2 ==2){
         bar(200,645,230,500); // n2
    } if(n2 == 3){
         bar(200,645,230,450); // n2
    } if(n2 ==4){
         bar(200,645,230,400); // n2
    } if(n2 ==5){
         bar(200,645,230,350); // n2
    } if(n2  ==6){
         bar(200,645,230,300); // n2
    } if(n2==7){
         bar(200,645,230,250); // n2
    } if(n2 ==8){
         bar(200,645,230,200); // n2
   } if(n2 >=9){
        bar(200,645,230,150); // n2
    }else{
    printf("Numero invalido");
    }
/////////////////////////////////////////

  if(n3<= 1){
        bar(300,645,330,550); // n3
    } if(n3 == 2){
        bar(300,645,330,500); // n3
    } if(n3 == 3){
        bar(300,645,330,450); // n3
    } if(n3==4){
        bar(300,645,330,400); // n3
    } if(n3==5){
        bar(300,645,330,350); // n3
    } if(n3 ==6){
        bar(300,645,330,300); // n3
    } if(n3==7){
        bar(300,645,330,250); // n3
    } if(n3==8){
        bar(300,645,330,200); // n3
    } if(n3>=9){
        bar(300,645,330,150); // n3
    }else{
    printf("Numero invalido");
    }
/////////////////////////////////////////

   if(n4<= 1){
         bar(400,645,430,550); // n4
    } if(n4 == 2){
         bar(400,645,430,500); // n4
    } if(n4 == 3){
         bar(400,645,430,450); // n4
    } if(n4 ==4){
        bar(400,645,430,400); // n4
    } if(n4 ==5){
         bar(400,645,430,350); // n4
    } if(n4  ==6){
        bar(400,645,430,300); // n4
    } if(n4 ==7){
         bar(400,645,430,250); // n4
    } if(n4 ==8){
         bar(400,645,430,200); // n4
    } if(n4 >=9){
        bar(400,645,430,150); // n4
    }else{
    printf("Numero invalido");
    }
/////////////////////////////////////////

   if(n5<= 1){
          bar(500,645,530,550); // n5

    } if(n5 == 2){
          bar(500,645,530,500); // n5

    } if(n5 == 3){
          bar(500,645,530,450); // n5

    } if(n5 ==4){
        bar(500,645,530,400); // n5

    } if(n5 ==5){
         bar(500,645,530,350); // n5

    } if(n5  ==6){
         bar(500,645,530,300); // n5

    } if(n5 ==7){
          bar(500,645,530,250); // n5

    } if(n5 ==8){
          bar(500,645,530,200); // n5

    } if(n5 >=9){
         bar(500,645,530,150); // n5
    }else{
    printf("Numero invalido");
    }

/////////////////////////////////////////

      if(n6<= 1){
          bar(600,645,630,550); // n6

    } if(n6 == 2){
          bar(600,645,630,500); // n6

    } if(n6 == 3){
         bar(600,645,630,450); // n6

    } if(n6 ==4){
        bar(600,645,630,400); // n6

    } if(n6 ==5){
        bar(600,645,630,350); // n6

    } if(n6  ==6){
         bar(600,645,630,300); // n6

    } if(n6 ==7){
         bar(600,645,630,250); // n6

    } if(n6 ==8){
          bar(600,645,630,200); // n6

    } if(n6 >=9){
        bar(600,645,630,150); // n6
    }else{
    printf("Numero invalido");
    }

/////////////////////////////////////////
     if(n7<= 1){
          bar(700,645,730,550); // n7

    } if(n7 == 2){
          bar(700,645,730,500); // n7

    } if(n7 == 3){
         bar(700,645,730,450); // n7

    } if(n7 ==4){
        bar(700,645,730,400); // n7

    } if(n7 ==5){
         bar(700,645,730,350); // n7

    } if(n7  ==6){
        bar(700,645,730,300); // n7

    } if(n7 ==7){
         bar(700,645,730,250); // n7

    } if(n7 ==8){
          bar(700,645,730,200); // n7

    } if(n7 >=9){
         bar(700,645,730,150); // n7
    }else{
    printf("Numero invalido");
    }

/////////////////////////////////////////
 if(n8<= 1){
          bar(800,645,830,550); // n8

    } if(n8 == 2){
          bar(800,645,830,500); // n8

    } if(n8 == 3){
         bar(800,645,830,450); // n8

    } if(n8 ==4){
       bar(800,645,830,400); // n8

    } if(n8 ==5){
         bar(800,645,830,350); // n8

    } if(n8  ==6){
       bar(800,645,830,300); // n8

    } if(n8 ==7){
         bar(800,645,830,250); // n8

    } if(n8 ==8){
          bar(800,645,830,200); // n8

    } if(n8>=9){
         bar(800,645,830,150); // n8
    }else{
    printf("Numero invalido");
    }

/////////////////////////////////////////
     if(n9<= 1){
         bar(900,645,930,550); // n9

    } if(n9 == 2){
           bar(900,645,930,500); // n9

    } if(n9 == 3){
          bar(900,645,930,450); // n9

    } if(n9 ==4){
        bar(900,645,930,400); // n9

    } if(n9==5){
          bar(900,645,930,350); // n9

    } if(n9  ==6){
       bar(900,645,930,300); // n9

    } if(n9 ==7){
          bar(900,645,930,250); // n9

    } if(n9 ==8){
          bar(900,645,930,200); // n9

    } if(n9 >=9){
          bar(900,645,930,150); // n9
    }else{
    printf("Numero invalido");
    }
/////////////////////////////////////////
    delay(999999);
    return 0;

    }

