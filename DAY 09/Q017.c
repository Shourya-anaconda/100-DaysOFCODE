/* Q17: Write a program to find the roots of a quadratic equation and categorize them.
 */
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d, x, y;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        x = ( - b + sqrt(d)) / (2 * a);
        y = ( - b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %g, %g", x, y);
    } 
    else if (d == 0)printf("Roots are real and same: %g", - b / (2 * a)); 
    else printf("Roots are complex");
    return 0;
}
