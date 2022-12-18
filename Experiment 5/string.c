#include<stdio.h>
int main()
{
      char str[50]="Welcome to Miet.";
      printf("Total characters in string: 16");
      printf("\n\n");
      // characters extraction
      printf("Extracting list of 10 characters of string:-");{
      for (int i = 0; i<=10; i++) {
               if (str[i] != ' ') {
                       printf("%c", str[i]);
               }
      }    
      }
      printf("\n\n");
      printf("Extracting from specific character onwards:-");{
      for (int i = 0; i<=15; i++) {
               if (str[i] != ' ') {
                       printf("%c", str[i]);
               }
      }
      }
      printf("\n\n");
      printf("Extracting characters bt giving range in negative:-");{ 
      for (int i = -1; i<=16; i++) {
               if (str[i] != ' ') {
                        
                       printf("%c", str[i]);
               }
      }
      }
      printf("\n\n");
      return 0;
}         
