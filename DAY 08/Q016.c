/* Q16: Write a program to input three numbers and find the largest among them using if–else.
 */
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a<b)
    {
        if(b<c) printf("Largest is %d", c);
        else printf("Largest is %d", b);
    }
    else if(a<c) printf("Largest is %d", c);
    else printf("Largest is %d", a);
    
    return 0;
}
