#include<stdio.h>
int sum(int num1, int num2){
    int result = num1+num2;
    return result;
}
int main(){
    int num1, num2, result;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("Result: %d", result);
}
