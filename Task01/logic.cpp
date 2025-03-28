// Сумма абсолютных значений отрицательных элементов 
// [The Sum of Absolute Values of negative elements]
//
// Необходимо разработать функцию (или программу), которая вычисляет 
// сумму отрицательных элементов массива, взятых по модулю, т.е. по
// абсолютному значению.

#include "logic.h"

int sum_absolute_values_of_negative_elements(int* array, int size) {

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) {

			sum = sum + -array[i];
		
		}
	}

	return sum;
}
