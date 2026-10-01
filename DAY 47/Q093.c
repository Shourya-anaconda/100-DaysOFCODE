/* Q93: Check if two strings are anagrams of each other.
 */
#include <stdio.h>
int main() {
    char a[1000], b[1000];
    int c[256] = {
        0
    }, i;
    scanf("%999s%999s", a, b);
    for (i = 0; a[i]; i++)c[(unsigned char)a[i]]++;
    for (i = 0; b[i]; i++)c[(unsigned char)b[i]]--;
    for (i = 0; i < 256; i++)if (c[i]) {
        puts("Not Anagram");
        return 0;
    }
    puts("Anagram");
    return 0;
}
