/* Q8: Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>
int main() {
    int n;
    long long s;
    scanf("%d", &n);
    s = (long long)n * (n + 1) / 2;
    printf("Sum=%lld", s);
    return 0;
}
