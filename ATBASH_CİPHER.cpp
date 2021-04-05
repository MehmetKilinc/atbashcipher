#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int mod(int c,int m){	
	while(c<0){
		c = c + m;
	}
	return c;
}
int encode(char p){	
	int c = -p-1;
	c = mod(c,26);
}
int main(){	
	char alfabe [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char plain_text [100];
	int i;
	printf("lütfen metin giriniz : ");
	scanf("%s",&plain_text);	
	int indis;
	for(i=0;i<strlen(plain_text);i++){		
		indis = encode(plain_text[i]);
		printf("%c",alfabe[indis]);		
	}
	return 0;
}
