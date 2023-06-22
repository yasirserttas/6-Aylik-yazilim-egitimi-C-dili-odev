#include<stdio.h>
#include<string.h>
void isPolindrom(int x,char a[ ]){
	int y,z;
	
for(y=0,z=x-1;y<z;z--,y++) 
	{
		
			if(a[z]==a[y])
			{
			printf("%s kelimesi Polindromdur\n",a);
		}
		else
		{
			printf("%s Polindrom degildir\n",a);
		}
		
		
	}	
}

int main()
{

char a[250];
int x,y,z;
printf("birseyler yaz: \n");
scanf("%s",a);
x= strlen(a);
isPolindrom(x,a);

	
}






