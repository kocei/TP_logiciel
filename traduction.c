

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
  case espagnol:
    return "Hola";
  case suedois:
    return "Halla"
  case yoruba:
    return "E ku aaro"
  case lithanien:
   return "Sveikas"
  case thai:
   return "Sawatdi"
  case zoulou:
   return "Sawubona"

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
  if (!strcmp(str,"espagnol")) {
    return espagnol;
  }
  return inconnu;
}
