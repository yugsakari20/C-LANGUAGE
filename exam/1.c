#include <stdio.h>

int main() {
    int num;
  
    printf("Enter a number: ");
    scanf("%d", &num);
    
  
    switch(num > 0) {
        case 1:
            printf("%d is a positive number.\n", num);
            break;
        case 0:
            printf("%d is either negative or zero.\n", num);
            break;
    }
    
    return 0;
}
