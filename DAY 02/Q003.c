/* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and
 * breadth.
 */
#include <stdio.h>
int main() {
    float l, b;
    scanf("%f%f", &l, &b);
    printf("Area=%g, Perimeter=%g", l * b, 2 * (l + b));
    return 0;
}
