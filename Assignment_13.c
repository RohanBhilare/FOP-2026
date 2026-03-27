#include <stdio.h>

int main()
{
    int num,digit;
    printf("Enter value:");
    scanf("%d",&num);
 while(num>0)
 {
    digit=num%10;
    printf("%d",digit);
    num=num/10;
 }
printf("\n");
 return 0;
}
