/* Q127: Write a program that reads text from input.txt, converts all lowercase letters to
 * uppercase, and writes the result to output.txt.
 */
#include <stdio.h>
int main() {
    FILE * a = fopen("input.txt", "r"), * b = fopen("output.txt", "w");
    int c;
    if (!a || !b)return 1; while ((c = fgetc(a)) != EOF) {
        if (c >= 'a' && c <= 'z')c -= 32;
        fputc(c, b);
    }
    fclose(a);
    fclose(b);
    return 0;
}
