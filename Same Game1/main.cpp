#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;
void updateCursor(int x, int y)
{
    static HANDLE h = NULL;  
    if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}

void fillGameMatrix(char matrix[10][20])
{
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
		    int temp =rand()%100;

			if(temp%5==0)
        	{
	        	matrix[i][j]= 'A';
         	}
         	else if(temp%5==1)
        	{
	        	matrix[i][j]= 'B';
         	}
         	else if(temp%5==2)
        	{
	        	matrix[i][j]= 'C';
         	}
         	else if(temp%5==3)
        	{
	        	matrix[i][j]= 'D';
         	}
         	else if(temp%5==4)
        	{
	        	matrix[i][j]= 'E';
         	}
		}
	}
}

void printGameScreen(char matrix[10][20])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			printf("%c",matrix[i][j]);
		}
		printf("\n");
	}
}

void processEnter(char matrix[10][20],int posX,int posY)
{
	
}
void processEnterRecursive(char matrix[10][20],int posX,int posY)
{
	int Silinen;
	if(matrix[posX][posY]==Silinen)
    {
    	matrix[posX][posY]=printf(" ");
			
		processEnterRecursive(matrix,posX+1,posY);
		processEnterRecursive(matrix,posX-1,posY);
		processEnterRecursive(matrix,posX,posY+1);
		processEnterRecursive(matrix,posX,posY-1);
    } 
}

int main()
{
	
	char matrix[10][20];// stores game screen characters
	int Keys;
	int poz_x = 0;
    int poz_y = 0;

    fillGameMatrix(matrix);
    printGameScreen(matrix);
    
    updateCursor(poz_x,poz_y); // update first position of cursor
    
    
    while(1)
    {
        fflush(stdin);
        Keys = getch();
        if (Keys == 77 && poz_x<19)// right command//
        {
            poz_x+=1;     
            updateCursor(poz_x,poz_y);
        }
        else if (Keys == 75 && poz_x>0)//left command//
        {
	        poz_x-=1;     
            updateCursor(poz_x,poz_y);
        }
        else if (Keys == 80 && poz_y<9)//down command//
        {
            poz_y+=1;     
            updateCursor(poz_x,poz_y);
        }
        else if (Keys == 72 && poz_y>0)//up command//
        {
            poz_y-=1;     
            updateCursor(poz_x,poz_y);
        }
        else if(Keys == 13)
        {
        	processEnterRecursive(matrix,poz_x,poz_y);
        }
	}
    cin.get();
    return 0;
}
