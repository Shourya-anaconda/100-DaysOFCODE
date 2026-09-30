/* Q83: Count vowels and consonants in a string.
 */
#include <stdio.h>
int main() {
    char s[1000], c;
    int i, v = 0, co = 0;
    fgets(s, sizeof (s), stdin);
    for (i = 0; s[i]; i++) {
        c = s[i];
        if (c >= 'A' && c <= 'Z')c += 32;
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')v++; else co++;
        }
    }
    printf("Vowels=%d Consonants=%d", v, co);
    return 0;
}
