/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations
 * using switch.
 */
#include <stdio.h>
enum Menu {
    ADD = 1, SUBTRACT, MULTIPLY
};
int main() {
    int c, a, b;
    scanf("%d%d%d", &c, &a, &b);
    switch (c) {
        case ADD: printf("%d", a + b);
        break;
        case SUBTRACT: printf("%d", a - b);
        break;
        case MULTIPLY: printf("%d", a * b);
        break;
        default: puts("Invalid");
    }
    return 0;
}
