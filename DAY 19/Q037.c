/* Q37: Write a program to find the LCM of two numbers.
 */
#include <stdio.h>
int main() {
    int a, b, x, y, t;
    scanf("%d%d", &a, &b);
    x = a;
    y = b; while (y) {
        t = x % y;
        x = y;
        y = t;
    }
    printf("%d", a / x * b);
    return 0;
}
