/* Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers,
 * compute their sum and average, and print both.
 */
#include <stdio.h>
int main() {
    FILE * f = fopen("numbers.txt", "r");
    int x, n = 0;
    long long sum = 0;
    if (!f)return 1; while (fscanf(f, "%d", &x) == 1) {
        sum += x;
        n++;
    }
    if (n)printf("Sum=%lld Average=%.2f", sum, (double)sum / n);
    fclose(f);
    return 0;
}
