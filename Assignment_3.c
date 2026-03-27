#include <stdio.h>

int main() {
    int n,t,i;
   
    printf("enter your number\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    t=i*n;
    printf("%d\n",t);
    }
}
