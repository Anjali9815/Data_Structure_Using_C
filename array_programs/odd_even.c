#include <stdio.h>

int main(){

    int n= 0;
    printf("Enter the number :");
    scanf("%d", &n);
    if (n%2 == 0){
        printf("%d is even number", n);
    }
    else {
        printf("%d is odd numer ", n);
    }
}

