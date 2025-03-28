// Среднее арифметическое ненулевых элементов
// [The Arithmetic Mean of non - zero elements].
//
// Дан вектор целых чисел. Необходимо разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов вектора.
#include "logic.h"

double calculate_arithmetical_mean_of_nonzero_elements(int* array, int size) {

	double sum = 0;
	int count = 0;



	for (int i = 0; i < size; i++)
	{
		if (array[i] != 0) {
			count++;
			sum += array[i];
		}
	}

	count > 0 ? sum / count : 0;

	return sum / count;
}
