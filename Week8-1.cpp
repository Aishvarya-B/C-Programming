#include<stdio.h>
int main(){
FILE *f=fopen("text.txt","w");

char txt[50];
printf("Enter text:");
scanf("%[^\n]%*c",txt);
fprintf(f,"%s",txt);
fclose(f);

FILE *fr=fopen("text.txt","r");
char str[50];
fscanf(fr,"%[^\n]%*s",str);

printf("text in file:%s",str);
fclose(fr);

}

