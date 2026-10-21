/* Q120: Write a program to take a string input. Change it to sentence case.
 */
#include <stdio.h>
int main() {
    char s[1000];
    int i, first = 1;
    fgets(s, sizeof (s), stdin);
    for (i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')s[i] += 32;
        if (first && s[i] >= 'a' && s[i] <= 'z')s[i] -= 32;
        first = (s[i] == ' ' || s[i] == '\n');
    }
    printf("%s", s);
    return 0;
}
