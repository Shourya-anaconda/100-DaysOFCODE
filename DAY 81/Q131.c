/* Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer
 * value.
 */
#include <stdio.h>
enum Day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
int main() {
    char * d[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };
    int i;
    for (i = 0; i < 7; i++)printf("%s %d\n", d[i], i);
    return 0;
}
