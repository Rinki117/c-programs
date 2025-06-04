#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice, num,i;
    while(1){
        printf("menu:\n");
        printf("1. factorial of a num : \n");
        printf("2. prime or not prime\n");
        printf("3. odd or even: \n");
        printf("4. exit : \n");
        printf("enter your choice : \n");
        scanf("%d" , &choice);
        switch(choice){
            case 1 : 
              printf("enter the num : ");
              scanf("%d" , &num);
              int fact = 1;
              for(int i = 1 ; i<=num ; i++){
                fact = fact*i;
              }
              printf("the factorial of the num is given as : %d\n" , fact);
              break;
            case 2 : 
              printf("enter the num : ");
              scanf("%d" , &choice);
              int isprime = 1;
              if(num<= 0){
                isprime = 0;
              }else{
                for(int i = 2 ; i<=num/2 ; i++){
                    if(num%i==0){
                        isprime = 0;
                        break;
                    }
                }
              }if(isprime == 1){
                printf("the num is prime\n");}
              else{
                printf("not a prime num\n");
                break;
              }

            case 3 :
              printf("enter the num : ");
              scanf("%d" , &num);
              if(num % 2 == 0){
                printf("the num is even\n");
              }else{
                printf("the num is odd\n");
              }
              break;
            case 4:
                printf("exiting the program\n");
                break;
            default: 
               printf("invalid choice please try again\n");
        }
    }while(choice != 4)
    return 0;
}