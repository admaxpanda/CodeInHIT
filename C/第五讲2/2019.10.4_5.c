#include <stdio.h>
  int main()
  {
      int x, y, z;
      for (x=0; x*5<=100; x++)
      {
          for (y=0;x*5+y*3<=100; y++)
          {
              z = 100 - x - y;
              if (5*x + 3*y + z/3.0 == 100.0)
              {
                  printf("x=%d, y=%d, z=%d\n", x, y, z);
              }
          }
      }
      return 0;
  }
