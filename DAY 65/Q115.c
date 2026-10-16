/* Q115: Write a program to take two strings s and t as inputs (assume all characters are
 * lowercase). The task is to determine if s and t are valid anagrams, meaning they contain
 * the same characters with the same frequencies. Print "Anagram" if they are, otherwise
 * "Not Anagram".
 */
#include <stdio.h>
int main() {
    char a[1000], b[1000];
    int c[26] = {
        0
    }, i;
    scanf("%999s%999s", a, b);
    for (i = 0; a[i]; i++)c[a[i] - 'a']++;
    for (i = 0; b[i]; i++)c[b[i] - 'a']--;
    for (i = 0; i < 26; i++)if (c[i]) {
        puts("Not Anagram");
        return 0;
    }
    puts("Anagram");
    return 0;
}
