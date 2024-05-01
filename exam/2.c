#include <stdio.h>

int main() {
    int array[20], size, i;
    int small;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

 
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    small = array[0];


    for(i = 1; i < size; i++) {
        if(array[i] < small) {
            small = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", small);

    return 0;
}
