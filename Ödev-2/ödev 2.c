#include<stdio.h>

int faktoriyel(int a)
{
	if(a==0||a==1){
		return 1;
	}else {
	return a*faktoriyel(a-1);	
	}
	
	
}

int main()
{
	int a;
	printf("bir sayi giriniz: \n");
	scanf("%d",&a);
	
	if(a<0){
		printf("0 dan kucuk sayilarin faktoriyel hesabi olmaz\n");
		
	}
	else {
		faktoriyel(a);
		int sonuc=faktoriyel(a);
		printf("%d!= %d\n",a,sonuc);
	}
	
	
}