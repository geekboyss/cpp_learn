#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  char c;
  cin >> c;

  printf("  %c\n", c);
  printf(" %c%c%c\n", c, c, c);
  printf("%c%c%c%c%c\n", c, c, c, c, c);
  printf(" %c%c%c\n", c, c, c);
  printf("  %c\n", c);

  return 0;
}
