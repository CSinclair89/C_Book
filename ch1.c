#include <stdio.h>

/*
 * Exercise 1-1
 */

void helloworld() {
	printf("hello world\n");
}

/*
 * Exercise 1-2 | Meant to create error due to unrecognized escape char
 */

void escapeChar() {
	printf("hello\tworld\n");
}

/*
 * Exercise 1-3
 */

void tempConversion1() {
	float fahr, cels;
	int lower = 0, upper = 100, step = 20;
	printf("Temperature Conversion: Fahrenheit to Celsius\n");
	while (fahr <= upper) {
		cels = (5.0 / 9.0) * (fahr - 32.0);
		printf("Fahrenheit: %.0f\t\tCelsius: %.2f\n", fahr, cels);
		fahr += step;
	}
}

/*
 * Exercise 1-4
 */

void tempConversion2() {
	float fahr, cels;
	int lower = 0, upper = 5, step = 1;
	printf("Temperature Conversion: Celsius to Fahrenheit\n");
	cels = 0.0;
	while (cels <= upper) {
		fahr = (cels * (9.0/5.0)) + 32;
		printf("Celsius: %.0f\t\tFahrenheit: %.1f\n", cels, fahr);
		cels += step;
	}
}


/*
 * Exercise 1-5
 */

/*
 * Exercise 1-6
 */

/*
 * Exercise 1-7
 */

/*
 * Exercise 1-8
 */

/*
 * Exercise 1-9
 */

/*
 * Exercise 1-10
 */

/*
 * Exercise 1-11
 */

/*
 * Exercise 1-12
 */

/*
 * Exercise 1-13
 */

/*
 * Exercise 1-14
 */

/*
 * Exercise 1-15
 */

/*
 * Exercise 1-16
 */

/*
 * Exercise 1-17
 */

/*
 * Exercise 1-18
 */

/*
 * Exercise 1-19
 */

/*
 * Exercise 1-20
 */

/*
 * Exercise 1-21
 */

/*
 * Exercise 1-22
 */

/*
 * Exercise 1-23
 */

/*
 * Exercise 1-24
 */


int main() {
	helloworld();
	escapeChar();
	tempConversion1();
	tempConversion2();

	return 0;
}
