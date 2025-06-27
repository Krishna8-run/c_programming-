#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "This is ", str2[] = "programiz.com" ,str3[]="hello";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);
    strcat(str1,str3);
   puts(str1);
   puts(str2);

   return 0;
}
