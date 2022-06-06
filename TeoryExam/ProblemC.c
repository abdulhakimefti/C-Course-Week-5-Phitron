   #include<stdio.h>

    int gcd(int a,int b){
        while (b > 0)
        {
            int temp = a%b;
            a=b;
            b=temp;
        }
        int gcd = a;
        return gcd;
    }

    int main (){
        int arr[10];
        int len = sizeof(arr)/sizeof(arr[0]);
      for(int i =0;i<len;i++){
            scanf("%d",&arr[i]);
      }
      int a;
      for(int i =0;i<len;i++){
          if(i==0){
              a = gcd(arr[9-i],arr[9-(i+1)]);
          }
          else{
              a = gcd(arr[9-(i+1)],a);
          }

      }
      printf("%d",a);

    }
  