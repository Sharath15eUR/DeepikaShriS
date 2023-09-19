#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number); 
if (number > 0)
    printf("Positive number.");
else if (number < 0)
    printf("Negative number.");
else
    printf("The number is 0.");
return 0;
}