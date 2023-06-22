#include<stdio.h>

#include <stdio.h>
 void sortIntArr(int c,char a[]){
 	
 
 	for (int b = 0;b<c;b++)
    {
        for (int z=0;z<c-b-1;z++)
        {
            if (a[z]>a[z+1])
            {
                 int temp=a[z];
                a[z]=a[z + 1];
                a[z+1]=temp;
            }
        }
    }

    for (int b=0;b<c;b++)
    {
        printf("%d  ",a[b]);
        if(b%8==0){
        	printf("\n");
		}
    }
 	
 }
int main()
{
    int a[100];
    int exit_code=0,c=0;

    while (1)
    {
        printf("sayi giriniz (cikmak icin -1): \n");
        scanf("%d",&exit_code);
        
        if (exit_code==-1)
        {
            break;
        }
        
        c++;
        a[c]=exit_code;
    }
      
    sortIntArr(c,a);

    return 0;
}