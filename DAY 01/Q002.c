/* Q2: Write a program to input two numbers and display their sum, difference, product, and
 * quotient.
 */
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (b == 0) {
        printf("Division by zero");
        return 0;
    }
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", a + b, a - b, a * b, a / b);
    return 0;
}
