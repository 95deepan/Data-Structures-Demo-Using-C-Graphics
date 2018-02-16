			//** MINI PROJECT  **//
  // By B.S.S.S.K.KUMAR
  //    C.DEEPAN KUMAR

 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>
 #include<stdlib.h>

// Functions
 void DSandTypes();
 void LDSandTypes();
 void ARRAYS();
 //** Sub functions
 numbers(int);t14(int);t16(int);t23(int);t27(int);t36(int);t38(int);t41(int);
t43(int);t56(int);t79(int);erase(int,int);ferase(int,int);berase(int,int);
serase(int);numbers1(int);lines(int);ellip(int,int);bellip(int,int);recline();
serase1(int);cirline(int);serase2(int);ecirline(int);erase1(int,int);
void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");    

 DSandTypes();
 sound(100*random(80));
 delay(10);
 nosound();
 LDSandTypes();
 delay(1000);
 ARRAYS();
getch();}void DSandTypes(){int i;setcolor(LIGHTCYAN);
for(i=0;i<350;i++){sound(20*random(100));delay(10);nosound();
printf("\a");circle(120+i,20,30);}setcolor(BLACK);settextstyle(.2,0,3);
outtextxy(120,15,"DATA STRUCTURES");settextstyle(7,0,2);setcolor(WHITE);
outtextxy(142,100,"Data structure is a method of structuring");
outtextxy(10,135,"the data , i . e . , it is the way of storing the data in");
outtextxy(5,170,"system so that it can be used in an efficient manner.");
settextstyle(1,0,3);
rectangle(140,250,450,290);outtextxy(195,255,"DATA STRUCTURES");
line(295,290,295,330);line(50,330,540,330);line(50,330,50,360);
line(540,330,540,360);rectangle(0,360,280,390);rectangle(310,360,612,390);
settextstyle(7,0,2);outtextxy(20,362,"Linear Data structure");
outtextxy(315,362,"Non-Linear Data structure");delay(5000);setcolor(CYAN);
for(i=0;i<=158;i++){line(0+i,474*2/3,0+i,474);line(0,(474/3)+i,474/3,
(474/3)+i);line((474/3)-i,0,(474/3)-i,474/3);line(474/3,474/3-i,2*474/3,
474/3-i);line(474/3+i,474/3,474/3+i,2*474/3);line(474/3,474-i,2*474/3,474-i);
line(474-i,2*474/3,474-i,474);line(2*474/3,(474/3)+i,474,(474/3)+i);
line(2*474/3+i,0,2*474/3+i,474/3);line(474,0+i,4*474/3,0+i);
line((4*474/3)-i,474/3,(4*474/3)-i,2*474/3);line(474,(2*474/3)+i,4*474/3,
(2*474/3)+i);delay(10);}setcolor(BLACK);for(i=0;i<=237;i++){line(0,0+i,640,
0+i);line(0,474-i,640,474-i);delay(2);}}

 void LDSandTypes(){int i;settextstyle(.2,0,3);setcolor(RED);
 outtextxy(95,15,"LINEAR DATA STRUCTURE");settextstyle(7,0,2);setcolor(WHITE);
 outtextxy(140,65,"When the elements are accessed and placed in");
 outtextxy(8,95,"contiguous memory location,then DS is known as 'Linear");
 outtextxy(8,125,"data strucutre'.");settextstyle(1,0,3);setcolor(RED);
outtextxy(3,170,"General Operations involved in Data strucures :");
settextstyle(1,0,2);setcolor(WHITE);outtextxy(30,210,"(1) Traversing");
outtextxy(30,240,"(2) Searching");outtextxy(30,270,"(3) Sorting");
outtextxy(30,300,"(4) Insertion");outtextxy(30,330,"(5) Deletion");
delay(5000);rectangle(24,208,200,238);delay(100);sound(100*random(40));
delay(10);nosound();setcolor(YELLOW);rectangle(24,208,200,238);}
		  //** Traversing process starts
 void ARRAYS(){double k=0;int i,r,j;settextstyle(1,0,3);setcolor(WHITE);
delay(1000);cleardevice();outtextxy(30,210,"(1) Traversing");
delay(500);cleardevice();nosound();setcolor(CYAN);settextstyle(.2,0,0.9);
outtextxy(30,20,"TRAVERSING");delay(200);setcolor(CYAN);
for(i=1;i<=60;i++){sound(20*random(100));settextstyle(.2,0,0.9+k);
outtextxy(30,20,"TRAVERSING");delay(30);cleardevice();k=k+0.1;nosound();}
setcolor(CYAN);settextstyle(.2,0,7);outtextxy(30,20,"TRAVERSING");
delay(80);line(28,72,600,72);line(28,75,600,75);delay(50);setcolor(WHITE);
settextstyle(.9,0,2);outtextxy(10,120,"List of elements ");settextstyle(3,0,2);
outtextxy(110,140,"1");outtextxy(110,180,"2");outtextxy(110,220,"3");
outtextxy(110,260,"4");outtextxy(110,300,"5");delay(800);
setcolor(GREEN);settextstyle(4,0,4);outtextxy(350,100,"Traversing process");
delay(1000);setcolor(YELLOW);line(120,155,220,155);
line(120,155,150,170);line(120,155,150,140);settextstyle(.2,0,5);
sound(100*random(40));delay(10);nosound();outtextxy(450,160,"1");delay(800);
for(j=0;j<100;j++){setcolor(BLACK);line(450+j,160,450+j,200);}
for(i=0;i<101;i++){setcolor(BLACK);line(220-i,170,220-i,140);}
setcolor(YELLOW);line(120,195,220,195);line(120,195,150,210);
line(120,195,150,180);settextstyle(.2,0,5);sound(100*random(40));
delay(10);nosound();outtextxy(450,160,"2");delay(800);for(j=0;j<100;j++)
{setcolor(BLACK);line(450+j,160,450+j,200);}for(i=0;i<101;i++){setcolor(BLACK);
line(220-i,210,220-i,180);}setcolor(YELLOW);line(120,235,220,235);
line(120,235,150,250);line(120,235,150,220);settextstyle(.2,0,5);
sound(100*random(40));delay(10);nosound();outtextxy(450,160,"3");delay(800);
for(j=0;j<100;j++){setcolor(BLACK);line(450+j,160,450+j,200);}
for(i=0;i<101;i++){setcolor(BLACK);line(220-i,250,220-i,220);}setcolor(YELLOW);
line(120,275,220,275);line(120,275,150,290);line(120,275,150,260);
settextstyle(.2,0,5);sound(100*random(40));delay(10);nosound();
outtextxy(450,160,"4");delay(800);for(j=0;j<100;j++){setcolor(BLACK);
line(450+j,160,450+j,200);}for(i=0;i<101;i++){setcolor(BLACK);
line(220-i,290,220-i,260);}setcolor(YELLOW);line(120,315,220,315);
line(120,315,150,330);line(120,315,150,300);settextstyle(.2,0,5);
sound(100*random(40));delay(10);nosound();outtextxy(450,160,"5");delay(2000);
for(i=0;i<101;i++){setcolor(BLACK);line(220-i,330,220-i,300);}
sound(100*random(40));delay(10);nosound();setcolor(WHITE);
settextstyle(5,0,4);outtextxy(50,350,"   Thus each element is accessed and");
outtextxy(10,390,"processed.");delay(1500);
cleardevice();
		   //** Searching process
rectangle(129,9,485,45);setfillstyle(HATCH_FILL,YELLOW);
 floodfill(135,40,WHITE);setcolor(BLACK);settextstyle(.2,0,5);
 outtextxy(130,10,"SEARCHING");setcolor(LIGHTCYAN);rectangle(100,100,555,130);
 settextstyle(.2,0,3);outtextxy(0,105,"DATA");setcolor(BLACK);setcolor(CYAN);
 for(i=0;i<12;i++){line(135+k,100,135+k,130);k=k+35;}
 printf("\n\n\n\n\n\t       ");for(i=1;i<=5;i++){printf("%d",i);printf("   ");}
 printf(" 6   ");for(i=7;i<=13;i++){printf("%d",i);printf("   ");}
 settextstyle(3,0,1);setcolor(WHITE);outtextxy(560,105,"(Sorted)");
 outtextxy(113,102,"5");outtextxy(148,102,"9");outtextxy(179,102,"11");
 outtextxy(215,102,"14");outtextxy(253,102,"23");outtextxy(289,102,"26");
 outtextxy(322,102,"29");outtextxy(353,102,"34");outtextxy(394,102,"38");
 outtextxy(425,102,"41");outtextxy(466,102,"43");outtextxy(499,102,"47");
 outtextxy(528,102,"50");outtextxy(102,140,"BEG");outtextxy(525,140,"END");
 line(115,127,115,138);line(539,127,539,138);settextstyle(3,1,1);
 outtextxy(101,130,"<");outtextxy(525,130,"<");settextstyle(3,0,2);
 setcolor(CYAN);outtextxy(0,170,"DATA[1]=5");outtextxy(150,170,"DATA[2]=9");
 outtextxy(300,170,"DATA[3]=11");outtextxy(450,170,"and so on ..........");
 outtextxy(0,215,"MID=");outtextxy(45,200,"[");outtextxy(85,200,"+");
 outtextxy(132,200,"]");line(45,230,135,230);outtextxy(88,235,"2");
 outtextxy(140,215,"=");outtextxy(340,215,"DATA[");
 outtextxy(430,215,"]=DATA[");outtextxy(535,215,"]=");setcolor(WHITE);
 outtextxy(50,200,"BEG");outtextxy(100,200,"END");outtextxy(153,215,"7");
 outtextxy(250,215,"So,now");outtextxy(400,215,"MID");outtextxy(515,215,"7");
 outtextxy(560,215,"29");delay(4000);setcolor(RED);settextstyle(.2,0,3);
 delay(1000);sound(100*random(40));delay(10);nosound();line(0,265,700,265);
 line(0,268,700,268);delay(800);sound(100*random(40));delay(10);nosound();
 outtextxy(0,280,"CASE:1");delay(1000);setcolor(WHITE);settextstyle(7,0,3);
  outtextxy(160,275,"(Best case)----> Search the element 29:");delay(1000);
  settextstyle(3,0,1);setcolor(WHITE);outtextxy(113,310,"5");
  outtextxy(148,310,"9");outtextxy(173,310,"11");outtextxy(210,310,"14");
  outtextxy(248,310,"23");outtextxy(282,310,"26");outtextxy(318,310,"29");
  outtextxy(353,310,"34");outtextxy(385,310,"38");outtextxy(422,310,"41");
  outtextxy(455,310,"43");outtextxy(488,310,"47");outtextxy(525,310,"50");
  setcolor(WHITE);settextstyle(7,0,3);setcolor(LIGHTCYAN);
  rectangle(100,310,555,340);k=0;for(i=0;i<12;i++){line(135+k,310,135+k,340);
  k=k+35;}setcolor(WHITE);outtextxy(102,345,"BEG");outtextxy(525,345,"END");
  delay(500);for(j=0;j<100;j++){setcolor(BLACK);line(0,345+j,650,345+j);
  delay(5);}delay(500);setcolor(CYAN);settextstyle(.2,0,2);
  outtextxy(0,350,"STEP:1");delay(1000);setcolor(YELLOW);
  arc(230,260,220,320,130);setcolor(WHITE);outtextxy(220,383,">");
  outtextxy(221,383,">");delay(300);setcolor(YELLOW);arc(428,260,220,320,130);
  setcolor(WHITE);outtextxy(430,383,"<");outtextxy(431,383,"<");
  settextstyle(1,0,1);setcolor(CYAN);delay(500);outtextxy(320,290,"7");
  settextstyle(5,0,4);outtextxy(20,400,"Searching process is over....");
outtextxy(430,400,"Location=7");delay(3000);// here
for(j=0;j<300;j++){setcolor(BLACK);
line(0,269+j,650,269+j);delay(5);}setcolor(RED);settextstyle(.2,0,3);
sound(100*random(40));delay(10);nosound();outtextxy(0,280,"CASE:2");delay(900);
setcolor(WHITE);settextstyle(7,0,3);
outtextxy(140,275,"(Average case)--->Search the element 23:");
settextstyle(3,0,1);setcolor(WHITE);delay(1000);outtextxy(113,310,"5");
outtextxy(148,310,"9");outtextxy(173,310,"11");outtextxy(210,310,"14");
outtextxy(248,310,"23");outtextxy(282,310,"26");outtextxy(318,310,"29");
outtextxy(353,310,"34");outtextxy(385,310,"38");outtextxy(422,310,"41");
outtextxy(455,310,"43");outtextxy(488,310,"47");outtextxy(525,310,"50");
setcolor(LIGHTCYAN); rectangle(100,310,555,340);k=0;for(i=0;i<12;i++)
{line(135+k,310,135+k,340);k=k+35;}setcolor(WHITE);settextstyle(1,0,1);
outtextxy(102,345,"BEG");outtextxy(525,345,"END");delay(1000);delay(500);
for(j=0;j<100;j++){setcolor(BLACK);line(0,345+j,650,345+j);delay(5);}
setcolor(CYAN);settextstyle(.2,0,2);outtextxy(0,350,"STEP:1");delay(1000);
setcolor(YELLOW);arc(230,260,220,320,130);setcolor(WHITE);
outtextxy(220,383,">");outtextxy(221,383,">");delay(300);setcolor(YELLOW);
arc(428,260,220,320,130);setcolor(WHITE);outtextxy(430,383,"<");
outtextxy(431,383,"<");delay(500);settextstyle(1,0,1);setcolor(CYAN);
outtextxy(320,290,"7");delay(500);settextstyle(3,0,2);
outtextxy(50,400,"DATA[7]=29,But searching item is 23(<29)");
outtextxy(50,430,"So, Set END=7");delay(2000);for(j=0;j<90;j++){setcolor(BLACK);
line(0,341+j,650,341+j);delay(5);}for(j=0;j<100;j++){setcolor(BLACK);
line(0,430+j,650,430+j);}setcolor(CYAN);delay(500);
outtextxy(200,430,"    Set END=7");delay(1000);setcolor(WHITE);
settextstyle(1,0,1);outtextxy(102,345,"BEG");outtextxy(525,345,"END");
delay(500);for(j=0;j<210;j++){delay(10);setcolor(BLACK);
line(555-j,310,555-j,340);}for(j=0;j<80;j++){delay(2);setcolor(BLACK);
line(560-j,330,560-j,380);}delay(50);setcolor(WHITE);outtextxy(315,345,"END");
delay(1000);for(j=0;j<300;j++){setcolor(BLACK);line(0,345+j,650,345+j);
delay(5);}setcolor(CYAN);settextstyle(.2,0,2);outtextxy(0,350,"STEP:2");
delay(1000);setcolor(YELLOW);arc(175,310,210,330,60);setcolor(WHITE);
settextstyle(1,0,2);outtextxy(170,356,">");outtextxy(171,356,">");delay(500);
setcolor(YELLOW);arc(280,310,210,330,60);setcolor(WHITE);outtextxy(280,356,"<");
outtextxy(281,356,"<");settextstyle(1,0,1);setcolor(CYAN);delay(800);
outtextxy(223,340,"4");settextstyle(3,0,2);
outtextxy(20,400,"Now, DATA[4]=14,But searching item=23(>14)");
outtextxy(20,430,"So, Set BEG=4 ");delay(2000);
for(j=0;j<100;j++){setcolor(BLACK);line(0,400+j,650,400+j);}setcolor(CYAN);
outtextxy(200,430,"    Set BEG=4 ");delay(1000);for(j=0;j<80;j++)
{setcolor(BLACK);line(0,341+j,650,341+j);}setcolor(CYAN);for(j=0;j<105;j++)
{delay(10);setcolor(BLACK);line(100+j,310,100+j,340);}setcolor(WHITE);
settextstyle(1,0,1);outtextxy(102,345,"BEG");outtextxy(315,345,"END");
delay(800);for(j=0;j<205;j++){delay(2);setcolor(BLACK);
line(100+j,342,100+j,365);}setcolor(WHITE);outtextxy(205,345,"BEG");delay(1000);
for(j=0;j<80;j++){setcolor(BLACK);line(0,341+j,650,341+j);}for(j=0;j<300;j++)
{setcolor(BLACK);line(0,345+j,650,345+j);delay(5);}setcolor(CYAN);
settextstyle(.2,0,2);outtextxy(50,350,"STEP:3");delay(1000);setcolor(YELLOW);
arc(240,325,210,330,30);setcolor(WHITE);outtextxy(234,349,">");setcolor(YELLOW);
arc(300,324,210,330,40);setcolor(WHITE);outtextxy(298,356,"<");
settextstyle(1,0,1);setcolor(CYAN);delay(500);outtextxy(253,343,"5");
settextstyle(3,0,2);
outtextxy(20,400,"Now, DATA[5]=23,Location is found,LOC[23]=5");delay(1000);
for(j=0;j<300;j++){setcolor(BLACK);line(0,269+j,650,269+j);delay(5);}
setcolor(RED);settextstyle(.2,0,3);sound(100*random(40));delay(10);nosound();
outtextxy(0,280,"CASE:3");delay(1000);setcolor(WHITE);settextstyle(7,0,3);
outtextxy(140,275,"(Worst case)--->Search the element 42:");
settextstyle(.2,0,3);delay(1000);setcolor(YELLOW);outtextxy(300,380,"?");
delay(100);setcolor(BLUE);outtextxy(383,349,"?");delay(100);
setcolor(RED);outtextxy(202,391,"?");delay(100);setcolor(GREEN);
outtextxy(276,336,"?");delay(100);setcolor(CYAN);outtextxy(332,409,"?");
delay(100);setcolor(MAGENTA);outtextxy(96,323,"?");delay(100);
setcolor(LIGHTBLUE);outtextxy(402,329,"?");delay(100);setcolor(LIGHTRED);
outtextxy(391,439,"?");delay(100);setcolor(LIGHTGREEN);outtextxy(172,409,"?");
delay(100);setcolor(BLUE);outtextxy(179,316,"?");delay(100);setcolor(CYAN);
outtextxy(413,387,"?");delay(100);setcolor(RED);outtextxy(283,441,"?");
delay(100);setcolor(GREEN);outtextxy(121,351,"?");delay(100);
setcolor(MAGENTA);outtextxy(437,403,"?");delay(100);setcolor(LIGHTBLUE);
outtextxy(133,393,"?");delay(100);setcolor(LIGHTRED);outtextxy(190,420,"?");
delay(100);setcolor(LIGHTGREEN);outtextxy(453,320,"?");delay(400);
for(j=0;j<300;j++){setcolor(BLACK);line(0,310+j,650,310+j);}
settextstyle(5,0,4);setcolor(CYAN);delay(300);
outtextxy(70,350,"Element 42 is nowhere in the list.");delay(3000);
for(j=0;j<300;j++){setcolor(BLACK);line(0,310+j,650,310+j);}
settextstyle(5,0,4);setcolor(CYAN);outtextxy(250,350,"But ,");delay(1200);
for(j=0;j<300;j++){setcolor(BLACK);line(0,310+j,650,310+j);}
settextstyle(5,0,4);setcolor(CYAN);
outtextxy(30,350,"Algorithm keeps on searching..............");delay(2500);
for(j=0;j<300;j++){setcolor(BLACK);line(0,310+j,650,310+j);}
settextstyle(5,0,4);setcolor(CYAN);
outtextxy(140,350,"After some moment....");delay(2000);
for(j=0;j<300;j++){setcolor(BLACK);line(0,310+j,650,310+j);}
settextstyle(5,0,4);setcolor(CYAN);
outtextxy(50,350,"We get the output-->LOC[42]=null.");delay(2500);
for(j=0;j<300;j++){setcolor(BLACK);line(0,310+j,650,310+j);}
settextstyle(5,0,4);setcolor(CYAN);
outtextxy(130,350,"Search is unsuccessful.... ");delay(2500);setcolor(YELLOW);
for(i=0;i<=430;i++){circle(315,220,423-i);}setbkcolor(YELLOW);
for(i=0;i<=430;i++){setcolor(RED);circle(315,220,0+i);}setbkcolor(BLACK);
setcolor(CYAN);settextstyle(.2,0,3);setcolor(RED);for(i=0;i<700;i++)
{line(0,0+i,650,0+i);}setcolor(CYAN);clrscr();cleardevice();
	       /////*** selection sort starts
setcolor(YELLOW);settextstyle(7,0,6);outtextxy(180,0,"SORTING");delay(500);
numbers(30);setcolor(RED);settextstyle(4,0,3);outtextxy(80,150,"Arrange:");
setcolor(CYAN);settextstyle(4,0,3);
outtextxy(175,150,"Using Selection sort Algorithm");delay(2000);setcolor(BLACK);
for(i=0;i<=30;i++){line(80,153+i,487,153+i);delay(10);}settextstyle(4,0,8);
setcolor(CYAN);outtextxy(125,150,"But how");settextstyle(4,0,8);
outtextxy(470,150,"?");delay(200);setcolor(BLACK);for(i=0;i<=150;i++)
{line(80,320-i,520,320-i);delay(10);}settextstyle(1,0,1);setcolor(CYAN);
outtextxy(200,55,"(Using SELECTION sort)");setcolor(CYAN);
rectangle(100,100,520,130);setcolor(CYAN);for(i=0;i<11;i++)
{line(135+r,100,135+r,130);r=r+35;delay(50);}printf("\n\n\n\n\n\t       ");
for(i=1;i<=5;i++){printf("%d",i);printf("   ");delay(50);}
printf(" 6   ");for(i=7;i<=12;i++){printf("%d",i);printf("   ");delay(50);}
r=0;for(i=0;i<13;i++){line(100+r,130,100+r,460);r=r+35;delay(50);}
for(i=0;i<=420;i++){circle(100+i,460,1);delay(1);}line(100,132,520,132);
numbers(60);setcolor(CYAN);settextstyle(3,0,1);outtextxy(0,90,"Location of");
outtextxy(0,110,"Smallest no.");delay(800);settextstyle(1,0,1);
setcolor(MAGENTA);outtextxy(210,132,"14");outtextxy(78,132,"4");delay(1500);
berase(67,0);delay(200);ferase(0,0);delay(200);t14(0);setcolor(WHITE);
outtextxy(210,132,"79");delay(400);setcolor(WHITE);circle(515,48,7);
settextstyle(2,0,5);setfillstyle(SOLID_FILL,LIGHTCYAN);floodfill(515,48,WHITE);
setcolor(LIGHTCYAN);outtextxy(530,40,"Sorted number");setcolor(WHITE);
circle(515,23,7);setfillstyle(SOLID_FILL,MAGENTA);floodfill(515,23,WHITE);
setcolor(MAGENTA);outtextxy(530,15,"Smallest number");delay(800);numbers(90);
erase(0,30);erase(102,30);t14(30);setcolor(WHITE);outtextxy(210,162,"79");
delay(900);setcolor(MAGENTA);outtextxy(78,162,"10");outtextxy(422,72+90,"16");
delay(800);berase(279,30);ferase(35,30);delay(80);t16(30);setcolor(WHITE);
outtextxy(422,162,"91");delay(800);numbers(120);erase(0,60);erase(35,60);
erase(100,60);erase(315,60);t14(60);t16(60);setcolor(WHITE);
outtextxy(210,192,"79");outtextxy(422,192,"91");delay(900);setcolor(MAGENTA);
outtextxy(78,192,"5");outtextxy(248,192,"23");delay(800);berase(103,60);
ferase(65,60);delay(80);t23(60);setcolor(WHITE);outtextxy(248,192,"36");
delay(800);numbers(150);erase(0,90);erase(35,90);erase(65,90);t14(90);t16(90);
t23(90);erase(102,90);erase(314,90);erase(140,90);setcolor(WHITE);
outtextxy(210,222,"79");outtextxy(422,222,"91");outtextxy(248,222,"36");
delay(900);setcolor(MAGENTA);outtextxy(78,222,"9");outtextxy(385,222,"27");
delay(800);berase(242,90);ferase(102,90);t27(90);setcolor(WHITE);
outtextxy(385,222,"79");delay(800);numbers(180);erase(0,120);erase(35,120);
erase(65,120);erase(103,120);erase(140,120);erase(276,120);erase(315,120);
t14(120);t16(120);t23(120);t27(120);setcolor(WHITE);outtextxy(248,252,"36");
outtextxy(385,252,"79");outtextxy(422,252,"91");delay(900);setcolor(MAGENTA);
outtextxy(248,252,"36");outtextxy(78,252,"5");delay(800);t36(120);
settextstyle(2,0,5);outtextxy(522,258,"Sorted already");delay(900);numbers(210);
erase(0,150);erase(35,150);erase(65,150);erase(103,150);erase(140,150);
erase(276,150);erase(315,150);t14(150);t16(150);t23(150);t27(150);t36(150);
setcolor(WHITE);outtextxy(385,282,"79");outtextxy(422,282,"91");
delay(900);setcolor(MAGENTA);outtextxy(318,282,"38");outtextxy(78,282,"7");
delay(800);berase(173,150);delay(250);ferase(174,150);t38(150);setcolor(WHITE);
outtextxy(318,282,"41");delay(800);numbers(240);erase(0,180);erase(35,180);
erase(65,180);erase(103,180);erase(140,180);erase(276,180);erase(315,180);
erase(175,180);erase(210,180);t14(180);t16(180);t23(180);t27(180);t36(180);
t38(180);setcolor(WHITE);outtextxy(385,312,"79");outtextxy(318,312,"41");
outtextxy(422,312,"91");delay(900);setcolor(MAGENTA);outtextxy(318,312,"41");
outtextxy(78,312,"7");delay(800);t41(180);settextstyle(2,0,5);
outtextxy(522,320,"Sorted already");delay(900);numbers(270);erase(0,210);
erase(35,210);erase(65,210);erase(103,210);erase(140,210);erase(276,210);
erase(315,210);erase(174,210);erase(210,210);t14(210);t16(210);t23(210);
t27(210);t36(210);t38(210);t41(210);setcolor(WHITE);outtextxy(385,342,"79");
outtextxy(422,342,"91");delay(900);setcolor(MAGENTA);outtextxy(455,342,"43");
outtextxy(78,342,"11");delay(800);berase(310,210);delay(250);ferase(245,210);
t43(210);setcolor(WHITE);outtextxy(455,342,"84");delay(900);numbers(300);
erase(0,240);erase(35,240);erase(65,240);erase(103,240);erase(140,240);
erase(276,240);erase(315,240);erase(174,240);erase(210,240);erase(241,240);
erase(350,240);t14(240);t16(240);t23(240);t27(240);t36(240);t38(240);t41(240);
t43(240);setcolor(WHITE);outtextxy(385,372,"79");outtextxy(422,372,"91");
outtextxy(455,372,"84");delay(900);setcolor(MAGENTA);outtextxy(493,372,"56");
outtextxy(78,372,"12");delay(800);berase(348,240);delay(250);ferase(277,240);
t56(240);setcolor(WHITE);outtextxy(493,372,"79");delay(900);numbers(330);
erase(0,270);erase(35,270);erase(65,270);erase(103,270);erase(140,270);
erase(276,270);erase(315,270);erase(174,270);erase(210,270);erase(241,270);
erase(347,270);erase(385,270);erase(280,270);t14(270);t16(270);t23(270);
t27(270);t36(270);t38(270);t41(270);t43(270);t56(270);setcolor(WHITE);
outtextxy(493,402,"79");outtextxy(422,402,"91");outtextxy(455,402,"84");
delay(900);setcolor(MAGENTA);outtextxy(493,402,"79");outtextxy(78,402,"12");
delay(800);berase(348,270);delay(250);ferase(314,270);t79(270);delay(200);
setcolor(WHITE);outtextxy(493,402,"91");delay(900);numbers(360);erase(0,300);
erase(35,300);erase(65,300);erase(103,300);erase(140,300);erase(276,300);
erase(315,300);erase(174,300);erase(210,300);erase(241,300);erase(347,300);
erase(385,300);erase(280,300);t14(300);t16(300);t23(300);t27(300);t36(300);
t38(300);t41(300);t43(300);t56(300);t79(300);setcolor(WHITE);
outtextxy(493,432,"91");outtextxy(455,432,"84");delay(900);setcolor(MAGENTA);
outtextxy(455,432,"84");outtextxy(78,432,"11");delay(800);setcolor(LIGHTCYAN);
outtextxy(455,432,"84");settextstyle(2,0,5);outtextxy(522,438,"Sorted already");
delay(900);settextstyle(1,0,1);outtextxy(493,432,"91");delay(2000);
cleardevice();setcolor(YELLOW);settextstyle(7,0,6);outtextxy(180,0,"SORTING");
settextstyle(1,0,1);setcolor(LIGHTCYAN);outtextxy(108,432,"14");
outtextxy(143,432,"16");outtextxy(173,432,"23");outtextxy(210,432,"27");
outtextxy(248,432,"36");outtextxy(282,432,"38");outtextxy(318,432,"41");
outtextxy(353,432,"43");outtextxy(385,432,"56");outtextxy(422,432,"79");
outtextxy(455,432,"84");outtextxy(493,432,"91");settextstyle(4,0,5);
setcolor(LIGHTRED);outtextxy(20,100,"The sorted list is");settextstyle(1,0,1);
serase(0);outtextxy(108,170,"14");serase(35);outtextxy(143,170,"16");
serase(65);outtextxy(173,170,"23");serase(103);outtextxy(210,170,"27");
serase(140);outtextxy(248,170,"36");serase(173);outtextxy(282,170,"38");
serase(208);outtextxy(318,170,"41");serase(243);outtextxy(353,170,"43");
serase(278);outtextxy(385,170,"56");serase(313);outtextxy(422,170,"79");
serase(348);outtextxy(455,170,"84");serase(383);outtextxy(493,170,"91");
delay(1500);setcolor(MAGENTA);
for(i=0;i<=120;i++){circle(475/8,475/8,0+i);circle(3*475/8,475/8,0+i);
circle(5*475/8,475/8,0+i);circle(7*475/8,475/8,0+i);circle(475/8,3*475/8,0+i);
circle(475/8,5*475/8,0+i);circle(475/8,7*475/8,0+i);
circle(3*475/8,3*475/8,0+i);circle(5*475/8,3*475/8,0+i);
circle(7*475/8,3*475/8,0+i);circle(3*475/8,5*475/8,0+i);
circle(5*475/8,5*475/8,0+i);circle(7*475/8,5*475/8,0+i);
circle(3*475/8,7*475/8,0+i);circle(5*475/8,7*475/8,0+i);
circle(7*475/8,7*475/8,0+i);circle(9*475/8,475/8,0+i);
circle(9*475/8,3*475/8,0+i);circle(9*475/8,5*475/8,0+i);
circle(9*475/8,7*475/8,0+i);delay(2);}cleardevice();

	      // Bubble sort starts
setcolor(YELLOW);settextstyle(7,0,6);outtextxy(180,0,"SORTING");
settextstyle(1,0,1);setcolor(CYAN);outtextxy(200,55,"(Using Bubble sort)");
numbers1(30);setcolor(LIGHTRED);settextstyle(4,0,3);outtextxy(80,150,"Arrange:"
);setcolor(CYAN);settextstyle(4,0,3);outtextxy(175,150,
"Using Bubble sort Algorithm");delay(2000);setcolor(BLACK);for(i=0;i<=30;i++)
{line(80,153+i,487,153+i);delay(10);}setcolor(CYAN);rectangle(165,98,395,128);
lines(0);delay(30);lines(35);delay(30);lines(73);delay(30);lines(113);
delay(30);lines(153);delay(30);lines(193);delay(30);lines(230);delay(30);
for(i=0;i<=230;i++){circle(165+i,320,1);delay(3);}numbers1(60);delay(1000);
ellip(0,0);delay(100);ferase(62,0);berase(66,0);setcolor(WHITE);
outtextxy(170,132,"14");outtextxy(210,132,"36");delay(1000);bellip(0,0);
recline(5);delay(100);ellip(40,0);delay(100);ferase(102,0);berase(106,0);
setcolor(WHITE);outtextxy(210,132,"23");outtextxy(250,132,"36");delay(1000);
bellip(40,0);recline(5);delay(100);ellip(80,0);delay(900);setcolor(CYAN);
outtextxy(400,132,"Sorted already");delay(500);bellip(80,0);recline(5);
delay(500);setcolor(BLACK);for(i=0;i<=30;i++){line(400,130+i,600,130+i);}
ellip(120,0);delay(100);ferase(182,0);berase(186,0);setcolor(WHITE);
settextstyle(1,0,1);outtextxy(290,132,"38");outtextxy(330,132,"41");
delay(1000);bellip(120,0);recline(5);ellip(160,0);delay(100);ferase(222,0);
berase(226,0);setcolor(WHITE);outtextxy(330,132,"11");outtextxy(370,132,"41");
delay(1000);bellip(160,0);recline(5);delay(100);setcolor(CYAN);
outtextxy(370,132,"41");delay(1000);outtextxy(400,132,"41 is Sorted");
delay(600);setcolor(WHITE);settextstyle(1,0,1);outtextxy(170,72+90,"14");
outtextxy(210,72+90,"23");outtextxy(250,72+90,"36");outtextxy(290,72+90,"38");
outtextxy(330,72+90,"11");setcolor(CYAN);outtextxy(370,72+90,"41");delay(1000);
ellip(0,30);delay(900);setcolor(CYAN);outtextxy(400,162,"Sorted already");
delay(500);bellip(0,30);delay(500);setcolor(BLACK);for(i=0;i<=30;i++)
{line(400,160+i,600,160+i);}delay(500);ellip(40,30);delay(900);setcolor(CYAN);
outtextxy(400,162,"Sorted already");delay(500);bellip(40,30);delay(500);
setcolor(BLACK);for(i=0;i<=30;i++){line(400,160+i,600,160+i);}delay(500);
ellip(80,30);delay(900);setcolor(CYAN);outtextxy(400,162,"Sorted already");
delay(500);bellip(80,30);delay(500);setcolor(BLACK);for(i=0;i<=30;i++)
{line(400,160+i,600,160+i);}delay(500);ellip(120,30);delay(100);ferase(182,30);
berase(186,30);setcolor(WHITE);outtextxy(290,162,"11");outtextxy(330,162,"38");
delay(1000);bellip(120,30);setcolor(CYAN);outtextxy(330,72+90,"38");delay(1000);
outtextxy(400,162,"38 is Sorted");delay(600);setcolor(WHITE);
settextstyle(1,0,1);outtextxy(170,72+120,"14");outtextxy(210,72+120,"23");
outtextxy(250,72+120,"36");outtextxy(290,72+120,"11");setcolor(CYAN);
outtextxy(330,72+120,"38");outtextxy(370,72+120,"41");delay(1000);ellip(0,60);
delay(900);setcolor(CYAN);outtextxy(400,192,"Sorted already");delay(500);
bellip(0,60);delay(500);setcolor(BLACK);for(i=0;i<=30;i++){line(400,190+i,
600,190+i);}delay(500);ellip(40,60);delay(900);setcolor(CYAN);outtextxy(400,
192,"Sorted already");delay(500);bellip(40,60);delay(500);setcolor(BLACK);
for(i=0;i<=30;i++){line(400,190+i,600,190+i);}delay(500);ellip(80,60);
delay(100);ferase(142,60);berase(146,60);setcolor(WHITE);outtextxy(250,192,
"11");outtextxy(290,192,"36");delay(1000);bellip(80,60);setcolor(CYAN);
outtextxy(290,72+120,"36");delay(1000);outtextxy(400,192,"36 is Sorted");
delay(600);setcolor(WHITE);settextstyle(1,0,1);outtextxy(170,72+150,"14");
outtextxy(210,72+150,"23");outtextxy(250,72+150,"11");setcolor(CYAN);
outtextxy(290,72+150,"36");outtextxy(330,72+150,"38");outtextxy(370,72+150,
"41");delay(1000);ellip(0,90);delay(900);setcolor(CYAN);outtextxy(400,222,
"Sorted already");delay(500);bellip(0,90);delay(500);setcolor(BLACK);
for(i=0;i<=30;i++){line(400,215+i,600,215+i);}delay(500);ellip(40,90);
delay(100);ferase(102,90);berase(106,90);setcolor(WHITE);outtextxy(210,222,
"11");outtextxy(250,222,"23");delay(1000);bellip(40,90);setcolor(CYAN);
outtextxy(250,222,"23");delay(400);outtextxy(400,222,"23 is Sorted");
delay(600);setcolor(WHITE);settextstyle(1,0,1);outtextxy(170,72+180,"14");
outtextxy(210,72+180,"11");setcolor(CYAN);outtextxy(250,72+180,"23");
outtextxy(290,72+180,"36");outtextxy(330,72+180,"38");outtextxy(370,72+180,
"41");delay(500);ellip(0,120);delay(100);ferase(62,120);berase(66,120);
setcolor(WHITE);outtextxy(170,252,"11");outtextxy(210,252,"14");delay(1000);
bellip(0,120);setcolor(CYAN);outtextxy(210,252,"14");delay(400);outtextxy(400,
252,"14 is Sorted");delay(600);setcolor(WHITE);settextstyle(1,0,1);
setcolor(CYAN);outtextxy(170,72+210,"11");outtextxy(210,72+210,"14");
outtextxy(250,72+210,"23");outtextxy(290,72+210,"36");outtextxy(330,72+210,
"38");outtextxy(370,72+210,"41");delay(500);outtextxy(400,282,"11 is Sorted");
delay(600);cleardevice();setcolor(YELLOW);settextstyle(7,0,6);outtextxy(180,0,
"SORTING");settextstyle(1,0,1);setcolor(CYAN);outtextxy(200,55,
"(Using Bubble sort)");settextstyle(4,0,5);setcolor(LIGHTRED);outtextxy(20,100,
"The sorted list is");setcolor(WHITE);settextstyle(1,0,1);setcolor(CYAN);
outtextxy(170,72+210,"11");outtextxy(210,72+210,"14");outtextxy(250,72+210,
"23");outtextxy(290,72+210,"36");outtextxy(330,72+210,"38");outtextxy(370,
72+210,"41");serase1(0);outtextxy(170,72+110,"11");serase1(40);outtextxy(210,
72+110,"14");serase1(80);outtextxy(250,72+110,"23");serase1(120);outtextxy(290,
72+110,"36");serase1(160);outtextxy(330,72+110,"38");serase1(200);outtextxy(
370,72+110,"41");delay(2500);

setcolor(BLUE);for(i=0;i<280;i++){circle(0+i,200,0+i);circle(310,0+i,0+i);
circle(620-i,200,0+i);circle(310,200,0+i);circle(310,470-i,0+i);}
setcolor(BLACK);for(i=0;i<=250;i++){line(0,0+i,630,0+i);
line(0,480-i,630,480-i);delay(5);}
	   //** Merge sort starts
setcolor(YELLOW);settextstyle(7,0,6);outtextxy(180,0,"SORTING");delay(500);
setcolor(WHITE);settextstyle(1,0,1);outtextxy(158,102,"5");outtextxy(195,102,
"3");outtextxy(230,102,"7");outtextxy(267,102,"2");outtextxy(310-7,102,"6");
outtextxy(350-10,102,"1");outtextxy(390-15,102,"8");outtextxy(415,102,"4");
delay(800);setcolor(RED);settextstyle(4,0,3);outtextxy(80,150,"Arrange:");
setcolor(CYAN);settextstyle(4,0,3);outtextxy(175,150,
"Using merge sort Algorithm");delay(2000);setcolor(BLACK);for(i=0;i<=30;i++)
{line(80,153+i,487,153+i);delay(10);}settextstyle(4,0,8);settextstyle(1,0,1);
setcolor(CYAN);outtextxy(200,55,"(Using MERGE sort)");setcolor(CYAN);r=0;
rectangle(147,100,433,130);setcolor(CYAN);for(i=0;i<=7;i++)
{line(147+r,100,147+r,130);r=r+35;delay(30);}cirline(0);setcolor(BLACK);
for(i=0;i<=150;i++){line(289+i,100,287+i,130);}setcolor(CYAN);
rectangle(300,100,446,130);r=0;for(i=0;i<=3;i++){line(300+r,100,300+r,130);
r=r+35;}setcolor(WHITE);settextstyle(1,0,1);outtextxy(310-7+13,102,"6");
outtextxy(350+3,102,"1");outtextxy(390-2,102,"8");outtextxy(415+13,102,"4");
delay(300);ecirline(0);setcolor(CYAN);line(287,100,287,130);delay(500);
cirline(-70);cirline(83);delay(500);setcolor(BLACK);for(i=0;i<=100;i++)
{line(215-i,100,215-i,130);}for(i=0;i<=100;i++){line(370+i,100,370+i,130);}
setcolor(CYAN);rectangle(130,100,200,130);rectangle(385,100,385+70,130);
line(130+35,100,130+35,130);line(420,100,420,130);setcolor(WHITE);
settextstyle(1,0,1);outtextxy(158-17,102,"5");outtextxy(195-17,102,"3");
outtextxy(390-2+17,102,"8");outtextxy(415+25,102,"4");ecirline(-70);
ecirline(83);line(217,100,217,130);line(370,100,370,130);delay(1000);
cirline(-122);delay(200);cirline(-35);delay(200);cirline(48);delay(200);
cirline(132);delay(200);setcolor(BLACK);for(i=0;i<=40;i++)
{line(165-i,100,165-i,130);}for(i=0;i<=40;i++){line(252-i,100,252-i,130);}
for(i=0;i<=40;i++){line(335-i,100,335-i,130);}for(i=0;i<=40;i++)
{line(419-i,100,419-i,130);}setcolor(CYAN);rectangle(120,100,155,130);
rectangle(210,100,245,130);rectangle(295,100,330,130);
rectangle(378,100,413,130);setcolor(WHITE);settextstyle(1,0,1);
outtextxy(135,102,"5");outtextxy(225,102,"7");outtextxy(310,102,"6");
outtextxy(393,102,"8");delay(800);ecirline(-122);ecirline(-35);ecirline(48);
ecirline(132);line(165,100,165,130);line(252,100,252,130);
line(335,100,335,130);line(419,100,419,130);delay(1000);
line(205,100,205,200);line(290,100,290,200);line(374,100,374,200);
setcolor(YELLOW);line(140,130,175,170);delay(300);line(183,130,144,170);
delay(300);setcolor(CYAN);rectangle(125,170,195,200);line(160,170,160,200);
delay(300);setcolor(WHITE);settextstyle(1,0,1);outtextxy(138,172,"3   5");
delay(800);setcolor(BLACK);line(140,130,175,170);line(183,130,144,170);
delay(300);setcolor(YELLOW);line(220,130,255,170);delay(300);
line(263,130,228,170);setcolor(CYAN);rectangle(210,170,280,200);delay(300);
line(245,170,245,200);setcolor(WHITE);outtextxy(227,172,"2  7");delay(800);
setcolor(BLACK);line(220,130,255,170);line(263,130,228,170);delay(300);
setcolor(YELLOW);line(310,130,345,170);delay(300);line(356,130,315,170);
setcolor(CYAN);rectangle(295,170,365,200);delay(300);line(330,170,330,200);
setcolor(WHITE);outtextxy(311,172,"1  6");delay(800);setcolor(BLACK);
line(310,130,345,170);line(356,130,315,170);delay(300);setcolor(YELLOW);
line(400,130,425,170);delay(300);line(435,130,400,170);setcolor(CYAN);
rectangle(380,170,450,200);delay(300);line(415,170,415,200);setcolor(WHITE);
outtextxy(397,172,"4  8");delay(800);setcolor(BLACK);line(400,130,425,170);
line(435,130,400,170);delay(300);setcolor(CYAN);rectangle(130,240,270,270);
r=0;for(i=0;i<=3;i++){line(130+r,240,130+r,270);r=r+35;}setcolor(CYAN);
line(290,100,290,270);setcolor(YELLOW);
line(233,201,140,240);delay(300);setcolor(WHITE);outtextxy(138,243,"2");
delay(300);setcolor(BLACK);line(233,201,140,240);delay(300);setcolor(YELLOW);
line(150,201,180,240);delay(300);setcolor(WHITE);outtextxy(175,243,"3");
delay(300);setcolor(BLACK);line(150,201,180,240);delay(300);setcolor(YELLOW);
line(180,201,220,240);delay(300);setcolor(WHITE);outtextxy(215,243,"5");
delay(300);setcolor(BLACK);line(180,201,220,240);delay(300);setcolor(YELLOW);
line(260,201,250,240);delay(300);setcolor(WHITE);outtextxy(250,243,"7");
delay(300);setcolor(BLACK);line(260,201,250,240);delay(500);setcolor(CYAN);
rectangle(295,240,435,270);r=35;for(i=0;i<=2;i++){line(290+r,240,290+r,270);
r=r+35;}setcolor(YELLOW);line(315,201,310,240);delay(300);setcolor(WHITE);
outtextxy(305,243,"1");delay(300);setcolor(BLACK);line(315,201,310,240);
delay(300);setcolor(YELLOW);line(395,201,340,240);delay(300);setcolor(WHITE);
outtextxy(340,243,"4");delay(300);setcolor(BLACK);line(395,201,340,240);
delay(300);setcolor(YELLOW);line(345,201,375,240);delay(300);setcolor(WHITE);
outtextxy(375,243,"6");delay(300);setcolor(BLACK);line(345,201,375,240);
delay(300);setcolor(YELLOW);line(435,201,415,240);delay(300);setcolor(WHITE);
outtextxy(415,243,"8");delay(300);setcolor(BLACK);line(435,201,415,240);
delay(300);setcolor(CYAN);rectangle(130,330,410,360);r=35;for(i=0;i<=6;i++)
{line(130+r,330,130+r,360);r=r+35;}delay(500);setcolor(YELLOW);line(310,270,145,328);
delay(300);setcolor(WHITE);outtextxy(140,333,"1");delay(300);setcolor(BLACK);
line(310,270,145,328);delay(300);setcolor(YELLOW);line(150,270,182,328);
delay(300);setcolor(WHITE);outtextxy(180,333,"2");delay(300);setcolor(BLACK);
line(150,270,182,328);delay(300);setcolor(YELLOW);line(180,270,212,328);
delay(300);setcolor(WHITE);outtextxy(215,333,"3");delay(300);setcolor(BLACK);
line(180,270,212,328);delay(300);setcolor(YELLOW);line(340,270,250,328);
delay(300);setcolor(WHITE);outtextxy(245,333,"4");delay(300);setcolor(BLACK);
line(340,270,250,328);delay(300);setcolor(YELLOW);line(215,270,285,328);
delay(300);setcolor(WHITE);outtextxy(280,333,"5");delay(300);setcolor(BLACK);
line(215,270,285,328);delay(300);setcolor(YELLOW);line(380,270,322,328);
delay(300);setcolor(WHITE);outtextxy(320,333,"6");delay(300);setcolor(BLACK);
line(380,270,322,328);delay(300);setcolor(YELLOW);line(250,270,358,328);
delay(300);setcolor(WHITE);outtextxy(356,333,"7");delay(300);setcolor(BLACK);
line(250,270,358,328);delay(300);setcolor(YELLOW);line(410,270,392,328);
delay(300);setcolor(WHITE);outtextxy(390,333,"8");delay(300);setcolor(BLACK);
line(410,270,392,328);delay(300);setcolor(BLACK);for(i=0;i<=250;i++)
{line(0,80+i,630,80+i);}rectangle(130,330,410,360);r=35;for(i=0;i<=6;i++)
{line(130+r,330,130+r,360);r=r+35;}settextstyle(4,0,5);setcolor(LIGHTRED);
outtextxy(20,100,"The sorted list is");settextstyle(1,0,1);serase2(0);
outtextxy(140,163,"1");delay(300);serase2(40);outtextxy(180,163,"2");
delay(300);serase2(75);outtextxy(215,163,"3");delay(300);serase2(105);
outtextxy(245,163,"4");delay(300);serase2(135);outtextxy(280,163,"5");
delay(300);serase2(170);outtextxy(320,163,"6");delay(300);serase2(205);
outtextxy(356,163,"7");delay(300);serase2(240);outtextxy(390,163,"8");
setcolor(BLACK);for(i=0;i<=237;i++){line(0,0+i,640,
0+i);line(0,474-i,640,474-i);delay(2);}
	       //** Insertion starts
setcolor(LIGHTRED);settextstyle(0.5,0,4);outtextxy(150,0,"INSERTION");
line(150,30,435,30);line(150,33,435,33);
sound(10*random(60));delay(75);nosound();setcolor(LIGHTGREEN);
outtextxy(150,0,"INSERTION");delay(50);sound(10*random(60));delay(75);
nosound();setcolor(BLUE);outtextxy(150,0,"INSERTION");delay(50);
sound(10*random(60));delay(75);nosound();setcolor(MAGENTA);outtextxy(150,0,
"INSERTION");delay(50);sound(10*random(60));delay(75);nosound();
setcolor(YELLOW);outtextxy(150,0,"INSERTION");delay(50);sound(10*random(60));
delay(75);nosound();setcolor(LIGHTBLUE);outtextxy(150,0,"INSERTION");delay(50);
sound(10*random(60));delay(75);nosound();setcolor(RED);outtextxy(150,0,
"INSERTION");delay(50);sound(10*random(60));delay(75);nosound();setcolor(CYAN);
outtextxy(150,0,"INSERTION");delay(50);sound(10*random(60));delay(75);
nosound();setcolor(LIGHTGREEN);outtextxy(150,0,"INSERTION");delay(50);
sound(10*random(60));delay(75);nosound();setcolor(BLUE);outtextxy(150,0,
"INSERTION");delay(50);sound(10*random(60));delay(75);nosound();
setcolor(MAGENTA);outtextxy(150,0,"INSERTION");delay(50);sound(10*random(60));
delay(75);nosound();setcolor(YELLOW);outtextxy(150,0,"INSERTION");delay(50);
sound(10*random(60));delay(75);nosound();setcolor(LIGHTBLUE);outtextxy(150,0,
"INSERTION");delay(50);sound(10*random(60));delay(75);nosound();setcolor(LIGHTRED);
outtextxy(150,0,"INSERTION");delay(50);sound(10*random(60));delay(75);
nosound();setcolor(LIGHTGREEN);settextstyle(10,0,2);delay(300);
outtextxy(0,30,"Elements:");delay(300);setcolor(GREEN);settextstyle(1,0,2);
outtextxy(200,50,"1  2  3  5  7  8");setcolor(LIGHTGREEN);settextstyle(10,0,2);
delay(1000);outtextxy(0,80,"Insert :");setcolor(LIGHTRED);settextstyle(1,0,2);
delay(300);outtextxy(130,100,"4");setcolor(LIGHTGREEN);settextstyle(10,0,2);
delay(800);outtextxy(400,80,"Location :");setcolor(LIGHTRED);
settextstyle(1,0,2);delay(300);outtextxy(560,100,"4");setcolor(GREEN);
settextstyle(1,0,2);delay(800);outtextxy(200,160,"1  2  3  5  7  8");
delay(500);setcolor(LIGHTBLUE);arc(386,163,0,180,12);settextstyle(0,1,1);
outtextxy(402,155,"<");delay(500);erase1(0,0);outtextxy(395,160,"8");
delay(500);setcolor(BLACK);for(i=0;i<=30;i++){line(370,165-i,400,165-i);}
setcolor(LIGHTBLUE);arc(356,163,0,180,12);settextstyle(0,1,1);
outtextxy(372,155,"<");delay(500);erase1(30,0);outtextxy(365,160,"7");
delay(500);setcolor(BLACK);for(i=0;i<=30;i++){line(340,165-i,370,165-i);}
setcolor(LIGHTBLUE);arc(320,163,0,180,12);settextstyle(0,1,1);
outtextxy(336,155,"<");delay(500);erase1(60,0);outtextxy(335,160,"5");
delay(500);setcolor(BLACK);for(i=0;i<=30;i++){line(305,165-i,370,165-i);}
setcolor(LIGHTRED);outtextxy(305,160,"4");delay(900);setcolor(CYAN);
settextstyle(8,0,3);outtextxy(140,200,"Thus 4 has been inserted.");delay(1000);
settextstyle(1,0,2);setcolor(GREEN);outtextxy(305,160,"4");delay(800);
setcolor(BLACK);for(i=0;i<=30;i++){line(140,240-i,490,240-i);delay(10);}
delay(500);setcolor(CYAN);outtextxy(220,200,"Now insert 6.");delay(800);
setcolor(BLACK);for(i=0;i<=30;i++){line(140,230-i,490,230-i);delay(10);}
delay(100);for(i=0;i<=30;i++){line(130,125-i,145,125-i);}delay(100);
for(i=0;i<=30;i++){line(560,125-i,575,125-i);}delay(800);setcolor(LIGHTRED);
outtextxy(130,100,"6");delay(500);outtextxy(560,100,"6");delay(1000);
setcolor(LIGHTBLUE);arc(416,163,0,180,12);settextstyle(0,1,1);
outtextxy(432,155,"<");delay(500);erase1(-30,0);outtextxy(425,160,"8");
delay(500);setcolor(BLACK);for(i=0;i<=30;i++){line(400,165-i,430,165-i);}
delay(500);setcolor(LIGHTBLUE);arc(386,163,0,180,12);settextstyle(0,1,1);
outtextxy(402,155,"<");delay(500);erase1(0,0);outtextxy(395,160,"7");
delay(500);setcolor(BLACK);for(i=0;i<=30;i++){line(370,165-i,400,165-i);}
setcolor(LIGHTRED);outtextxy(365,160,"6");delay(800);setcolor(CYAN);
settextstyle(8,0,3);outtextxy(140,200,"Thus 6 has been inserted.");
settextstyle(1,0,2);setcolor(GREEN);outtextxy(365,160,"6");delay(1000);
setcolor(BLACK);for(i=0;i<=30;i++){line(140,240-i,490,240-i);delay(10);}
for(i=0;i<=237;i++){line(0,0+i,640,0+i);line(0,474-i,640,474-i);delay(2);}

	   //Deletion starts
setcolor(LIGHTRED);settextstyle(0.5,0,4);outtextxy(160,0,"DELETION");
line(160,30,410,30);line(160,33,410,33);
setcolor(LIGHTGREEN);settextstyle(10,0,2);delay(300);
outtextxy(0,30,"Elements:");delay(300);setcolor(GREEN);settextstyle(1,0,2);
outtextxy(170,50,"1  2  3  4  5  6  7  8");setcolor(LIGHTGREEN);settextstyle(10,0,2);
delay(1000);
outtextxy(0,80,"Location to Delete :");setcolor(LIGHTRED);settextstyle(1,0,2);
delay(300);outtextxy(330,100,"4");setcolor(GREEN);
settextstyle(1,0,2);delay(800);
outtextxy(170,160,"1  2  3  4  5  6  7  8");erase1(90,0);delay(500);
setcolor(LIGHTBLUE);arc(295,183,180,0,12);settextstyle(0,1,1);
outtextxy(288,180,">");delay(500);setcolor(GREEN);settextstyle(1,0,2);
erase1(60,0);outtextxy(280,160,"5");delay(500);
setcolor(BLACK);for(i=0;i<=14;i++){line(279,195-i,309,195-i);}
setcolor(LIGHTBLUE);arc(330,183,180,0,12);settextstyle(0,1,1);
outtextxy(323,180,">");delay(500);
erase1(30,0);outtextxy(310,160,"6");
setcolor(BLACK);for(i=0;i<=14;i++){line(309,195-i,349,195-i);}

delay(500);
setcolor(LIGHTBLUE);arc(330,183,180,0,12);settextstyle(0,1,1);
outtextxy(323,180,">");
setcolor(BLACK);for(i=0;i<=14;i++){line(315,195-i,345,195-i);}
setcolor(LIGHTBLUE);arc(358,183,180,0,12);settextstyle(0,1,1);
settextstyle(0,1,1);outtextxy(352,180,">");erase1(-4,0);
outtextxy(340,160,"7");
setcolor(BLACK);for(i=0;i<=14;i++){line(341,195-i,371,195-i);}
setcolor(LIGHTBLUE);arc(390,183,180,0,12);settextstyle(0,1,1);
outtextxy(383,180,">");erase1(-38,0);outtextxy(370,160,"8");
delay(500);
setcolor(BLACK);for(i=0;i<=14;i++){line(372,195-i,402,195-i);}
delay(500);setcolor(CYAN);
settextstyle(8,0,3);outtextxy(140,200,"Thus 4 has been deleted.");
delay(1500);
setcolor(BLACK);for(i=0;i<=30;i++){line(140,240-i,490,240-i);delay(10);}
for(i=0;i<=237;i++){line(0,0+i,640,0+i);line(0,474-i,640,474-i);delay(2);}
setbkcolor(RED);setcolor(WHITE);settextstyle(7,0,5);
outtextxy(180,150,"Thank you.");outtextxy(50,200,"Press any key to exit.");


}

numbers(int d){setcolor(WHITE);settextstyle(1,0,1);
outtextxy(108,72+d,"79");outtextxy(143,72+d,"91");outtextxy(173,72+d,"36");
outtextxy(210,72+d,"14");outtextxy(248,72+d,"23");outtextxy(282,72+d,"41");
outtextxy(318,72+d,"38");outtextxy(353,72+d,"84");outtextxy(385,72+d,"27");
outtextxy(422,72+d,"16");outtextxy(455,72+d,"43");outtextxy(493,72+d,"56");
return(d);}t14(int e){settextstyle(1,0,1);setcolor(LIGHTCYAN);
outtextxy(108,132+e,"14");return(e);}t16(int f){settextstyle(1,0,1);
setcolor(LIGHTCYAN);outtextxy(143,132+f,"16");return(f);}t23(int g)
{settextstyle(1,0,1);setcolor(LIGHTCYAN);outtextxy(173,132+g,"23");return(g);}
t27(int h){settextstyle(1,0,1);setcolor(LIGHTCYAN);outtextxy(210,132+h,"27");
return(h);}t36(int j){settextstyle(1,0,1);setcolor(LIGHTCYAN);
outtextxy(248,132+j,"36");return(j);}t38(int j1){settextstyle(1,0,1);
setcolor(LIGHTCYAN);outtextxy(282,132+j1,"38");return(j1);}t41(int l)
{settextstyle(1,0,1);setcolor(LIGHTCYAN);outtextxy(318,132+l,"41");
return(l);}t43(int m){settextstyle(1,0,1);setcolor(LIGHTCYAN);
outtextxy(353,132+m,"43");return(m);}t56(int n){settextstyle(1,0,1);
setcolor(LIGHTCYAN);outtextxy(385,132+n,"56");return(n);}t79(int o)
{settextstyle(1,0,1);setcolor(LIGHTCYAN);outtextxy(422,132+o,"79");return(o);}
erase(int z1,int z2){int i;setcolor(BLACK);for(i=0;i<24;i++)
{line(108+z1+i,134+z2,108+z1+i,150+z2);}return(z1,z2);}ferase(int x1,int x2)
{int i;setcolor(BLACK);for(i=0;i<24;i++){line(108+x1+i,134+x2,108+x1+i,150+x2);
delay(8);}return(x1,x2);}berase(int y1,int y2){int i;setcolor(BLACK);
for(i=0;i<24;i++){line(165+y1-i,134+y2,165+y1-i,150+y2);delay(8);}
return(y1,y2);}serase(int q){int p;setcolor(BLACK);for(p=0;p<20;p++)
{line(107+q,452-p,130+q,452-p);delay(15);}setcolor(LIGHTCYAN);delay(80);
return(q);}
numbers1(int d1){setcolor(WHITE);settextstyle(1,0,1);
outtextxy(170,72+d1,"36");delay(50);outtextxy(210,72+d1,"14"); delay(50);
outtextxy(250,72+d1,"23");delay(50);outtextxy(290,72+d1,"41"); delay(50);
outtextxy(330,72+d1,"38");delay(50);outtextxy(370,72+d1,"11"); delay(50);
return(d1);}lines(int a1){line(165+a1,128,165+a1,320);return(a1);}
ellip(int b1,int c1){setcolor(YELLOW);ellipse(200+b1,143+c1,0,360,45,15);
return(b1,c1);}bellip(int b2,int c2){setcolor(BLACK);ellipse(200+b2,143+c2,
0,360,45,15);return(b2,c2);}recline(){setcolor(CYAN);line(165,128,395,128);
return(5);}serase1(int q1){int p1;setcolor(BLACK);for(p1=0;p1<20;p1++)
{line(170+q1,302-p1,193+q1,302-p1);delay(15);}setcolor(LIGHTCYAN);delay(80);
return(q1);}
cirline(int p1){int i;setcolor(YELLOW);for(i=0;i<=50;i++){circle(287+p1,90+i,
1);sound(120*random(80));delay(8);nosound();}return(p1);}
ecirline(int q1){int i;setcolor(BLACK);for(i=0;i<=50;i++){circle(287+q1,90+i,
1);}setcolor(CYAN);return(q1);}serase2(int q3){int p3;setcolor(BLACK);
for(p3=0;p3<20;p3++){line(140+q3,355-p3,160+q3,355-p3);delay(15);}
setcolor(CYAN);delay(80);return(q3);}
erase1(int y2,int z2){int i;setcolor(BLACK);for(i=0;i<=30;i++)
{line(350-y2+i,165+z2,350-y2+i,180+z2);delay(10);}setcolor(GREEN);
settextstyle(1,0,2);return(y2,z2);}
