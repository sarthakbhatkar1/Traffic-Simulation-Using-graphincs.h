#include<graphics.h>
#include<stdio.h>


void DrawLines();
void z_cross_right();
void z_cross_left();
void z_cross_top();
void z_cross_bottom();
void rect1(int );
void rect2(int );
void rect3(int );
void rect4(int );
void tra(int ,int ,int ,int );
void CAR1(int );
void CAR2();
void work1();
void work2();
void work3();
  int x,y,i,j,k,a;

int main()
{
   initwindow(1500,800);
   x=getmaxx();
   y=getmaxy();
   k=0;
   a=0;

   setcolor(YELLOW);
   settextstyle(COMPLEX_FONT, HORIZ_DIR, 7);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(x/2,y/2-20,"...TRAFFIC SIMULATION SYSTEM...");
   //delay(2000);
   //cleardevice();
   setcolor(WHITE);
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
   outtextxy(x/2+25,y/2+30,"PRESS ANY KEY TO START :");
   getch();
   cleardevice();
   DrawLines();
         work1();
         work2();
   do
   {
      work1();
      a++;
   }while(a<25);

    getch();
    closegraph();
}
void DrawLines()
{

    setcolor(WHITE);
    line(0,y/2-150,x/2-150,y/2-150); // || to x-axis
    line(0,y/2+150,x/2-150,y/2+150); // || to x-axis
    line(x/2+150,y/2-150,x,y/2-150); // || to x-axis
    line(x/2+150,y/2+150,x,y/2+150); // || to x-axis

    line(x/2-150,0,x/2-150,y/2-150); // || to y-axis
    line(x/2+150,0,x/2+150,y/2-150); // || to y-axis
    line(x/2-150,y/2+150,x/2-150,y); // || to y-axis
    line(x/2+150,y/2+150,x/2+150,y); // || to y-axis

    rectangle(0,y/2-3,x/2-180,y/2+3);
    setfillstyle(SOLID_FILL,WHITE); // LEFT
    floodfill(x/4,y/2,15);

    rectangle(x/2+180,y/2-3,x,y/2+3); //RIGHT
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(3*x/4,y/2,15);

    rectangle(x/2-3,0,x/2+3,y/2-180); // TOP
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(x/2,y/4,15);

    rectangle(x/2-3,y/2+180,x/2+3,y); // BOTTOM
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(x/2,3*y/4,15);

    setfillstyle(SOLID_FILL,DARKGRAY); // ROAD COLOR
    floodfill(x/2,y/2,15);

    setlinestyle(DASHED_LINE,0,1);
    line(0,y/2-75,x/2-180,y/2-75);
    line(0,y/2+75,x/2-180,y/2+75);
    line(x/2+180,y/2-75,x,y/2-75);
    line(x/2+180,y/2+75,x,y/2+75);

    line(x/2-75,0,x/2-75,y/2-180);
    line(x/2+75,0,x/2+75,y/2-180);
    line(x/2-75,y/2+180,x/2-75,y);
    line(x/2+75,y/2+180,x/2+75,y);

    setfillstyle(SOLID_FILL,LIGHTCYAN); //TOP LEFT
    floodfill(x/8,y/8,15);
    setfillstyle(SOLID_FILL,LIGHTCYAN); //TOP RIGHT
    floodfill(x-5,4,15);
    setfillstyle(SOLID_FILL,LIGHTCYAN); //BOTTOM LEFT
    floodfill(5,y-5,15);
    setfillstyle(SOLID_FILL,LIGHTCYAN); //BOTTOM RIGHT
    floodfill(x-5,y-5,15);

    z_cross_left();
    z_cross_right();
    z_cross_top();
    z_cross_bottom();

    //  TOP RIGHT
    rectangle(x/2+170,y/2-310,x/2+220,y/2-170);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x/2+172,y/2-172,15);
    circle(x/2+195,y/2-285,20);
    setfillstyle(HATCH_FILL,RED);
    floodfill(x/2+195,y/2-285,15);
    circle(x/2+195,y/2-240,20);
    setfillstyle(HATCH_FILL,YELLOW);
    floodfill(x/2+195,y/2-240,15);
    circle(x/2+195,y/2-195,20);
    setfillstyle(HATCH_FILL,GREEN);
    floodfill(x/2+195,y/2-195,15);

    // BOTTOM LEFT
    rectangle(x/2+310,y/2+170,x/2+170,y/2+220);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x/2+308,y/2+172,15);

    circle(x/2+285,y/2+195,20);
    setfillstyle(HATCH_FILL,RED);
    floodfill(x/2+285,y/2+195,15);

    circle(x/2+240,y/2+195,20);
    setfillstyle(HATCH_FILL,YELLOW);
    floodfill(x/2+240,y/2+195,15);

    circle(x/2+195,y/2+195,20);
    setfillstyle(HATCH_FILL,GREEN);
    floodfill(x/2+195,y/2+195,15);

    // BOTTOM LEFT
    rectangle(x/2-220,y/2+170,x/2-170,y/2+310);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x/2-218,y/2+172,15);
    circle(x/2-195,y/2+285,20);
    setfillstyle(HATCH_FILL,RED);
    floodfill(x/2-195,y/2+285,15);
    circle(x/2-195,y/2+240,20);
    setfillstyle(HATCH_FILL,YELLOW);
    floodfill(x/2-195,y/2+240,15);
    circle(x/2-195,y/2+195,20);
    setfillstyle(HATCH_FILL,GREEN);
    floodfill(x/2-195,y/2+195,15);

    // TOP LEFT
    rectangle(x/2-310,y/2-220,x/2-170,y/2-170);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x/2-308,y/2-172,15);

    circle(x/2-285,y/2-195,20);
    setfillstyle(HATCH_FILL,RED);
    floodfill(x/2-285,y/2-195,15);

    circle(x/2-240,y/2-195,20);
    setfillstyle(HATCH_FILL,YELLOW);
    floodfill(x/2-240,y/2-195,15);

    circle(x/2-195,y/2-195,20);
    setfillstyle(HATCH_FILL,GREEN);
    floodfill(x/2-195,y/2-195,15);
}



void rect1(int a)
{
    switch(a)
    {
      case 1:
          rectangle(x/2+170,y/2-310,x/2+220,y/2-170);
          setfillstyle(SOLID_FILL,BLACK);
          floodfill(x/2+172,y/2-172,15);
          circle(x/2+195,y/2-285,20);
          setfillstyle(SOLID_FILL,RED);
          floodfill(x/2+195,y/2-285,15);
          break;

      case 2:
          rectangle(x/2+170,y/2-310,x/2+220,y/2-170);
          setfillstyle(SOLID_FILL,BLACK);
          floodfill(x/2+172,y/2-172,15);
          circle(x/2+195,y/2-240,20);
          setfillstyle(SOLID_FILL,YELLOW);
          floodfill(x/2+195,y/2-240,15);
          break;

      case 3:
          rectangle(x/2+170,y/2-310,x/2+220,y/2-170);
          setfillstyle(SOLID_FILL,BLACK);
          floodfill(x/2+172,y/2-172,15);
          circle(x/2+195,y/2-195,20);
          setfillstyle(SOLID_FILL,GREEN);
          floodfill(x/2+195,y/2-195,15);
          break;

      default :
          printf("A");
    }

}

void rect2(int b)
{
    switch(b)
    {
     case 1:

          rectangle(x/2+310,y/2+170,x/2+170,y/2+220);
          setfillstyle(SOLID_FILL,BLACK);
          floodfill(x/2+308,y/2+172,15);
          circle(x/2+285,y/2+195,20);
          setfillstyle(SOLID_FILL,RED);
          floodfill(x/2+285,y/2+195,15);
          break;

     case 2:
          rectangle(x/2+310,y/2+170,x/2+170,y/2+220);
          setfillstyle(SOLID_FILL,BLACK);
          floodfill(x/2+308,y/2+172,15);
          circle(x/2+240,y/2+195,20);
          setfillstyle(SOLID_FILL,YELLOW);
          floodfill(x/2+240,y/2+195,15);
          break;

     case 3:
          rectangle(x/2+310,y/2+170,x/2+170,y/2+220);
          setfillstyle(SOLID_FILL,BLACK);
          floodfill(x/2+308,y/2+172,15);
          circle(x/2+195,y/2+195,20);
          setfillstyle(SOLID_FILL,GREEN);
          floodfill(x/2+195,y/2+195,15);
          break;

     default :
        printf("B");
    }
}

void rect3(int c)
{
    switch(c)
    {
      case 1:
             rectangle(x/2-220,y/2+170,x/2-170,y/2+310);
             setfillstyle(SOLID_FILL,BLACK);
             floodfill(x/2-218,y/2+172,15);
             circle(x/2-195,y/2+285,20);
             setfillstyle(SOLID_FILL,RED);
             floodfill(x/2-195,y/2+285,15);
             break;

      case 2:
             rectangle(x/2-220,y/2+170,x/2-170,y/2+310);
             setfillstyle(SOLID_FILL,BLACK);
             floodfill(x/2-218,y/2+172,15);
             circle(x/2-195,y/2+240,20);
             setfillstyle(SOLID_FILL,YELLOW);
             floodfill(x/2-195,y/2+240,15);
             break;

      case 3:
             rectangle(x/2-220,y/2+170,x/2-170,y/2+310);
             setfillstyle(SOLID_FILL,BLACK);
             floodfill(x/2-218,y/2+172,15);
             circle(x/2-195,y/2+195,20);
             setfillstyle(SOLID_FILL,GREEN);
             floodfill(x/2-195,y/2+195,15);
             break;
      default :
             printf("C");

    }
}
void rect4(int d)
{
    switch(d)
    {
       case 1:
           rectangle(x/2-310,y/2-220,x/2-170,y/2-170);
           setfillstyle(SOLID_FILL,BLACK);
           floodfill(x/2-308,y/2-172,15);
           circle(x/2-285,y/2-195,20);
           setfillstyle(SOLID_FILL,RED);
           floodfill(x/2-285,y/2-195,15);
           break;

       case 2:
           rectangle(x/2-310,y/2-220,x/2-170,y/2-170);
           setfillstyle(SOLID_FILL,BLACK);
           floodfill(x/2-308,y/2-172,15);
           circle(x/2-240,y/2-195,20);
           setfillstyle(SOLID_FILL,YELLOW);
           floodfill(x/2-240,y/2-195,15);
           break;

       case 3:
           rectangle(x/2-310,y/2-220,x/2-170,y/2-170);
           setfillstyle(SOLID_FILL,BLACK);
           floodfill(x/2-308,y/2-172,15);
           circle(x/2-195,y/2-195,20);
           setfillstyle(SOLID_FILL,GREEN);
           floodfill(x/2-195,y/2-195,15);
           break;

       default :
           printf("D");
    }
}

void z_cross_left()
{
    // ZEBRA CROSSING :-   //TOP LEFT
    setlinestyle(0,1,1);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(x/2-180,y/2-148,x/2-150,y/2-140);
    floodfill(x/2-165,y/2-144,15);
    rectangle(x/2-180,y/2-130,x/2-150,y/2-122);
    floodfill(x/2-165,y/2-126,15);
    rectangle(x/2-180,y/2-112,x/2-150,y/2-104);
    floodfill(x/2-165,y/2-108,15);
    rectangle(x/2-180,y/2-94,x/2-150,y/2-86);
    floodfill(x/2-165,y/2-90,15);
    rectangle(x/2-180,y/2-76,x/2-150,y/2-68);
    floodfill(x/2-165,y/2-72,15);
    rectangle(x/2-180,y/2-58,x/2-150,y/2-50);
    floodfill(x/2-165,y/2-54,15);
    rectangle(x/2-180,y/2-40,x/2-150,y/2-32);
    floodfill(x/2-165,y/2-36,15);
    rectangle(x/2-180,y/2-22,x/2-150,y/2-14);
    floodfill(x/2-165,y/2-18,15);
  /*  rectangle(x/2-180,y/2-4,x/2-150,y/2+4);  // MIDDLE
    floodfill(x/2-165,y/2-0,15);    */
    rectangle(x/2-180,y/2+14,x/2-150,y/2+22);
    floodfill(x/2-165,y/2+18,15);
    rectangle(x/2-180,y/2+32,x/2-150,y/2+40);
    floodfill(x/2-165,y/2+36,15);
    rectangle(x/2-180,y/2+50,x/2-150,y/2+58);
    floodfill(x/2-165,y/2+54,15);
    rectangle(x/2-180,y/2+68,x/2-150,y/2+76);
    floodfill(x/2-165,y/2+72,15);
    rectangle(x/2-180,y/2+86,x/2-150,y/2+94);
    floodfill(x/2-165,y/2+90,15);
    rectangle(x/2-180,y/2+104,x/2-150,y/2+112);
    floodfill(x/2-165,y/2+108,15);
    rectangle(x/2-180,y/2+122,x/2-150,y/2+130);
    floodfill(x/2-165,y/2+126,15);
    rectangle(x/2-180,y/2+138,x/2-150,y/2+146);
    floodfill(x/2-165,y/2+142,15);


}

void z_cross_right()
{

    // ZEBRA CROSSING :-   //TOP RIGHT
    setlinestyle(0,1,1);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(x/2+180,y/2-148,x/2+150,y/2-140);
    floodfill(x/2+165,y/2-144,15);
    rectangle(x/2+180,y/2-130,x/2+150,y/2-122);
    floodfill(x/2+165,y/2-126,15);
    rectangle(x/2+180,y/2-112,x/2+150,y/2-104);
    floodfill(x/2+165,y/2-108,15);
    rectangle(x/2+180,y/2-94,x/2+150,y/2-86);
    floodfill(x/2+165,y/2-90,15);
    rectangle(x/2+180,y/2-76,x/2+150,y/2-68);
    floodfill(x/2+165,y/2-72,15);
    rectangle(x/2+180,y/2-58,x/2+150,y/2-50);
    floodfill(x/2+165,y/2-54,15);
    rectangle(x/2+180,y/2-40,x/2+150,y/2-32);
    floodfill(x/2+165,y/2-36,15);
    rectangle(x/2+180,y/2-22,x/2+150,y/2-14);
    floodfill(x/2+165,y/2-18,15);
  /*  rectangle(x/2+180,y/2-4,x/2+150,y/2+4);  // MIDDLE
    floodfill(x/2+165,y/2-0,15);    */
    rectangle(x/2+180,y/2+14,x/2+150,y/2+22);
    floodfill(x/2+165,y/2+18,15);
    rectangle(x/2+180,y/2+32,x/2+150,y/2+40);
    floodfill(x/2+165,y/2+36,15);
    rectangle(x/2+180,y/2+50,x/2+150,y/2+58);
    floodfill(x/2+165,y/2+54,15);
    rectangle(x/2+180,y/2+68,x/2+150,y/2+76);
    floodfill(x/2+165,y/2+72,15);
    rectangle(x/2+180,y/2+86,x/2+150,y/2+94);
    floodfill(x/2+165,y/2+90,15);
    rectangle(x/2+180,y/2+104,x/2+150,y/2+112);
    floodfill(x/2+165,y/2+108,15);
    rectangle(x/2+180,y/2+122,x/2+150,y/2+130);
    floodfill(x/2+165,y/2+126,15);
    rectangle(x/2+180,y/2+138,x/2+150,y/2+146);
    floodfill(x/2+165,y/2+142,15);
}
void z_cross_top()
{
    // ZEBRA CROSSING :-   //TOP RIGHT

     setlinestyle(0,1,1);
     setcolor(WHITE);
     setfillstyle(SOLID_FILL,WHITE);
     rectangle(x/2-148,y/2-180,x/2-140,y/2-150);
     floodfill(x/2-144,y/2-165,15);

     rectangle(x/2-130,y/2-180,x/2-122,y/2-150);
     floodfill(x/2-126,y/2-165,15);

     rectangle(x/2-112,y/2-180,x/2-104,y/2-150);
     floodfill(x/2-108,y/2-165,15);

     rectangle(x/2-94,y/2-180,x/2-86,y/2-150);
     floodfill(x/2-90,y/2-165,15);

     rectangle(x/2-76,y/2-180,x/2-68,y/2-150);
     floodfill(x/2-72,y/2-165,15);

     rectangle(x/2-58,y/2-180,x/2-50,y/2-150);
     floodfill(x/2-54,y/2-165,15);

     rectangle(x/2-40,y/2-180,x/2-32,y/2-150);
     floodfill(x/2-36,y/2-165,15);

     rectangle(x/2-22,y/2-180,x/2-14,y/2-150);
     floodfill(x/2-18,y/2-165,15);

  /*   rectangle(x/2-4,y/2-180,x/2+4,y/2-150);
     floodfill(x/2-0,y/2-165,15); */

     rectangle(x/2+14,y/2-180,x/2+22,y/2-150);
     floodfill(x/2+18,y/2-165,15);

     rectangle(x/2+32,y/2-180,x/2+40,y/2-150);
     floodfill(x/2+36,y/2-165,15);

     rectangle(x/2+50,y/2-180,x/2+58,y/2-150);
     floodfill(x/2+54,y/2-165,15);

     rectangle(x/2+68,y/2-180,x/2+76,y/2-150);
     floodfill(x/2+72,y/2-165,15);

     rectangle(x/2+86,y/2-180,x/2+94,y/2-150);
     floodfill(x/2+90,y/2-165,15);

     rectangle(x/2+104,y/2-180,x/2+112,y/2-150);
     floodfill(x/2+108,y/2-165,15);

     rectangle(x/2+122,y/2-180,x/2+130,y/2-150);
     floodfill(x/2+126,y/2-165,15);

     rectangle(x/2+140,y/2-180,x/2+148,y/2-150);
     floodfill(x/2+144,y/2-165,15);

}

 void z_cross_bottom()
  {

     // ZEBRA CROSSING :-   //TOP RIGHT

     setlinestyle(0,1,1);
     setcolor(WHITE);
     setfillstyle(SOLID_FILL,WHITE);
     rectangle(x/2-148,y/2+180,x/2-140,y/2+150);
     floodfill(x/2-144,y/2+165,15);
     rectangle(x/2-130,y/2+180,x/2-122,y/2+150);
     floodfill(x/2-126,y/2+165,15);
     rectangle(x/2-112,y/2+180,x/2-104,y/2+150);
     floodfill(x/2-108,y/2+165,15);
     rectangle(x/2-94,y/2+180,x/2-86,y/2+150);
     floodfill(x/2-90,y/2+165,15);
     rectangle(x/2-76,y/2+180,x/2-68,y/2+150);
     floodfill(x/2-72,y/2+165,15);
     rectangle(x/2-58,y/2+180,x/2-50,y/2+150);
     floodfill(x/2-54,y/2+165,15);
     rectangle(x/2-40,y/2+180,x/2-32,y/2+150);
     floodfill(x/2-36,y/2+165,15);
     rectangle(x/2-22,y/2+180,x/2-14,y/2+150);
     floodfill(x/2-18,y/2+165,15);
  /*   rectangle(x/2-4,y/2-180,x/2+4,y/2-150);
     floodfill(x/2-0,y/2-165,15); */
     rectangle(x/2+14,y/2+180,x/2+22,y/2+150);
     floodfill(x/2+18,y/2+165,15);
     rectangle(x/2+32,y/2+180,x/2+40,y/2+150);
     floodfill(x/2+36,y/2+165,15);
     rectangle(x/2+50,y/2+180,x/2+58,y/2+150);
     floodfill(x/2+54,y/2+165,15);
     rectangle(x/2+68,y/2+180,x/2+76,y/2+150);
     floodfill(x/2+72,y/2+165,15);
     rectangle(x/2+86,y/2+180,x/2+94,y/2+150);
     floodfill(x/2+90,y/2+165,15);
     rectangle(x/2+104,y/2+180,x/2+112,y/2+150);
     floodfill(x/2+108,y/2+165,15);
     rectangle(x/2+122,y/2+180,x/2+130,y/2+150);
     floodfill(x/2+126,y/2+165,15);
     rectangle(x/2+140,y/2+180,x/2+148,y/2+150);
     floodfill(x/2+144,y/2+165,15);

  }

void tra(int a,int b,int c,int d)
{
    DrawLines();
   rect1(a);
   rect2(b);
   rect3(c);
   rect4(d);

}

  void CAR1(int a)
  {
      j=j+a;

       for(i=k;i<j;i++)
   {

   // DrawLines();

   setcolor(BLACK);

        line(50+i,y/2-40,100+i,y/2-40);
        line(100+i,y/2-40,110+i,y/2-30);
        line(110+i,y/2-30,120+i,y/2-30);
        line(120+i,y/2-30,120+i,y/2-20);
        line(120+i,y/2-20,110+i,y/2-20);
        arc(103+i,y/2-20,0,180,7);
        line(96+i,y/2-20,54+i,y/2-20);
        // For left wheel of car
        circle(103+i,y/2-20,6);
        circle(103+i,y/2-20,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(103+i,y/2-20,BLACK);
        // For right wheel of car
        circle(47+i,y/2-20,6);
        circle(47+i,y/2-20,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(47+i,y/2-20,BLACK);
        line(50+i,y/2-40,40+i,y/2-30);
        line(40+i,y/2-30,30+i,y/2-30);
        line(30+i,y/2-30,30+i,y/2-20);
        line(30+i,y/2-20,40+i,y/2-20);
        arc(47+i,y/2-20,0,180,7);
        line(54+i,y/2-20,96+i,y/2-20);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(35+i,y/2-25,BLACK);

        delay(100);

        setcolor(DARKGRAY);
        line(50+i,y/2-40,100+i,y/2-40);
        line(100+i,y/2-40,110+i,y/2-30);
        line(110+i,y/2-30,120+i,y/2-30);
        line(120+i,y/2-30,120+i,y/2-20);
        line(120+i,y/2-20,110+i,y/2-20);
        arc(103+i,y/2-20,0,180,7);
        line(96+i,y/2-20,54+i,y/2-20);
        // For left wheel of car
        circle(103+i,y/2-20,6);
        circle(103+i,y/2-20,3);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(103+i,y/2-20,15);
        // For right wheel of car
        circle(47+i,y/2-20,6);
        circle(47+i,y/2-20,3);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(47+i,y/2-20,15);
        line(50+i,y/2-40,40+i,y/2-30);
        line(40+i,y/2-30,30+i,y/2-30);
        line(30+i,y/2-30,30+i,y/2-20);
        line(30+i,y/2-20,40+i,y/2-20);
        arc(47+i,y/2-20,0,180,7);
        line(54+i,y/2-20,96+i,y/2-20);
        setfillstyle(SOLID_FILL,DARKGRAY);
        floodfill(35+i,y/2-25,15);

        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(x/2-180,y/2-40,x/2-150,y/2-32);
        floodfill(x/2-165,y/2-36,15);
        rectangle(x/2-180,y/2-22,x/2-150,y/2-14);
        floodfill(x/2-165,y/2-18,15);
        rectangle(x/2+180,y/2-40,x/2+150,y/2-32);
        floodfill(x/2+165,y/2-36,15);
        rectangle(x/2+180,y/2-22,x/2+150,y/2-14);
        floodfill(x/2+165,y/2-18,15);


    }

        k=j;
  }
void CAR2()
{
   // DrawLines();

    setcolor(BLACK);

        line(50+i,y/2-40,100+i,y/2-40);
        line(100+i,y/2-40,110+i,y/2-30);
        line(110+i,y/2-30,120+i,y/2-30);
        line(120+i,y/2-30,120+i,y/2-20);
        line(120+i,y/2-20,110+i,y/2-20);
        arc(103+i,y/2-20,0,180,7);
        line(96+i,y/2-20,54+i,y/2-20);
        // For left wheel of car
        circle(103+i,y/2-20,6);
        circle(103+i,y/2-20,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(103+i,y/2-20,BLACK);
        // For right wheel of car
        circle(47+i,y/2-20,6);
        circle(47+i,y/2-20,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(47+i,y/2-20,BLACK);
        line(50+i,y/2-40,40+i,y/2-30);
        line(40+i,y/2-30,30+i,y/2-30);
        line(30+i,y/2-30,30+i,y/2-20);
        line(30+i,y/2-20,40+i,y/2-20);
        arc(47+i,y/2-20,0,180,7);
        line(54+i,y/2-20,96+i,y/2-20);
        setfillstyle(SOLID_FILL,BLUE);
        floodfill(35+i,y/2-25,BLACK);
}
void work1()
{
    tra(3,1,1,1);
    CAR1(150);
    cleardevice();
    tra(2,1,1,1);
    CAR1(50);
    cleardevice();
    tra(1,3,1,1);
    CAR1(150);
    cleardevice();
    tra(1,2,1,1);
    CAR1(50);
    cleardevice();
    tra(1,1,3,1);
    CAR1(50);
    cleardevice();
    tra(1,1,2,1);
    CAR2();
    delay(2000);
    cleardevice();
    tra(1,1,1,3);
    CAR2();
    delay(5000);
    cleardevice();
    tra(1,1,1,2);
    CAR2();
    delay(5000);
    cleardevice();
}

void work2()
{
    tra(3,1,1,1);
    CAR2();
    delay(5000);
    cleardevice();
    tra(2,1,1,1);
    CAR2();
    delay(2000);
    cleardevice();
    tra(1,3,1,1);
    CAR1(360);
    cleardevice();
    tra(1,2,1,1);
    CAR1(50);
    cleardevice();
    tra(1,1,3,1);
    CAR1(150);
    cleardevice();
    tra(1,1,2,1);
    CAR1(50);
    cleardevice();
    tra(1,1,1,3);
    CAR1(150);
    cleardevice();
    tra(1,1,1,2);
    CAR1(50);
    cleardevice();

}
void work3()
{
    tra(3,1,1,1);
    delay(5000);
    cleardevice();
    tra(2,1,1,1);
    delay(2000);
    cleardevice();
    tra(1,3,1,1);
    delay(5000);
    cleardevice();
    tra(1,2,1,1);
    delay(2000);
    cleardevice();
    tra(1,1,3,1);
    delay(5000);
    cleardevice();
    tra(1,1,2,1);
    delay(2000);
    cleardevice();
    tra(1,1,1,3);
    delay(5000);
    cleardevice();
    tra(1,1,1,2);
    delay(2000);
    cleardevice();
}
