#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	
	char **a=NULL;int i;
	a=(char *)malloc(sizeof(int));
	for(i=0;i<10;i++)
	{
		
	a[i]=(char *)malloc(sizeof(char));
		gets(a[i]);
	}
gets(a);
	puts("elements in a:");
//	for(i=0;i<10;i++);
	puts(a);
}
