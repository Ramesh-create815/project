#include <stdio.h>
#include<conio.h>
void main ()
{
        int num1,num2,sum,dif,prod,div,mod;
        printf("Enter two integers");
        scanf("%d%d",&num1,&num2);
        sum=num1+num2;
        dif=num1-num2;
        prod=num1*num2;
        div=num1/num2;
        mod=num1%num2;
        printf("sum of two integer is%d\n:",sum);
        printf("difference between two integer is%d\n",dif);
        printf("product of two integer is%d\n",prod);
        printf("division of two integer is%d\n",div);
        printf("modulus of two integer is %d\n",mod);
        getch();
}
