#include <stdio.h>
#include <string.h>
void itob();
int main(void){
    int n;
    int b;
    char s[64]="";
    printf("Enter a whole number: ");
    scanf("%d", &n);
    printf("\nEnter a base for conversion: ");
    scanf("%d", &b);
    itob(n,s,b);
    printf("%s\n",strrev(s));
    
 }
 void itob(int n,char s[],int b){
     int i=0;
     int c=0;
     char m[64]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/";
     do{
       i=n%b;
       n/=b;
       s[c]=m[i];
       c++;
    }    
    while(n>0);
    
   
 }