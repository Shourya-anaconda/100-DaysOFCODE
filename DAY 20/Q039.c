/* Q39: Write a program to find the product of odd digits of a number.
 */
#include <stdio.h>
int main() {
    int n, p = 1, found = 0;
    scanf("%d", &n); while (n) {
        int d = n % 10;
        if (d % 2) {
            p *= d;
            found = 1;
        }
        n /= 10;
    }
    printf("%d", found?p: 1);
    return 0;
}
