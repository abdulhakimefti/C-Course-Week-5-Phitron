    // Problem 2

    #include<stdio.h>
    char declareFunction (int a,double b){
        char letter = a;
        return letter;
    }
    
    int main (){
        int a;
        double b;
        scanf("%d %lf",&a,&b);
        char letter = declareFunction(a,b);
        printf("%d %c",letter,letter);
    }