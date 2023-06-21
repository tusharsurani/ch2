#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c,d,e,f,g;
  float p,q,r,s,t;
  clrscr();
  a=20;
  b=11;
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  g=a%b;
  printf("\nsum of a+b=%d",c);
  printf("\na-b=%d",d);
  printf("\nmultiplication of a*b=%d",e);
  printf("\ndivision of a/d=%d",f);
  printf("\nreminder of a%%b=%d",g);
  p=30.5;
  q=92.5;
  s=q/p;
  t=p*q;
  printf("\ndivision of q/p=%f",s);
  printf("\nmultiplicasion of p*q=%f",t);

  getch();


}