#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main ()
{
	char c;
	printf("Enter the alphabet :\t");
	scanf("%c",&c);
	
	c = tolower(c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		printf("'%c' is a Vowel",c);
	}
	else if(c>='a'&&c<='z'){printf("'%c' is a Consonent",c);
	}
	else {printf("'%c' is not an alphabet.",c);
	}
	return 0;
}
