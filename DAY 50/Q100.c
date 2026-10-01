/* Q100: Print all sub-strings of a string.
 */
#include <stdio.h>
int main() {
    char s[500];
    int i, j;
    scanf("%499s", s);
    for (i = 0; s[i]; i++)for (j = i + 1; s[j - 1]; j++)printf("%.*s\n", j - i, s + i);
    return 0;
}
