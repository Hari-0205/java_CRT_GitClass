#include <stdio.h>
void main() {
int a,b,c,n,sum=0;
printf("entre the no");
scanf("%d",&n);
a=n%10;
b=(n%100)/10;
c=n/100;
sum=a*a*a+b+b+b+c*c*c;
if(n==sum)
{
printf("NO is armstrong");
else
printf("no is not ");
else
printf("no is not an armstrong");
}

}



