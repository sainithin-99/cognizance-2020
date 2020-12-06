#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n , ans;           //declaring variables
 printf ("enter the number gor math table");      // taking input from the users
 scanf ("%d",&n);      // storing the input
 int i;
 ans = n*i;             // answer variable operator
 for(i=1;i<=10; i++)     // for loop
    printf("%d X %d = %d\n",n,i,n*i);    // printing the answer
    return 0;
}
