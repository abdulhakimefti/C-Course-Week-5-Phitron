#include<stdio.h>
int giveInt(int *a,int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;

}
int main (){
    int a=10;
    int b=20;
    giveInt(&a,&b);
    printf("%d %d",a,b);
}

#include<stdio.h>
#include<string.h>
char stringCat(char a[], char b[], char out[]){
    out = strcat(a,b);
    printf("%s",out);
}
int main (){
    char a[]="aa";
    char b[] ="bb";
    char c[1000];
    stringCat(a,b,c);
}