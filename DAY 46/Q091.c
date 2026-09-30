/* Q91: Remove all vowels from a string.
 */
#include <stdio.h>
int main() {
    char s[1000];
    int i, j = 0;
    fgets(s, sizeof (s), stdin);
    for (i = 0; s[i]; i++)if (!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))s[j++] = s[i];
    s[j] = '\0';
    printf("%s", s);
    return 0;
}
