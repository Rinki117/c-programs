#include <stdio.h>
#include <conio.h>
int main(){
    int i,j;
    int k;
    int num = 1;
    for(i = 0 ; i< 4 ; i++){
        int val = 1;
        for(j = 0 ; j<4-i-1 ; j++){
            printf(" ");
        }
        for(k = 1 ; k<=i ; k++){
            printf("%4d" , val);
            val = val*(i -j)/j+1;
        }printf("\n");
    }

    return 0;
}
