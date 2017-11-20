/* A program to input a string of Words and words are supposed to be stored in a Hashing function so that :

*/
#include<stdio.h>
#include<string.h>
#define HASHFUNCTION 13

int hash(int key){
	int a;
	a =key % HASHFUNCTION;
	return(a);
}


int main()
{
	int i,s=0,j=0,key,index,temp,count1=0,count2=0;
	int table[100];
	char string[20],text[10];
	char flag='f';
	printf("Enter the sentence\n");
	gets(string);

	// Cleaming array table
	for(i=0;i<100;i++)
		table[i] =' ';


	// Iterations used for finding index postion of the first word
	text[j] = string[0];
	for(i=0;string[i]!='\0';i++){
			if(string[i] ==' ')
			{
				s =i+1;
				j+=1;
				text[j] = string[s];
			}
		}

	// Now text is an array with all the first words of sentence


	// For Linear Probing
	for(i=0;text[i]!='\0';i++){
		key =(int)text[i];
		index = hash(key);

				if(table[index]==' '){
					table[index] = key;
						flag='t';
						}

				else if(table[index] ==key)
				{
					}

				else {
					count1 +=1;
					index=index+1;
					if(table[index]==-1){
						table[index] = key;
					}
				}
		}


		printf("This is for Liner Hashing\n");
		for(i=0;i<13;i++){
			printf("INDEX %d: %c |",i,table[i]);
		}

		// printf("\nNo of collisions are: %d",count1 );

// Cleaming array table
		for(i=0;i<100;i++)
			table[i] =' ';

// QUADRATIC Probing algortihm

for(i=0;text[i]!='\0';i++){
	key =(int)text[i] ;
	index = hash(key);
	temp = index;

			if(table[index]==' '){
				table[index] = key;
					flag='t';
					}
			// yea collision resolution

			else {
				if (table[index] !=' '){
					for(i=0;i<HASHFUNCTION;i++){
							temp = (temp + i*i) ;
							table[temp] = key;
							while(temp<13)
							{
								if (table[temp] == ' '){
									table[temp] = key;
									break;
								}
							}
							while(temp >=12){
									temp =(temp+ i*i) %13;
									if (table[temp] == ' ')
									{
										table[temp] = key;
										break;
									}}
								}
							}}
						}

		printf("\nThis is for Quadratic Hashing\n");
		for(i=0;i<13;i++){
			printf("INDEX %d: %c |",i,table[i]);
		}
	return 0;
}
