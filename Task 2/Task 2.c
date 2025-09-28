#include <stdio.h>
#include <locale.h>

int main()
{
	int N = 21;
	int K = 50; // Пусть это время, в которое выплнялось задание (Фиксированное)

	setlocale(LC_ALL, "RUS");

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K); //подзадание 1
	printf("Идет %d минута суток\n", N*60+K); // подзадание 2

	int h_to_midnight = 24 - N;
	int m_to_midnight = 0 - K;
	if (m_to_midnight < 0)
	{
		h_to_midnight--;
		m_to_midnight += 60;
	}
	else
	{
		m_to_midnight = K;
	}

	printf("До полуночи осталось %d часов и %d минут\n",h_to_midnight,m_to_midnight );// подзадание 3
	printf("C 8.00 прошло %d секунд\n", (N-8)*3600); // подзадание 4
		float N_day = (float)N/24;
		float K_hours = (float)K/60;
	printf("Текущий час  = %3.2f суток  и текущая минута =  %3.2f часа\n", N_day, K_hours); //подзадание 5

}