/* Q95: Check if one string is a rotation of another.
 */
#include <stdio.h>
#include <string.h>
int main() {
    char a[500], b[1000];
    scanf("%499s%499s", a, b);
    if (strlen(a) != strlen(b)) {
        puts("Not rotation");
        return 0;
    }
    strcpy(b + strlen(b), b);
    puts(strstr(b, a)?"Rotation": "Not rotation");
    return 0;
}
