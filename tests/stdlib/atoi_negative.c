#include <stdlib.h>
int main(int argc, char const *argv[]) {
  char str[] = "-12";
  if (atoi(str) != -12) {
    return 1;
  }
  return 0;
}
