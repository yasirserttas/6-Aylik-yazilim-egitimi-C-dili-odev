#include<stdio.h>

int main(){
	
	int s1,s2;
	
	int *p1=&s1;
	int *p2=&s2;
	
	
	
	*p1=5;
	*p2=13;
	
	printf("1.sayi: %d \n2.sayi: %d",*p1,*p2);
}