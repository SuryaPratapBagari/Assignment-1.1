#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    int choice;

    printf("Enter (1) if you want to convert celsius to fahrenheit.\n");
    printf("Enter (2) if you want to convert fahrenheit to celsius.\n");
    printf("Choose (1) or (2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Celsius = ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9 / 5) + 32;

        printf("Fahrenheit = %f", fahrenheit);
    }

    else if(choice == 2){
        printf("Fahrenheit = ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("Celsius = %f", celsius);
    }

    else{
        printf("Invalid input.");
    }
    return 0;
}
