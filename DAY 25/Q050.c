/* Q50: Write a program to print the following pattern: ***** **** *** ** *
 */
#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < i; j++)putchar(' ');
        for (j = 5; j > i; j--)putchar('*');
        putchar('\n');
    }
    return 0;
}
