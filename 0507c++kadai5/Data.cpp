#include "Data.h"
#include<iostream>

//�n���ꂽ�l�������o�ϐ��ɑ������֐��i�A�N�Z�X�֐��j
void Data::SetValue(int a) {
	value = a;
}
//�����o�ϐ��̓��e���o�͂��郁���o�֐�
void Data::Disp()
{
	std::cout << "�����o�ϐ��̒l��" << value << "\n";
}
