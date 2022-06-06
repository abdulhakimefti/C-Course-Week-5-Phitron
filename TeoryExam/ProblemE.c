  #include<stdio.h>

    void makeSum(int a, int b, int *sum){
        *sum = a+b;
    }
    int main (){
        int a,b;
        scanf("%d %d",&a,&b);
        int sum;
        makeSum(a,b,&sum);
        printf("%d",sum);
    }
