
#include <stdio.h>

int main(void) {

    struct student{
        char* name;
        int studentId;
        char* major;
    };

 // John Doe
struct student JohnDoe;
JohnDoe.name = "John Doe";
JohnDoe.studentId = 93;
JohnDoe.major = "Computer Science";
printf("You are %s , your Student Id is %d, and your major is in %s \n", JohnDoe.name, JohnDoe.studentId, JohnDoe.major);

// We can initialize a struct by providing the element in {}
struct student JaneDoe = {"Jane Doe", 33, "Civil Engineering"};
printf("You are %s , your Student Id is %d, and your major is in %s \n", JaneDoe.name, JaneDoe.studentId, JaneDoe.major);

    return 0;
}