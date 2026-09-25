/* Q24: Write a program to calculate electricity bill based on units consumed with these rates:
 * First 100 units at ₹5/unit Next 100 units at ₹7/unit Next 100 units at ₹10/unit Above at
 * ₹12/unit
 */
#include <stdio.h>
int main() {
    int u, b = 0;
    scanf("%d", &u);
    if (u > 0)b += (u < 100?u: 100) * 5;
    if (u > 100)b += (u < 200?u - 100: 100) * 7;
    if (u > 200)b += (u < 300?u - 200: 100) * 10;
    if (u > 300)b += (u - 300) * 12;
    printf("Bill: ₹%d", b);
    return 0;
}
