#include <stdlib.h>
#include <stdio.h>
#include<string.h>
typedef struct _student {
   int  zid;            // 7-digit number
   char name[MAXNAME];  // names are stored *within* the struct
   int  prog;           // 4-digit number
   int  magic;          // random number?
} Student;
 
// return -ve if a < b, +ve if a > b, 0 if a == b
int stuCmp(Student a, Student b);
 
int main(int argc, char **argv)
{
   Student students[MAXSTUDES];
   int nstudes = 0;
   char line[MAXLINE];
   int val1;
   int val2;
   int val3;
   char val[MAXLINR];
   while(fscanf(stdin, "%d %s %d %d", &val1, line, &val2, &val3) != EOF) {
       char *t = malloc(MAXLINE);
       strcopy(t, line);
       students[nstudes] = {val1, t, val2, val3 };
       nstudes++;
   }
 
   // sort the students[] array
   qsort(students, nstudes, stuCmp);
   // print the contents of the students[] array
   for (int i = 0; i < nstudes; i++) {
       printf("%7d %-20s %4d %d\n", students[i].zid, ....);
   }
 
   return;
}