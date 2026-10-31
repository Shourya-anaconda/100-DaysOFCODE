/* Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
 * Then read them using fscanf() and display each record.
 */
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s;
    FILE * f = fopen("students.txt", "w");
    int n, i;
    if (!f)return 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%49s%d%f", s.name, &s.roll, &s.marks);
        fprintf(f, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(f);
    f = fopen("students.txt", "r"); while (fscanf(f, "%49s%d%f", s.name, &s.roll, &s.marks) == 3)printf("%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(f);
    return 0;
}
