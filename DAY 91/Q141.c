/* Q141: Define a structure Student with name, roll_no, and marks, then read and print one
 * student's data.
 */
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s;
    scanf("%49s%d%f", s.name, &s.roll, &s.marks);
    printf("Name: %s | Roll: %d | Marks: %g", s.name, s.roll, s.marks);
    return 0;
}
