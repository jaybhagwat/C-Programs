#include<stdio.h>
char swap(char c1,char c2)
{
	char temp;
	temp=c1;
	c1=c2;
	c2=temp;

	return c1,c2;
}