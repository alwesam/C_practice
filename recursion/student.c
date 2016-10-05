#include <stdio.h>
#include <stdlib.h>

#include "structs.h"

#include "getstring.h"

#define STUDENTS 3

int main(void) {

 student students[STUDENTS];

 int i;
 for(i=0;i<STUDENTS;i++)
 {
   printf("Student's name: ");
   students[i].name = getString();
   printf("Student's dorm: ");
   students[i].dorm = getString();
 }

 FILE* file  = fopen("students.csv", "w");
 if(file != NULL)
 {
  for(i=0; i<STUDENTS; i++)
    fprintf(file,"%s,%s\n", students[i].name, students[i].dorm);
  fclose(file);
 }

 for(i=0; i<STUDENTS;i++)
 {
   free(students[i].name); 
   free(students[i].dorm); 
 }

}
