/* Q133: Create an enum for months and print how many days each month has.
 */
#include <stdio.h>
enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};
int main() {
    int m;
    scanf("%d", &m);
    switch (m) {
        case FEB: puts("28 days");
        break;
        case APR: case JUN: case SEP: case NOV: puts("30 days");
        break;
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC: puts("31 days");
        break;
        default: puts("Invalid");
    }
    return 0;
}
