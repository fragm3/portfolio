#include <stdio.h>
#include <conio.h>
#include<dos.h>
int a;
void main ()
{ clrscr();
for(a=1; a<29; a++)
{
gotoxy(a,13); //goto coordinates (x, y) and print
delay(200); //stay for a moment
textcolor(a);
cprintf(” Kamal Subhani”);
}
for(a=65; a>28 ;a–)
{
gotoxy(a,13); //goto coordinates (x, y) and print
delay(200); //stay for a moment
textcolor(a);
cprintf(“kamal subhani”);
}
getch();
}