#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include"EAO.h"
#include"Difficult.h"


int mode;

//��ܨ禡
void choose_mode(void);
void AB_decide(void);

//�P�_�禡
void Easy_mode(void);
void Ordinary_mode(void);
void Difficult_mode(void);

int main(void)
{
	printf("�w��i�JAB�Ʀr�q�q��!\n");
	choose_mode();
	AB_decide();

	system("pause");
	return 0;
}

void choose_mode(void)
{
	do {
		printf("�Ҧ����:(��1²��Ҧ�  ��2���q�Ҧ�  ��3�x���Ҧ�)\n");
		scanf_s("%d", &mode);
		if (mode == 1) {
			printf("-----------------------------------------------------------\n");
			printf("\n\n\n%28s\n", "²��Ҧ�");
			printf("\n��3�ӼƦr�B5�^�X�A�Y�z�q������Ʀr���X�h���A�A���~�h���B\n");
		}
		else if (mode == 2)
		{
			printf("-----------------------------------------------------------\n");
			printf("\n\n\n%28s\n", "���q�Ҧ�");
			printf("\n��4�ӼƦr�B6�^�X�A�Y�z�q������Ʀr���X�h���A�A���~�h���B\n");
		}
		else if (mode == 3)
		{
			printf("-----------------------------------------------------------\n");
			printf("\n\n\n%28s\n", "�x���Ҧ�");
			printf("\n��5�ӼƦr�B7�^�X�A�Y�z�q�������m�B�Ʀr���X�h���A�A���~�h���B\n");
		}
		else
		{
			printf("\n��J���~�A�Э��s��J!\n\n");
		}
	} while (mode != 1 && mode != 2 && mode != 3);

}

void AB_decide(void){
	switch (mode)
	{
	case 1:
		Easy_mode();
		break;

	case 2:
		Ordinary_mode();
		break;

	case 3:
		Difficult_mode();
		break;
		}
	}



