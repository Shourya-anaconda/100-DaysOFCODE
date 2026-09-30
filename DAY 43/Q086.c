/* Q86: Check if a string is a palindrome.
 */
#include <stdio.h>
int main() {
    char s[1000];
    int i, n = 0;
    fgets(s, sizeof (s), stdin); while (s[n] && s[n] != '\n')n++;
    for (i = 0; i < n / 2; i++)if (s[i] != s[n - 1 - i]) {
        puts("Not palindrome");
        return 0;
    }
    puts("Palindrome");
    return 0;
}
