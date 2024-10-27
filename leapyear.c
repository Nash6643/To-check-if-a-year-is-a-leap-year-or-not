#include <stdio.h>

int main() {
    
    printf("Enter your number: ");
   int num1;
   
   scanf("%d",&num1);
   
   if(num1%4==0 ||num1%100==0||num1%400==0){
       printf("Its a fucking leap year");
   }else{
       printf("Its not dude");
   }

    return 0;
}
