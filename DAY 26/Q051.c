/* Q51: Write a program to print the following pattern: 5 45 345 2345 12345
 */
#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)putchar('*');
        putchar('\n');
    }
    return 0;
}
