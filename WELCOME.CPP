#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
clrscr();
int i;
char a[8]="welcome";
char b[6]="dear";
 for(i=1;i<=70;i++)
 {
 gotoxy(i,1);
 cout<<(char)219;
 gotoxy(i,24);
 cout<<(char)219;
 }
 for(i=1;i<=24;i++)
 {
 gotoxy(1,i);
 cout<<(char)219;
 gotoxy(70,i);
 cout<<(char)219;
 }
 gotoxy(33,12);
 for(i=0;i<7;i++)
 {
 delay(300);textcolor(i+3);
 cprintf("%c",a[i]);

 }
 gotoxy(34,14);
 for(i=0;i<5;i++)
 {
 textcolor(i+4);
 cprintf("%c",b[i]);
 delay(200);
 }
}

