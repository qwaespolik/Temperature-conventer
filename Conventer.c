#include <stdio.h>
#include <stdlib.h>

int main()
{

float temp, K, C, F, f,c ,k;
char sys;
printf ("Temperature conventer \n");

printf ("Hello user \n");

printf (" Enter the unit of measure ");
scanf ("%f",&temp);
if (getchar() == '\n')
sys = 0;
else
scanf ("%c", &sys);

switch (sys){
case 'C':
K = temp + 273.15;
F = temp * 1.8 + 32.0;


printf ("%.2f F\n%.2f K",K, F);
break;

case 'c':
K = temp + 273.15;
F = temp * 1.8 + 32.0;
printf ("%.2f F\n%.2f K",K, F);
break;

case 'F':
K = (5.0/9.0) * (temp - 32.0) + 273.15;
C = (5.0/9.0) * (temp - 32.0);

printf ("%.2f C\n%.2f K",K, C);
break;

case 'f':
K = (5.0/9.0) * (temp - 32.0) + 273.15;
C = (5.0/9.0) * (temp - 32.0);

printf ("%.2f C\n%.2f K",K, C);
break;

case 'K':
C = temp - 273.15;
F = 9.0 * (temp - 273.15)/5.0 + 32.0;
printf ("%.2f C\n%.2f F",C, F);
break;
case 'k':
C = temp - 273.15;
F = 9.0 * (temp - 273.15)/5.0 + 32.0;
printf ("%.2f C\n%.2f F",C, F);

break;
default:
F = temp * 1.8 + 32.0;
K = temp + 273.15;
printf ("%.2f C: \n%.2f F\n%.2f K\n\n",temp, F, K);


C = (5.0/9.0) * (temp - 32.0);
K = (5.0/9.0) * (temp - 32.0) + 273.15;
printf ("%.2f F: \n%.2f C\n%.2f K\n\n",temp, C, K);

C = temp - 273.15;
F = 9.0 * (temp - 273.15)/5.0 + 32.0;
printf ("%.2f K: \n%.2f C\n%.2f F\n\n",temp, C, F);
break;
}
getchar();getchar();
return 0;
}
