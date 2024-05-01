#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    char name[50], role[50];


    printf("enter the number of employees :");
    scanf("%d", &n);

    FILE *file = fopen("yug.txt", "w");

    if (file == NULL){
        printf("Error opening file.\n");
        return 0;
    }
   for (int i = 0; i < n; i++){
    printf("Enter name of employee %d :", i + 1);
    scanf("%s", name);
    printf("Enter role of employee %d:", i + 1);
    scanf("%s" , name);

    fprintf(file, "Employee %d: Name: %s, Role: %s\n", i + 1, name ,role);
   }

   fclose(file);
   printf("Data written to file yug.txt successfully.\n");

   return 0;

    
}