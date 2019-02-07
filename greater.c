#include<stdio.h>
void main()
{
int a,b,c;
printf("INPUT:");
scanf("%d%d%d",&a,&b,&c);
if ((a>b) && (a>c))
printf("OUTPUT %d",a);
else if(b>c)
printf("OUTPUT %d",b);
else
printf("OUTPUT %d",c);
}
