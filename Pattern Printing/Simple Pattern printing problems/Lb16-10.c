/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern20(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=1;i<=iNo1;i++)
	{	
		for(j=1;j<=iNo2;j++)
		{
		if(i>j)
		{
		printf("\t");
		}
		else
		printf("* \t");
		}
		
		printf("\n");
	}
}

int main()
{
	int iNum1=0,iNum2=0;
	printf("Enter two number\n ");
	scanf("%d %d",&iNum1,&iNum2);
	
	pattern20(iNum1,iNum2);
	return 0;
	
}

/* Output
jay@jay-INVALID:~$ gcc Lb16-10.c
jay@jay-INVALID:~$ ./a.out 
Enter two number
 4
4
* 	* 	* 	* 	
	* 	* 	* 	
		* 	* 	
			* 	
			
*/