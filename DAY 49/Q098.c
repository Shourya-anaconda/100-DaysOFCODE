/* Q98: Print initials of a name with the surname displayed in full.
 */
#include <stdio.h>
int main() {
    char s[200], words[20][50];
    int i = 0, j = 0, k = 0, n = 0;
    fgets(s, sizeof (s), stdin); while (s[i]) {
        if (s[i] != ' ' && s[i] != '\n')words[n][j++] = s[i]; else if (j) {
            words[n][j] = 0;
            n++;
            j = 0;
        }
        i++;
    }
    if (j) {
        words[n][j] = 0;
        n++;
    }
    for (i = 0; i < n - 1; i++)printf("%c.", words[i][0]);
    if (n)printf(" %s", words[n - 1]);
    return 0;
}
