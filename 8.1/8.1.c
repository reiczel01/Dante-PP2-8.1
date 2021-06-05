#include <stdio.h>
int is_equal(int a, int b) {
	if ((a^b)) {
		return 0;
	}
	
		return 1;
	
}
int is_negative(int value) {
	if ((value & 0x80000000)) {
		return 1;
	}
	
		return 0;
	
}

int main() {
	int a;
	int b;
	int retVal = 2;
	
	printf("Podaj dwie liczby: ");

	
	if(!is_equal(scanf("%d %d", &a, &b), retVal)){
		printf("incorrect input");
		return 1;
	}
	
	if (is_equal(a, b)) {
		printf("rowne\n");
	}
	else {
		printf("nierowne\n");
	}

	if (is_negative(a)) {
		printf("ujemna ");
	}
	else {
		printf("nieujemna ");
	}

	if (is_negative(b)) {
		printf("ujemna ");
	}
	else {
		printf("nieujemna ");
	}
	return 0;
}