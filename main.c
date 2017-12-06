
#include <stdio.h>
#include "hello.h"



int main(int argc, char *argv[])
{
  
  if (argc != 3) {
    printf ("Veuillez entrer un nom et une langue.\n");
    return 1;
  }

  dire_bonjour(stdout,argv[1],string_vers_langue(argv[2]));
  
  return 0;
}
