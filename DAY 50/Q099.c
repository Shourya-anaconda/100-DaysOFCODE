/* Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 */
#include <stdio.h>
int main() {
    int d, y;
    scanf("%d/04/%d", &d, &y);
    printf("%02d-Apr-%04d", d, y);
    return 0;
}
