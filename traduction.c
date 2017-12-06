

#include <stdio.h>
#include <mem.h>
#include "traduction.h"


const char* traduire_bonjour(langue lng)
{
  switch (lng) {
  case anglais:
    return "Hello";
  case francais:
    return "Bonjour";
  case neerlandais:
    return "Hallo";
  case allemand:
    return "Guten Tag";
    case maori:
      return "Tena keo";
  default:
    return "?????";
  }
}

langue string_vers_langue(const char *const str)
{
  if (!strcmp(str,"anglais")) {
    return anglais;
  }
  if (!strcmp(str,"francais")) {
    return francais;
  }
  if (!strcmp(str,"neerlandais")) {
    return neerlandais;
  }
  if (!strcmp(str,"allemand")) {
    return allemand;
  }
  return inconnu;
}
