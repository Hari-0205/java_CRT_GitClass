#include <stdio.h>
void main()
{
int a=0,b=1,c,n,i;
printf("Entre the value of the number n " );
scanf("%d",&n);
do{
printf("%d",a);
c=a+b;
a=b;
b=c;
i++;
}while(i<=n);

}
