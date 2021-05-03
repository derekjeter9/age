#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name;
   int age;

   printf("Enter your name: ");
   scanf("%s",&name);

   printf("Enter your age: ");
   scanf("%d",&age);

   if (age > 18){
    printf("user is eligble to vote");
   }
   else {
    printf("user is not eligble to vote");

    }



}
