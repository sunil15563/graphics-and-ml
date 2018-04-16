#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <math.h>
void main(){
int x1=200,y1=200,option;
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,”C:\\TURBOC3\\BGI”);

do{





cout<<“\n1.Translation 2.Scaling 3.Rotation 4.Exit\nEnter your choice: “;
cin>>option;

switch(option){
case 1:
float tx,ty;
cout<<“Enter tx & ty: “;
cin>>tx>>ty;
x1+=tx;x2+=tx;x3+=tx;
y1+=ty;y2+=ty;y3+=ty;
break;

case 2:
float sx,sy;
cout<<“Enter sx & sy: “;
cin>>sx>>sy;
x1*=sx;x2*=sx;x3*=sx;
y1*=sy;y2*=sy;y3*=sy;
break;

case 3:
float deg;
cout<<“Enter angle: “;
cin>>deg;
deg = deg*3.14/180;
int x,y;
x=x1;y=y1;
x1 = x*cos(deg)-y*sin(deg);
y1 = x*sin(deg)+y*cos(deg);
x=x2;y=y2;
x2 = x*cos(deg)-y*sin(deg);
y2 = x*sin(deg)+y*cos(deg);
x=x3;y=y3;
x3 = x*cos(deg)-y*sin(deg);
y3 = x*sin(deg)+y*cos(deg);
break;

case 4:
break;

default:
cout<<“Invalid choice”;
}
}while(option!=4);
closegraph();
}