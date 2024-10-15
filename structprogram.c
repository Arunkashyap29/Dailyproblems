#include <stdio.h>
#include <string.h>

struct student {
    
    char name[20];
    int rollno;
    double phoneno;
    char dob[20];
    int age;
    char gender;
    
};


int main() {
    
    struct student arun ={"arun", 123, 9582478893, "29 july 2000", 24 , 'M'};

    printf("name : %s \n ", arun.name);       
printf("Date Of birth : %s \n ", arun.dob);

printf("Roll Number  : %d \n ", arun.rollno);
printf("phone : %.0f \n ", arun.phoneno);


printf("age : %d \n ", arun.age);

printf("gender : %c \n ", arun.gender);






    return 0;
}
