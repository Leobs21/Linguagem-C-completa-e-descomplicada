#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  time_t n;
  time(&n);
    
  int timeStr = time(&n);

  printf("%d\n", timeStr);

  return EXIT_SUCCESS;
}
