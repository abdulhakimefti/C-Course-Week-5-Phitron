// problem 1
    #include<stdio.h>
    int squreOutput(int a){
        int squre = a * a;
        return squre;
    }

    int main (){
        int a;
        scanf("%d",&a);
        int result= squreOutput(a);
        printf("%d",result);
    }