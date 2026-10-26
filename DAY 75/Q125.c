/* Q125: Open an existing file in append mode and allow the user to enter a new line of text.
 * Append the text at the end without overwriting existing content.
 */
#include <stdio.h>
int main() {
    char file[100], line[500];
    FILE * f;
    scanf("%99s", file);
    f = fopen(file, "a");
    if (!f)return 1;
    getchar();
    fgets(line, sizeof (line), stdin);
    fprintf(f, "%s", line);
    fclose(f);
    return 0;
}
