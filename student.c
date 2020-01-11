#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[50];
  char lastname[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("The student is -\n");
  printf("  First Name:%s\n", student->firstname);
  printf("  Last Name:%s\n", student->lastname);
  printf("  Age:%d\n", student->age);
  printf("  id:%d\n", student->studentid);

}

int main()
{
  char studentarray[100];

  struct Student student1;
  int numberofstudents = 1;
  char tmp[100];
  char input[256];

  //student1
  strcpy(student1.firstname, "Joe");
  strcpy(student1.lastname, "Green");
  student1.age = 999;
  student1.studentid = 1029841;
  //studentarray[1] = "student1";

  printStudent(&student1);

  //adding a student
  //int adding = 1;
  while (1) {
    struct studenti;
    numberofstudents = numberofstudents + 1;

    printf("Enter a first name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", tmp);
    strcpy(student1.firstname, tmp);

    printf("Enter a last name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", tmp);
    strcpy(student1.lastname, tmp);

    printf("Enter an age:\n");
    while (1) {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", tmp) == 1) break;
      printf("Not a valid age.\n");
    }
    student1.age = tmp;

    printf("Enter an id:\n");
    while (1) {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", tmp) == 1) break;
      printf("Not a valid id.\n");
    //adding = 0;
    }
    //debugging
    //printf("%s\n",tmp);


    printf("Would you like to add another student? 1 for yes, 0 for no\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", tmp);
 
    //debugging
    //printf("%s\n",tmp);

    if (*tmp == 0) {
      break;
    }
    else if (*tmp != 1) {
      while (1) {
      printf("Please enter y or n.\n");
      fgets(input, 256, stdin);
      sscanf(input, "%d", tmp);
      
      //debugging
      //printf("%s\n",tmp);
      if (*tmp == 0) {
      break;
      }
      else if (*tmp == 1) {
      break;
      }
      
      }
      
    }
    /*
    while (1) {
      fgets(input, 256, stdin);
      if (sscanf(input, "%s", tmp) == 1) break;
      printf("Not a valid age.\n");
    }
    */
  }

  char studenttoprint[100];
  for (int i = i; i < numberofstudents; i++) {
    strcat("&student", i);
    //studenttoprint[i] = "&student1";
  }

  for (int i = 1; i < numberofstudents; i++) {
    //printStudent(&student1);
    printStudent(studenttoprint[i]);
  }

}

/* int main() {
  char input[256], name[256];
  int age;
  printf("What is your name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", name);
  printf("Hello %s. How old are you?\n", name);
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &age) == 1) break;
    printf("Not a valid age - try again!\n");
  }
*/
