#include <iostream>
#include "Data.h"
//���C���֐�
int main() {
	//�ϐ��@�ɓK���Ȓl����������
	int i;
	std::cin >> i;
	//Data �N���X�̃C���X�^���X�����
	Data x;
	//�����o�֐����Ăяo��
	x.SetValue(i); //�ϐ��@�̒l��n���i�A�N�Z�X�֐��j
	x.Disp(); //�\������
}

//�A�N�Z�X�֐��̕K�v��
//Data.cpp�ɂ̓����o�ϐ�value�̒l�������鏈�����Ȃ��̂ŃA�N�Z�X�֐����g�킸��x.Disp���Ăяo���ƓK���Ȓl�������Ă��܂�
//�֐�SetValue�ɒl��n�����Ƃ�x.Disp�Ő������\���ł���