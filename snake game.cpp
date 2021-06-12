#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int height =30,width=30;
int x,y,fruitx,fruity,gameOver,score;
int flag;
void setup()
{
	gameOver=0;
	x=width/2;
	y=height/2;
	label1:
	     fruitx=rand()%30;
	     if(fruitx==1)
         goto label1;
	label2:
	     fruity=rand()%30;
      	 if(fruity==1)
    	 goto label2;
	score=0;
	
	
}

void draw()
{
	system("cls");
	int i,j;
	for(i=1;i<=width;i++)
	{
		for(j=1;j<=height;j++)
		{
			if(i==1||i==width||j==1||j==height)
			
			  printf("*");
			  
			else
			 if(i==x&&j==y)
			 printf("O");
			 
		     else
			 {
			  
			 if(i==fruitx&&j==fruity)
		     printf("F");
			else
				printf(" ");
			  
			}  
		}
		printf("\n");
	}
	printf("score = %d",score);
}


void Logic()
{
	if(kbhit())
    switch(getch())
    {
		case 'l':
		    y--;
	    	break;
		case 'r':
	     	y++;
	    	break;
		case 'd':
			x++;
			break;	
		case 'u':
			x--;
			break;			
	}
	if(x==1||x==width||y==1|| y==height)	
	gameOver =1;
	if(x==fruitx&&y==fruity)
	
     {
	label3:
	     fruitx=rand()%30;
	      if(fruitx==1)
          goto label3;
	label4:
	     fruity=rand()%30;
	     if(fruity==1)
	     goto label4;

     }
	 	
}	 
int main()
{ 
int m,n;
   setup();
   while(1)
   {
   
   draw();
   Logic();
   if(gameOver==1)
   break;
   for(m=1;m<1000;m++){
  
   
   	for(n=1;n<1000;n++){
	   }
}
	   
  }
   return 0;	
}
