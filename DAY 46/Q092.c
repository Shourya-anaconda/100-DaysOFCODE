/* Q92: Find the first repeating lowercase alphabet in a string.
 */
#include <stdio.h>
int main() {
    char s[1000];
    int c[26] = {
        0
    }, i;
    fgets(s, sizeof (s), stdin);
    for (i = 0; s[i]; i++)if (s[i] >= 'a' && s[i] <= 'z') {
        if (c[s[i] - 'a']++) {
            printf("%c", s[i]);
            return 0;
        }
    }
    puts("No repeating character");
    return 0;
}
