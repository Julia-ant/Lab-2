#include <stdio.h>
#include <locale.h>

int main()
{
	int N = 21;
	int K = 50; // Пусть это время, в которое выплнялось задание (Фиксированное)

	setlocale(LC_ALL, "RUS");

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K); //подзадание 1
	printf("Идет %d минута суток\n", N*60+K); // подзадание 2

	int h_to_midnight = 23 - N;
	int m_to_midnight = 60 - K;

	h_to_midnight = (h_to_midnight + (m_to_midnight==0? -1 : 0));
	
	printf("До полуночи осталось %d часов и %d минут\n",h_to_midnight,m_to_midnight );// подзадание 3

	printf("C 8.00 прошло %d секунд\n", ((N-8)*3600 + K*60 +((N-8)<0)*0)); // подзадание 4

	double N_day = N/24.;
	double K_hours =K/60.;
	printf("Текущий час  = %3.2f суток  и текущая минута =  %3.2f часа\n", N_day, K_hours); //подзадание 5
