#include <stdio.h>
#include <locale.h>

int main()
{
	int N = 21;
	int K = 50; // ����� ��� �����, � ������� ���������� ������� (�������������)

	setlocale(LC_ALL, "RUS");

	printf("������ %d ����� %d ����� 00 ������\n", N, K); //���������� 1
	printf("���� %d ������ �����\n", N*60+K); // ���������� 2

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

	printf("�� �������� �������� %d ����� � %d �����\n",h_to_midnight,m_to_midnight );// ���������� 3
	printf("C 8.00 ������ %d ������\n", (N-8)*3600); // ���������� 4
		float N_day = (float)N/24;
		float K_hours = (float)K/60;
	printf("������� ���  = %3.2f �����  � ������� ������ =  %3.2f ����\n", N_day, K_hours); //���������� 5

}