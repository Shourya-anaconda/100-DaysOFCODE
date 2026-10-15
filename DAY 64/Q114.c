/* Q114: Write a program to take a string s as input. The task is to find the length of the
 * longest substring without repeating characters. Print the length as output.
 */
#include <stdio.h>
int main() {
    char s[1000];
    int i, j, best = 0;
    scanf("%999s", s);
    for (i = 0; s[i]; i++) {
        int seen[256] = {
            0
        }, len = 0;
        for (j = i; s[j] && !seen[(unsigned char)s[j]]; j++) {
            seen[(unsigned char)s[j]] = 1;
            len++;
        }
        if (len > best)best = len;
    }
    printf("%d", best);
    return 0;
}
