/* An anagram of a string is another string contains same characters. Only the order of characters will be different.
   Example : abc, bac */
#include <stdio.h>
#include <string.h>

void main()
{
  char string1[100];
  char string2[100];
  int len1 = 0, len2 = 0, i;
  int count1[256];
  int count2[256];
  for(i = 0; i < 256; i ++)
  {
      count1[i] = 0;
      count2[i] = 0;
  }

  printf("Enter string 1 : ");
  scanf("%s", string1);
  len1 = strlen(string1);
  
  printf("Enter string 2 : ");
  scanf("%s", string2);
  len2 = strlen(string2);
 
  if(len1 != len2)
    printf("Not Anagrams\n");
  else
  {
    i = 0;
    while(string1[i])
    {
      ++ count1[ string1[i] ]; 
      ++ i;
    }      
    i = 0;
    while(string2[i])
    {
      ++ count2[ string2[i] ];
      ++ i;
    }
   
    int value1 = 0; int value2 = 0; int flag = 0;
    for(i = 0; i < 256; ++ i)
    {
       if( count1[i] != count2[i] )
       {
         flag = 1;
         break;
       }
    }
    if(flag != 1)
      printf("Anagrams\n");
    else
      printf("Not Anagrams\n");
   }
}
    
