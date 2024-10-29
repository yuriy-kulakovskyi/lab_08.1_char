#include "../include/main.h"
#include <algorithm>

int Count(char* s)
{
  int k = 0;
  int pos = 0;

  while (s[pos] != '\0') {
    if (s[pos] == s[pos + 1] && s[pos] == s[pos + 2] && s[pos] == s[pos + 3]) {
      k++;
      pos += 4;
    } else {
      pos++;
    }
  }

  return k;
}

char* Change(char* s)
{
  char* t = new char[strlen(s) + 1];
  int pos1 = 0, pos2 = 0;
  *t = '\0';

  while (s[pos1] != '\0') {
    if (s[pos1] == s[pos1 + 1] && s[pos1] == s[pos1 + 2] && s[pos1] == s[pos1 + 3]) {
      strncat(t, s + pos2, pos1 - pos2);
      strcat(t, "**");
      pos1 += 4;
      pos2 = pos1;
    } else {
      pos1++;
    }
  }

  strcat(t, s + pos2);
  strcpy(s, t);
  return t;
}