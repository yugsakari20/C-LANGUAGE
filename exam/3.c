#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    
   
   for (; num != 0; num /= 10) {
    int digit = num % 10;
    reversed = reversed * 10 + digit;
}
    
    return reversed;
}

int main() {
    int number;
    
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    
    if (number >= 100 && number <= 999) {
        int reversed = reverseNumber(number);
        printf("Reversed number: %d\n", reversed);
    } else {
        printf("Please enter a valid 3-digit number.\n");
    }
    
    return 0;
}
