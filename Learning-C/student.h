typedef struct
{
    int day;
    int month;
    int year;
} date;

typedef struct
{
    int studentNo;
    char *firstName;
    char *lastName;
    date dateOfBirth;
    double mark;
} student;

student *createStudent(
    int studentNo,
    char *firstName,
    char *lastName,
    double mark,
    int birthYear,
    int birthMonth,
    int birthDay);

void printStudent(student *newStudent);
