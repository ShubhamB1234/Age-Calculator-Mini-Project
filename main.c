#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{int day;
int month;
int year;
printf("Please enter your birthday in this format:XX/XX/XXX\n");
int check = scanf("%d/%d/%d",&month,&day,&year);
if (check !=3)
{printf("Please enter numbers only for the input\n\n");
return 0;
}
else if (month > 12|| day > 31)
{printf("Please make sure the day and month are within specified range!\n\n");
}
else
{int age=2022-year;
if (month > 3)
{age--;
}
else if (month==3)
{if (day>14)
{age--;
}
}
printf("You are %d years old\n\n",age);
}
return 0;
}