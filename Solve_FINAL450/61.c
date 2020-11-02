	
// C program to check if two given strings are rotations of 
// each other 
# include <stdio.h> 
# include <string.h> 
# include <stdlib.h> 


int isvalidShuffle(char *str1, char *str2) 
{ 
	int i;
	int Arr[26]=  {0} ;

	if(strlen(str1)!=strlen(str2))
	return 0;

	while( i <= strlen(str1))
	{
       Arr[str1[i]-65]++;
	   Arr[str2[i]-65]--;
	   i++;
	}

	i=0;
	while( !Arr[i++])
	{
		if(i >= 26)
			return 1;
	}
	
	return 0;

} 


int main() 
{ 
	char str1[] = "AACD"; 
	char str2[] = "ADEA"; 

	if (isvalidShuffle(str1, str2)) 
	printf("Strings are shuffle of each other"); 
	else
	printf("Strings are not shuffle of each other"); 

	getchar(); 
	return 0; 
} 


