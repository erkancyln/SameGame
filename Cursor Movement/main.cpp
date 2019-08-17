#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;  
    if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}

int main()
{
	int Keys;
    int poz_x = 0;
    int poz_y = 0;
    while(true)
    {
    	
        fflush(stdin);
        Keys = getch();
        if (Keys == 77  &&  poz_x<20)
        {
            poz_x+=1;     
            gotoxy(poz_x,poz_y);
        }
        else if (Keys == 75 && poz_x>0)
        {
	        poz_x-=1;     
            gotoxy(poz_x,poz_y);
        }
        else if (Keys == 80 && poz_y<10)
        {
            poz_y+=1;     
            gotoxy(poz_x,poz_y);
        }
        else if (Keys == 72 && poz_y>0)
        {
            poz_y-=1;     
            gotoxy(poz_x,poz_y);
        }
    }

    return 0;
}
