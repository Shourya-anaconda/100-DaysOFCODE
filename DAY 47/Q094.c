/* Q94: Find the longest word in a sentence.
 */
#include <stdio.h>
int main() {
    char s[1000], w[200], best[200];
    int i = 0, j = 0, m = 0;
    fgets(s, sizeof (s), stdin); while (1) {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\0')w[j++] = s[i]; else {
            w[j] = '\0';
            if (j > m) {
                m = j;
                for (j = 0; w[j]; j++)best[j] = w[j];
                best[j] = '\0';
            }
            j = 0;
            if (!s[i])break;
        }
        i++;
    }
    printf("%s", best);
    return 0;
}
