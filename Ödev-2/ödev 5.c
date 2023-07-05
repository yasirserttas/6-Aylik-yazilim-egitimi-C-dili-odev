#include<stdio.h>
#include<string.h>

int main(){
	int i=0;
	FILE *dosya;
	
	dosya=fopen("patika.txt","w");
	
	char x[125];
	printf("bir metin gir: \n"),
	fgets(x, sizeof(x), stdin);
	
	fprintf(dosya,"%s",x);
	
	fclose(dosya);
	
	dosya=fopen("patika.txt","r");
	char a;
	while ((a = fgetc(dosya)) != EOF) {
        printf("%c", a);
    }
	fclose(dosya);
	
}