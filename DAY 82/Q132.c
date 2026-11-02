/* Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go'
 * based on its value.
 */
#include <stdio.h>
enum Light {
    RED, YELLOW, GREEN
};
int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case RED: puts("Stop");
        break;
        case YELLOW: puts("Wait");
        break;
        case GREEN: puts("Go");
        break;
        default: puts("Invalid");
    }
    return 0;
}
