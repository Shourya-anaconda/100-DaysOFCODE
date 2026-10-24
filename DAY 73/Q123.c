/* Q123: Read a text file and count the total number of characters, words, and lines. A word is
 * defined as a sequence of non-space characters separated by spaces or newlines.
 */
#include <stdio.h>
int main() {
    FILE * f = fopen("input.txt", "r");
    int c, chars = 0, words = 0, lines = 0, in = 0, prev = 0;
    if (!f)return 1; while ((c = fgetc(f)) != EOF) {
        chars++;
        if (c == 10)lines++;
        if (c == 32 || c == 10 || c == 9)in = 0; else if (!in) {
            words++;
            in = 1;
        }
        prev = c;
    }
    if (chars && prev != 10)lines++;
    printf("Characters: %d Words: %d Lines: %d", chars, words, lines);
    fclose(f);
    return 0;
}
