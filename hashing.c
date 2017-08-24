#include<stdio.h>
#define HASH_FUNCTION 13

int hashfun(int key)
{	int a;
	a = key%HASH_FUNCTION;
	return(a);
}

void main()
{
	int n,i,j,index,key;
	char flag='f';
	char a[100];
	int hash[100];
	printf("Enter the no of letters\n");
	scanf("%d",&n);
	printf("Enter THE string\n");
	scanf("%s",a);

	for (i=0;i<100;i++)
	{
		hash[i]=-1;
	}

	for(i=0;a[i]!='\0';i++)
	{
		printf("%c Ascii value: %d\n",a[i],a[i]);
		key=(int)a[i];
		index =hashfun(key);
		printf("%d \n",index );
		if(hash[index]==-1){
			hash[index] = key;
			flag='t';
		}

		else 
		{	
			index=index+1;
			if(hash[index]==-1)
				hash[index] = key;
		}

	}

	for (i=0;i<20;i++)
	{
		printf("INDEX: %d value is : %d \n",i,hash[i]);
	}
}
