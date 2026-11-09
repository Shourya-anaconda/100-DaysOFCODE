/* Q139: Show that enums store integers by printing assigned values.
 */
#include <stdio.h>
enum Number {
    TEN = 10, TWENTY = 20, THIRTY = 30
};
int main() {
    printf("%d %d %d", TEN, TWENTY, THIRTY);
    return 0;
}
