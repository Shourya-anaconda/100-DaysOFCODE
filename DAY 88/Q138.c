/* Q138: Print all enum names and integer values using a loop.
 */
#include <stdio.h>
enum Color {
    RED, GREEN, BLUE
};
int main() {
    char * names[] = {
        "RED", "GREEN", "BLUE"
    };
    int i;
    for (i = 0; i < 3; i++)printf("%s %d\n", names[i], i);
    return 0;
}
