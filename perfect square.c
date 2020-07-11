/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//check peerfect square using c program//
#include <stdio.h>
#include<math.h>
int main()
{
    int num;
    int ivar;
    float fvar;
    printf("enter a integer number");
    scanf("%d",&num);
    fvar=sqrt((double)num);
    ivar=fvar;
    if(ivar==fvar)
    printf("it is a perfect square",num);
    else
    printf("it is not  perfect square",num);
    return 0;
}
