#include "test.h"

// base case
void test01() {
	int array[]{ 1, -2, -3, 4, -5};
	int size = 5;
	int expected = 10;
	print_test(array, size, expected, "test01");
}

// one negative element in array
void test02() {
	int array[]{ -7 };
	int size = 1;
	int expected = 7;
	print_test(array, size, expected, "test02");
}

// one positive element is in array
void test03() {
	int array[]{ 7 };
	int size = 1;
	int expected = 0;
	print_test(array, size, expected, "test03");
}

// one zero element is in array
void test04() {
	int array[]{ 0 };
	int size = 1;
	int expected = 0;
	print_test(array, size, expected, "test04");
}

// wrong size
void test05() {
	int array[]{ 0 };
	int size = -1;
	int expected = 0;
	print_test(array, size, expected, "test05");
}

// all negative elements 
void test06() {
	int array[]{ -1, -2, -3 };
	int size = 3;
	int expected = 6;
	print_test(array, size, expected, "test06");
}

// all positive elements
void test07() {
	int array[]{ 1, 2, 3 };
	int size = 3;
	int expected = 0;
	print_test(array, size, expected, "test07");
}

// all zero elements
void test08() {
	int array[]{ 0, 0, 0 };
	int size = 3;
	int expected = 0;
	print_test(array, size, expected, "test08");
}

// only one negative element is in array
void test09() {
	int array[]{ 1, 2, -3, 4, 5 };
	int size = 5;
	int expected = 3;
	print_test(array, size, expected, "test09");
}

// only one positive element is in array
void test10() {
	int array[]{ -1, -2, 3, -4, -5 };
	int size = 5;
	int expected = 12;
	print_test(array, size, expected, "test10");
}

// all elements are equal in magnitude
void test11() {
	int array[]{ 5, -5, 5, -5 };
	int size = 4;
	int expected = 10;
	print_test(array, size, expected, "test11");
}