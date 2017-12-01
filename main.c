#include <stdio.h>
#include <stdlib.h>





float mass [100];
int counter = 0;
void pop (float i){
	if (counter <= 100){
	mass [counter] = i;
	counter++;
	}
}

float push (){
	if (counter >= 0)
	counter--;
	return mass [counter];
}
int main (int argc, char *argv[]){
	float p, a, b;

	p = atof (argv [1]);
	pop (p);
	p = atof (argv [2]);
	pop (p);
	switch (*argv[3]){
	case '+':
		printf ("%.1f", push () + push ());
		break;
	case '-':
		a = push ();
		b = push ();
		printf ("%.1f", b - a);
		break;
	case '/':
		a = push ();
		b = push ();
		printf ("%.1f", b / a);
		break;
	case 'a':
		printf ("%.1f", push () * push ());
		break;
	default:
		printf ("Error");
		break;
 	}

	return 0;
}
