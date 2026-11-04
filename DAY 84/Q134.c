/* Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 */
#include <stdio.h>
enum Status {
    SUCCESS, FAILURE, TIMEOUT
};
int main() {
    int s;
    scanf("%d", &s);
    switch (s) {
        case SUCCESS: puts("Success");
        break;
        case FAILURE: puts("Failure");
        break;
        case TIMEOUT: puts("Timeout");
        break;
        default: puts("Invalid");
    }
    return 0;
}
