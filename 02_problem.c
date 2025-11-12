#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a<=b && b<=c){
        if(b<=c){
            printf("Numbers in non decreasing order is %d %d %d", a,b,c);
        }
        else{
            printf("Numbers in non decreasing order is %d %d %d", a,c,b);
        }
    }
    else if(b<=a && b<=c){
        if(a<=c){
            printf("Numbers in non decreasing order is %d %d %d", b,a,c);
        }
        else{
            printf("Numbers in non decreasing order is %d %d %d", b,c,a);
        }
    }
    else{
        if(a<=b){
            printf("Numbers in non decreasing order is %d %d %d", c,a,b);
        }
        else{
            printf("Number in non decreasing order is %d %d %d", c,b,a);
        }
    }
    
    return 0;
}
