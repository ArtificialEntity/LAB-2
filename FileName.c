#include <stdio.h>
#include <locale.h>

float main()
{
	setlocale(LC_CTYPE, "RUS");

	printf("� ���� �������� ���������� ��������, ��� ������ ������� ����� ��������� ��� �� 45 ����,\n� ������ �� 30 ���� ��� ���������� ��������.\n���������� ������� ���� ����������� ��� ������������� ����� ���� ���� �������� ������");

	float BRIGADE_ONE = 45;
	float BRIGADE_TWO = 30;
	float BRIGADE_ONE_WORK = 1 / BRIGADE_ONE;
	float BRIGADE_TWO_WORK = 1 / BRIGADE_TWO;
	float BRIGADE_TWO_AND_ONE_WORK = BRIGADE_ONE_WORK + BRIGADE_TWO_WORK;
	float ANSWER = 1 / BRIGADE_TWO_AND_ONE_WORK;

	getchar();

	printf("\n�����: %f", ANSWER);

	return 0;
}