/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  char username;
  int password;
  printf("enter username");
  scanf("%c",&username);
  
  if(username=='e')
   {printf("enter your password");
   scanf("%d",&password);
      if(password==12345)
      { printf("password is correct");
      }
      else
      { printf("wrong password"); }
   }
   else
   { printf("wrong username");
   }
    return 0;  
}
