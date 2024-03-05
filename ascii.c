#include <stdio.h>
void main()
{
int i;
char c;
float f=10.20;
for(i=65; i<=90; ++i)
	{
	printf("%d => %c\n",i,i);
	}
for(c='a'; c<='z'; ++c)
	{
	printf("%c => %d\n",c,c);
	}
i=f;
printf("%d\n",i);
f=i;
printf("%f\n",f);
f = 10 / 100;
printf("%f\n",f);
f = (10*1.0) / 100;
printf("%f\n",f);
}
