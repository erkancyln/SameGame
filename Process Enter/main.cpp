#include <iostream>
void processEnter(char matrix[10][20],int posX,int posY)
{
	
}

void processRight(char matrix[10][20],int posX,int posY)
{
	for(int i = posX ; i< 20 ; i++)
	{
		for (int j = posY; j < 10;j++)
		{
			if (týklananHarf == matrix[posX+1,posY])
			{
				harfisil(matrix[posX+1,posY]);
			}
			else
			{
				break;
			}
		}
	}
}

void processLeft(char matrix[10][20],int posX,int posY)
{
	for(int i = posX ; i< 20 ; i++)
	{
		for (int j = posY; j < 10;j++)
		{
			if (týklananHarf == matrix[posX-1,posY])
			{
				harfisil(matrix[posX-1,posY]);
			}
			else
			{
				break;
			}
		}
	}
}

void processUp(char matrix[10][20],int posX,int posY)
{
		for(int i = posX ; i< 20 ; i++)
	{
		for (int j = posY; j < 10;j++)
		{
			if (týklananHarf == matrix[posX,posY-1])
			{
				harfisil(matrix[posX,posY-1]);
			}
			else
			{
				break;
			}
		}
	}
}

void processDown(char matrix[10][20],int posX,int posY)
{
		for(int i = posX ; i< 20 ; i++)
	{
		for (int j = posY; j < 10;j++)
		{
			if (týklananHarf == matrix[posX,posY+1])
			{
				harfisil(matrix[posX,posY+1]);
			}
			else
			{
				break;
			}
		}
	}
}
int main(int argc, char** argv) {
	return 0;
}
