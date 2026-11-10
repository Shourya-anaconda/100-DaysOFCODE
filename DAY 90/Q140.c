/* Q140: Define a struct with enum Gender and print person's gender.
 */
#include <stdio.h>
enum Gender {
    MALE, FEMALE, OTHER
};
struct Person {
    enum Gender gender;
};
int main() {
    struct Person p;
    int g;
    scanf("%d", &g);
    p.gender = g;
    if (p.gender == MALE)puts("Male"); else if (p.gender == FEMALE)puts("Female"); else puts("Other");
    return 0;
}
