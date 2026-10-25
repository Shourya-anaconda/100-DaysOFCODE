/* Q124: Take two filenames from the user – a source file and a destination file. Copy all the
 * content from the source file to the destination file using fgetc() and fputc().
 */
#include <stdio.h>
int main() {
    char src[100], dst[100];
    int c;
    FILE * a, * b;
    scanf("%99s%99s", src, dst);
    a = fopen(src, "r");
    b = fopen(dst, "w");
    if (!a || !b)return 1; while ((c = fgetc(a)) != EOF)fputc(c, b);
    fclose(a);
    fclose(b);
    return 0;
}
