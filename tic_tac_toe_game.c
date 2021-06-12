/*
Tic Tac Toe game 
*/
#include<stdio.h>
#include<conio.h>
int logic();
char a[9]= {'1','2','3','4','5','6','7','8','9'};
void check(char,char);

void draw()
{
printf("\n\tTIC TAC TOE GAME");
printf("\n\n\n\t\t--|--|---\n");
printf("\t\t %c| %c| %c\n",a[0],a[1],a[2]);
printf("\t\t--|--|---\n");
printf("\t\t %c| %c| %c\n",a[3],a[4],a[5]);
printf("\t\t--|--|---\n");
printf("\t\t %c| %c| %c\n",a[6],a[7],a[8]);
}
void input()
{
int pa;
char p,s;
printf("\t\t--|--|---\n");
printf("\n\nPlayer1--X:");
printf("\nPlayer2--O:");
printf("\n\nwho start first : Player1 or Player2 = ");
scanf("%d",&pa);
printf("\nEnter the postion and symbol = \n");
fflush(stdin);
scanf("%c",&p);
fflush(stdin);
scanf("%c",&s);
check(p,s);		
}


 void check(char P,char S)
 {
 	int i;
 	for(i=0;i<=8;i++)
   {
   	  if(a[i]==P)
   	  a[i]=S;
   	
   }

 }
 int logic()
 {
 	
 	if(a[0]=='x'&&a[1]=='x'&&a[2]=='x'||a[0]=='x'&&a[3]=='x'&&a[6]=='x'||a[0]=='x'&&a[4]=='x'&&a[8]=='x')
 	return(100);
 	else if(a[0]=='o'&&a[1]=='o'&&a[2]=='o'||a[0]=='o'&&a[3]=='o'&&a[6]=='o'||a[0]=='o'&&a[4]=='o'&&a[8]=='o')
 	return(200);
 	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
 	return(100);
 	else if(a[1]=='o'&&a[4]=='o'&&a[7]=='o')
 	return(200);
    else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x'||a[2]=='x'&&a[4]=='x'&&a[6]=='x')
 	return(100);
 	else if(a[2]=='o'&&a[5]=='o'&&a[8]=='o'||a[2]=='o'&&a[4]=='o'&&a[6]=='o')
 	return(200);
 	else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
 	return(100);
    else if(a[3]=='o'&&a[4]=='o'&&a[5]=='o')
 	return(200);
 	else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
 	return(100);
 	else if(a[6]=='o'&&a[7]=='o'&&a[8]=='o')
 	return(200);
 	else
 	return(300);
 	           
 	        
 	    
 }
 
void main()
{ 
   int k;
 	
   label1:
	system("cls");
	draw();
	input();
	k=logic();
	system("cls");
	draw();
	if(k==100)
	printf("Player1 won the game");
	else if(k==200)
	printf("Player2 won the game");
	else 
	goto label1;
	
}
	


 
