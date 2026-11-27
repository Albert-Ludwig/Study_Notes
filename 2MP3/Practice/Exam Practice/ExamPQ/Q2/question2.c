//File I/O
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

float avgCSV (char* inputName);


int main () {
	printf("%f\n", avgCSV("sample_data.csv"));
	// Expected Value = 523.899109
	printf("%f\n", avgCSV("sample_data_2.csv"));
	// Expected Value = 506.371246
}