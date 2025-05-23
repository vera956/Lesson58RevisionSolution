//	[The Odd Count of Digits]
//	Нечётное количество цифр
//
//	Необходимо разработать рекурсивную функцию, которая проверяет,
//	состоит ли заданное пользователем число только из нечётного 
//	количества цифр или нет. 
//	
//	У числа 1234 – количество цифр чётное (even), 
//	а у числа 12345 – количество цифр нечётное (odd). 
// 
//	Число может быть как положительным, так и отрицательным.

#include "logic.h"

int count_digits(long long number) {
	if (number >= -9 && number <= 9) {
		return 1;
	}

	return 1 + count_digits(number / 10);
}

bool is_digits_count_odd(long long number) {
	number = number < 0 ? -number : number;

	return count_digits(number) % 2 == 1;
}
