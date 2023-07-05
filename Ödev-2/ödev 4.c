#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("10 luk tabanda sayi girin: \n");
	scanf("%d",&a);
	
	b=a/16;
	
	c=a%16;
	
	while(b>16){
		b/=16;
		
	}
	

	
	if(c>=10){
		if(b>=10){ 
		b*=100;
		} 
		else{
			b*=100;
		}
	}
	else{
		b*=10;
	}
	
	
	printf("16 lik tabanda degeri : %d",c+b);
	
}