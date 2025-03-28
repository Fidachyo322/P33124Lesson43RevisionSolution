// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее aрифметическое элементов
// вектора без учета минимального и максимального элементов.

#include "logic.h"

int get_min(int* array, int count) {
	int min = array[0];
	for (int i = 0; i < count; i++)
	{
		if (array[i] < min) {
			min = array[i];
		}
	}
}


int get_max(int* array, int count) {
	int max = array[0];
	for (int i = 0; i < count; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}
	}
}

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {

	double sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > get_min(array, count) && array[i] <= get_max(array, count))
		{
			sum += array[i];
		}
	}

	return sum / count;
}