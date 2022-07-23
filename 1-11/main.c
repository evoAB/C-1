/*
WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hh,mm;
    printf("Enter time in HH:MM format : ");
    scanf("%d:%d",&hh,&mm);
    printf("\"%d:%d\" converted to \"%d Hour and %d Minute\"",hh,mm,hh,mm);
    return 0;
}
