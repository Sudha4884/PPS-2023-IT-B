//Reading and printing students detaitls using pointer
struct student {
    char name[40];
    char roll_no[10];
    int marks;
}s1;
int main(){
    struct student *sptr;
    sptr = &s1;
    scanf("%s %s %d", &sptr->name, &sptr->roll_no, &sptr->marks);
    printf("%s %s %d", sptr->name, sptr->roll_no, sptr->marks);
}
