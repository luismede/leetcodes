#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool main() {
  int x = 121;
  if (x < 0) return false;
  if (x < 10) return true;

  char str[15];
  snprintf(str, sizeof(str), "%d", x);
  printf("%s", typeof(str) _str = str;);
  int j = 0;
  for (int i = 0; i <= strlen(str); i--) {
      if (str[i] = str[j]) {
          j++;
          // printf("%s\n", str[i]);
          return true;
      }
  }
  return false;
}
