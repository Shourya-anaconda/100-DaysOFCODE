/* Q143: Find and print the student with the highest marks.
 */
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[100];
    int n, i, b = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%49s%d%f", s[i].name, &s[i].roll, &s[i].marks);
    for (i = 1; i < n; i++)if (s[i].marks > s[b].marks)b = i;
    printf("Topper: %s (Marks: %.0f)", s[b].name, s[b].marks);
    return 0;
}
