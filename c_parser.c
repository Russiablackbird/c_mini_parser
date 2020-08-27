#include "string.h"

uint32_t Pos(const char *Substr, const char *S)
{
  return (uint32_t)(strstr(S, Substr) - S);
}

void *Parse(const char *str, const char *str2, const char *ob, const char *dest)
{
  uint32_t len = strlen(str);
  return memcpy((uint32_t *)dest, (uint32_t *)((Pos(str, ob) + len) + (uint32_t)ob), Pos(str2, ob + (Pos(str, ob) + len)));
}
