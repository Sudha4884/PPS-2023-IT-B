#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks[6];
};
float cal_Avg(struct Student student) {
    float sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += student.marks[i];}
    return sum / 6;
}
int main() {
    struct Student students[60];
    for (int i = 0; i < 60; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks for 6 subjects:\n");
        for (int j = 0; j < 6; ++j) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }
    printf("\n%-20s %-15s %-15s", "Names", "Roll Numbers", "Average Marks");
    for (int i = 0; i < 60; ++i) {
        printf("\n%-20s %-15d %-15.2f", students[i].name, students[i].rollNumber, cal_Avg(students[i]));}
    return 0;
}
