/* Q121: Write a C program that creates a text file named info.txt in write mode. The program
 * should take the user’s name and age as input, and write them to the file using
 * fprintf(). After writing, display a message confirming that the data was successfully
 * saved.
 */
#include <stdio.h>
int main() {
    char name[100];
    int age;
    FILE * f;
    scanf("%99s%d", name, &age);
    f = fopen("info.txt", "w");
    if (!f)return 1;
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    puts("Data saved successfully");
    return 0;
}
