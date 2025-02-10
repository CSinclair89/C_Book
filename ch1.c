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
	printf("Temperature Conversion: Fahrenheit to Celsius:\n");
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
	printf("Temperature Conversion: Celsius to Fahrenheit:\n");
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

void tempConversion3() {
	float fahr, cels;
	int lower = 0, upper = 5, step = 1;
	printf("Temperature Conversion: Celsius to Fahrenheit (reverse order):\n");
	cels = upper;
	while (cels >= lower) {
		fahr = (cels * (9.0/5.0)) + 32;
		printf("Celsius: %.0f\t\tFahrenheit: %.1f\n", cels, fahr);
		cels -= step;
	}
}


/*
 * Exercise 1-6
 */

void fileCopying1() {
	printf("Either enter a character below or press Ctrl+D for no characters:\n");
	int c = getchar() != EOF;
	printf("getchar = %d\n", c);
}

/*
 * Exercise 1-7
 */

void fileCopying2() {
	int c = EOF;
	printf("getchar = %d\n", c);
}

/*
 * Exercise 1-8
 */

void charCounting1() {
	int blankCount = 0, tabCount = 0, lineCount = 1;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\n') lineCount++;
		if (c == '\t') tabCount++;
		if (c == ' ') blankCount++;
	}
	printf("\n");
	printf("Number of blanks = %d\n", blankCount);
	printf("Number of tabs = %d\n", tabCount);
	printf("Number of lines = %d\n", lineCount);	
}

/*
 * Exercise 1-9
 */

void charCounting2() {
	int c, prev = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ' || prev != ' ') putchar(c);
		prev = c;
	}
	printf("\n");
}

/*
 * Exercise 1-10
 */

void charCounting3() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else putchar(c);
	}
	printf("\n");
}

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
	tempConversion3();
//	fileCopying1();
//	fileCopying2();
//	charCounting1();
//	charCounting2();
	charCounting3();
	return 0;
}
