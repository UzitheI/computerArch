#include<stdio.h>
int main(){
    int decimal_num, binary_num = 0, i = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);
    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
    }
    printf("Binary number: %d\n", binary_num);
    return 0;
}