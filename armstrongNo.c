#include <stdio.h>


int main()
{
    int number,remainder;
    int len_num=0;
    int result=0;
    printf("Enter a number :\n");
    scanf("%d",&number);
    int q=number;

    while (q!=0)
    {
        len_num++;
        q=(q/10);
    }
    
    q=number;

    while (q!=0)
    {
        int cnt = len_num;
        int mul = 1;
        remainder = (q%10);
        while (cnt != 0)
        {
            mul = mul * remainder;
            cnt--;
        }
        result = result + mul;
        q=q / 10;
    }

    if (number==result)
    {
        printf("This number is an Armstrong Number");
    }
    else
    {
        printf("This number isn't an Armstrong Number");
        
    }
    
    return 0;
}