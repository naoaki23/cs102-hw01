#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	double num1 = atof(argv[2]);
	double num2 = atof(argv[3]);

    if(argv[1][0] == "+") {
    	printf("%lf\n", num1 + num2);
    } else if(argv[1][0] == "-") {
    	printf("%lf\n", num1 - num2);
    } else if(argv[1][0] == "x") {
    	printf("%lf\n", num1 * num2);
    } else if(argv[1][0] == "/") {
    	printf("%lf\n", num1 / num2);
    }
	return 0;
}