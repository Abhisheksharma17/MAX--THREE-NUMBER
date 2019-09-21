#include <stdio.h>

int main(void)
{
    int a,b,c; //declaring the three varibles a,b,c which values are become input and there data type is integer
    int max;//declaring a varible which will contain the maximum output value from the above three variable
    printf("ENTER THE VALUE OF NUM1 ,NUM2 AND NUM3 :"); //taking the input value which will assign to a,b,c
    scanf("%d%d%d",&a,&b,&c);//reading the input value of a,b,c
    max=a>b?((a>c)?a:c):((b>c)?b:c);//ternary operator is used to find maximum value from a,b,c
    printf("Maximum of %d and %d and %d is = %d",a,b,c,max);// it will print the output of the Program which is maximum value of all three input numbers

    return 0;
}
