#include<stdio.h>
#include<strings.h>
int main(){
FILE *fr=fopen("text.txt","r");
//FILE *f=fopen("EVEN.txt","w");

//char txt[50];
//printf("Enter text:");
//scanf("%[^\n]%*c",txt);
//fprintf(f,"%s",txt);
//fclose(f);
int i=0;
//FILE *fr=fopen("text.txt","r");
char str[50];
fscanf(fr,"%[^\n]%s",str);
//printf("%c %c %c %s",str[0],str[1],str[2],str);
for(i=0;i<strlen(str);i++)
printf("%d  ",str[i]);
fclose(fr);

}

