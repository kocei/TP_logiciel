
#include <stdio.h>
#include "langues.h"
#include "traduction.h"


void dire_bonjour(FILE *stream, const char *const nom, langue lng)
{
  fprintf(stream, "%s %s !\n", traduire_bonjour(lng), nom);
}
