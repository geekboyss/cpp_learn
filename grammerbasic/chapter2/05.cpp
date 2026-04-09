#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  int hour = t / 3600;
  int minutes = t % 3600 / 60;
  int seconds = t % 60;

  printf("%d:%d:%d\n", hour, minutes, seconds);

  return 0;
}
