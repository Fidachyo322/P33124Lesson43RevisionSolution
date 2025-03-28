#include "test.h"

// base case
void test01() {
	int array[]{ 1, 0, 2, 0, 3 };
	int size = 5;
	double expected = 2.0;
	print_test(array, size, expected, "test01");
}

// wrong size
void test02() {
	int array[]{ 0 };
	int size = 0;
	double expected = 0.0;
	print_test(array, size, expected, "test02");
}

// wrong size
void test03() {
	int array[]{ 0 };
	int size = -1;
	double expected = 0.0;
	print_test(array, size, expected, "test03");
}

// all positive elements
void test04() {
	int array[]{ 1, 2, 3 };
	int size = 3;
	double expected = 2.0;
	print_test(array, size, expected, "test04");
}

// all zero elements
void test05() {
	const int SIZE = 5;
	int array[SIZE]{};
	double expected = 0.0;
	print_test(array, SIZE, expected, "test05");
}

// all negative elements
void test06() {
	int array[]{ -1, -2, -3};
	int size = 3;
	double expected = -2.0;
	print_test(array, size, expected, "test06");
}

// all non-zero elements
void test07() {
	int array[]{ 1, -2, 3, -4, 5, -6};
	int size = 6;
	double expected = -0.5;
	print_test(array, size, expected, "test07");
}

// only one positive element
void test08() {
	int array[]{ 7 };
	int size = 1;
	double expected = 7.0;
	print_test(array, size, expected, "test08");
}

// only one negative element
void test09() {
	int array[]{ -7 };
	int size = 1;
	double expected = -7.0;
	print_test(array, size, expected, "test09");
}

// only one zero element
void test10() {
	int array[]{ 0 };
	int size = 1;
	double expected = 0.0;
	print_test(array, size, expected, "test10");
}

// one positive and one zero elements
void test11() {
	int array[]{ 7, 0 };
	int size = 2;
	double expected = 7.0;
	print_test(array, size, expected, "test11");
}

// one negative and zero elements
void test12() {
	int array[]{ 0, -7 };
	int size = 2;
	double expected = -7.0;
	print_test(array, size, expected, "test12");
}

// one positive and one zero elements
void test13() {
	int array[]{ -5, 7 };
	int size = 2;
	double expected = 1.0;
	print_test(array, size, expected, "test13");
}