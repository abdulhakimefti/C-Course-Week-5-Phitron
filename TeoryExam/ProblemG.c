#include<stdio.h>

void makeNArray(int n, int squares[]){
    int a = 1;
    for(int i=0;i<n;i++){
        squares[i]= a*a;
        a++;
    }
}
int main (){

    int squares[1000];
      makeNArray(4,squares);
   

}