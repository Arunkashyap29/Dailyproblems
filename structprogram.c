#include <stdio.h>
#include <string.h>

struct student {
    
    char name[20];
    int rollno;
    double phoneno;
    char dob[20];
    int age;
    char gender;
    int marks[5];
    
};


int main() {
struct student studentArrya[10];

for(int i=0; i<1; i++)
{
    printf("Enter Student %d Name, Rollno, PhoneNumber, DateofBirth, Age, Gender  \n", i+1);
    scanf("%s %d %lf %s %d %c",
    studentArrya[i].name, 
    &studentArrya[i].rollno, 
    &studentArrya[i].phoneno, 
    studentArrya[i].dob, 
    &studentArrya[i].age, 
    &studentArrya[i].gender );

         printf("Enter 5 Student Marks ");
    for(int j=0; j<5; j++)
    {

         scanf("%d",&studentArrya[i].marks[j]);
    }
}



for(int i=0; i<1; i++)
{
    
printf(" %s %d  %.0lf %s %d %c \n", 
studentArrya[i].name , 
studentArrya[i].rollno,
studentArrya[i].phoneno, 
studentArrya[i].dob, 
studentArrya[i].age, 
studentArrya[i].gender );


for(int j=0; j<5; j++)
{
printf("marks  %d\n", studentArrya[i].marks[j]);

}
}
  
  
  
    return 0;
}
