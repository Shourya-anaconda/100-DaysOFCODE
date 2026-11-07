/* Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 */
#include <stdio.h>
enum Role {
    ADMIN, USER, GUEST
};
int main() {
    int r;
    scanf("%d", &r);
    switch (r) {
        case ADMIN: puts("Admin access");
        break;
        case USER: puts("User access");
        break;
        case GUEST: puts("Guest access");
        break;
        default: puts("Invalid role");
    }
    return 0;
}
