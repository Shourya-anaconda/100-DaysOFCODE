/* Q89: Count frequency of a given character in a string.
 */
#include <stdio.h>
int main() {
    char s[1000], x;
    int i, c = 0;
    fgets(s, sizeof (s), stdin);
    scanf("%c", &x);
    for (i = 0; s[i]; i++)if (s[i] == x)c++;
    printf("%d", c);
    return 0;
}
