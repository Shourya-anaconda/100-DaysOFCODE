/* Q97: Print the initials of a name.
 */
#include <stdio.h>
int main() {
    char s[200];
    int i, first = 1;
    fgets(s, sizeof (s), stdin);
    for (i = 0; s[i]; i++)if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ' && s[i] != '\n')printf("%c.", s[i]);
    return 0;
}
