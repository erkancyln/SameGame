#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
void fillGameMatrix(char matrix[10][20])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
		    int temp = 1+rand()%5;

			if(temp==1)
        	{
	        	matrix[i][j]= 'A';
         	}
         	else if(temp==2)
        	{
	        	matrix[i][j]= 'B';
         	}
         	else if(temp==3)
        	{
	        	matrix[i][j]= 'C';
         	}
         	else if(temp==4)
        	{
	        	matrix[i][j]= 'D';
         	}
         	else if(temp==5)
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

int main()
{
	char matrix[10][20];// stores game screen characters
	srand(time(NULL));
	
	fillGameMatrix(matrix);
	printGameScreen(matrix);
	return 0;
}
