#include<stdio.h>
int subtraction(int num1, int num2){
    int result = num1-num2;
    return result;
}
int main(){
    int num1, num2, result;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    result = subtraction(num1, num2);
    printf("Result: %d", result);
}
