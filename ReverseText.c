#include<stdio.h>
#include <string.h>
void reverseText (char a[200], int say){
	int x;
		for(x=say-1;x>=0;x--){
		printf("%c",a[x]);
	}
	printf("\n");
}

int main()
{
	
	char a[200];
	printf("birseyler yaz: \n");
	scanf("%s",a);
	int say=strlen(a);
	reverseText(a,say);

	
}

 