/* Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits
 * and special characters.
 */
#include <stdio.h>
int main() {
    FILE * f = fopen("input.txt", "r");
    int c, v = 0, co = 0;
    if (!f)return 1; while ((c = fgetc(f)) != EOF) {
        if (c >= 'A' && c <= 'Z')c += 32;
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')v++; else co++;
        }
    }
    printf("Vowels: %d Consonants: %d", v, co);
    fclose(f);
    return 0;
}
