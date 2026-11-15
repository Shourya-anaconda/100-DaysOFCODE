/* Q145: Return a structure containing top student's details from a function.
 */
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student topper(struct Student s[], int n) {
    int i, b = 0;
    for (i = 1; i < n; i++)if (s[i].marks > s[b].marks)b = i;
    return s[b];
}
int main() {
    struct Student s[100], t;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%49s%d%f", s[i].name, &s[i].roll, &s[i].marks);
    t = topper(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %.0f", t.name, t.roll, t.marks);
    return 0;
}
