#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
  //REMEMBER TO USE "man" COMMAND TO SHOW THE LIBRARY IN TERMINAL!!!

  // Open and read file.
  // Do some getchar stuff.
  // getchar() = int a 
  char line1[200]; 

  FILE * fileinput = stdin;
  FILE * fileoutput;
  //  printf("Enter a file name to read from.\n");
  //scanf("%s", &line1);
  argv[0] = line1;
  printf("line1 is %s", line1);
  fileinput = fopen(line1, "r");             
  fileoutput = fopen(argv[0], "w");

  int ltr1, ltr2;
  ltr1 = getchar();
  while (ltr1 != EOF)
    {
      if ((isupper (ltr1)) == 0)
        {
          tolower (ltr1);
          fprintf (fileoutput, "%u", ltr1);
        }
    }
  return 0;
}
