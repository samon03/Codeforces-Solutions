#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char str[100];
   gets(str);
   int i , up = 0 , low = 0;
   int len = strlen(str);
   for(i = 0; i < len; i++)
   {
       if(str[i] >= 'A' && str[i] <= 'Z')
       {
           up++;
       }
       else if(str[i] >= 'a' && str[i] <= 'z')
       {
           low++;
       }
   }
   for(i = 0; i < len; i++)
   {
      if(up > low)
      {
           if(str[i] >= 'a' && str[i] <= 'z')
           {
               str[i] -= 32;
           }
      }
      else if(up < low)
      {
          if(str[i] >= 'A' && str[i] <= 'Z')
           {
               str[i] += 32;
           }
      }
      else if(up == low)
      {
          if(str[i] >= 'A' && str[i] <= 'Z')
           {
               str[i] += 32;
           }
      }
   }
    puts(str);
    return 0;
}
