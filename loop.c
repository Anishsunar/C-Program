/*Write a C program to find the sum of first 10 natural numbers. Go to the editor
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55*/
#include <stdio.h>
int main(void){
    int i,sum=0;// Here your code !
    for(i=1;i<=10;i++)
    {
        printf("%d\t",i);
        sum=sum+i;
        
    }
    printf("\n%d",sum);
}

