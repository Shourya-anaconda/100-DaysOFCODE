/* Q96: Reverse each word in a sentence without changing the word order.
 */
#include <stdio.h>
int main() {
    char s[1000];
    int i = 0, j, k;
    fgets(s, sizeof (s), stdin); while (s[i]) { while (s[i] == ' ')i++;
        j = i; while (s[j] && s[j] != ' ' && s[j] != '\n')j++;
        for (k = j - 1; k >= i; k--)putchar(s[k]);
        if (s[j] == ' ')putchar(' ');
        i = j + 1;
    }
    return 0;
}
