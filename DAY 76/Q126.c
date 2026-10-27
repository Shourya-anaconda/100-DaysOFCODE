/* Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If
 * the file pointer is NULL, print an error message; otherwise, read and display its
 * content.
 */
#include <stdio.h>
int main() {
    char name[100], line[500];
    FILE * f;
    scanf("%99s", name);
    f = fopen(name, "r");
    if (!f) {
        puts("File not found");
        return 0;
    } while (fgets(line, sizeof (line), f))printf("%s", line);
    fclose(f);
    return 0;
}
