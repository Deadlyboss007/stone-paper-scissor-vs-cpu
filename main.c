/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>  
#include <stdlib.h>  

void main()
{ int a=0, randomnumber=0, c=0, y=0;
while(y<3)
{
printf("enter a number corresponding to the following \n scissors  1 \n paper \t 2 \n stone \t 3 \n ");
scanf(" %d", &a);
switch(a)
{ case 1: printf("\n you have selected scissors");
break;
case 2: printf("\n you have selected paper");
break;
case 3: printf("\n you have selected stone");
break;
}
 randomnumber = rand() % 10;
 if(randomnumber/3 ==0)
 { c=c++;
 }
 else
 {
     if(randomnumber/2 ==0)
     {c=c+2;}
     else
     {c=c+3;}
 }
 
 switch(c)
 { case 1: printf("\n computer has scissors");
 break;
 case 2: printf("\n computer has paper");
 break;
 case 3: printf("\n computer has stone");
 break;
 }
 
 if(c==1 && a==1)
 {printf("\n try again \n ");
 }
 else if(c==1 && a==2)
 {printf("\n you lost \n ");}
 else if(c==1 && a==3)
 {printf("\n you won \n ");}
 else if(c==2 && a==1)
 {printf("\n you won \n");}
 else if(c==2 && a==2)
 {printf("\n try again \n ");}
 else if(c==2 && a==3)
 {printf("\n you lost \n ");}
 else if(c==3 && a==1)
 {printf("\n you lost \n ");}
 else if(c==3 && a==2)
 {printf("\n you won \n ");}
 else
 {printf("\n try again \n ");}
 y=y+1;
}
}
    
