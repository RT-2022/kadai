#include "DxLib.h"
#define PI 3.141592654

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK); //�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�

	if (DxLib_Init() == -1)    // �c�w���C�u��������������
	{
		return -1;    // �G���[���N�����璼���ɏI��
	}

	while (CheckHitKey(KEY_INPUT_A) == 0)
	{
		// while(����ʂ�\��ʂɔ��f, ���b�Z�[�W����, ��ʃN���A)
		//while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {

			//DrawRotaGraph(400, 200, 2.0, PI / 4, Handle, TRUE); //�摜�̕`��
		int Handle;     // �摜�i�[�p�n���h��
		Handle = LoadGraph("C:\\sozai\\pikumin.jpg"); // �摜�̃��[�h
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 128);		//�u�����h���[�h����(128/255)�ɐݒ�
		DrawGraph(0, 0, Handle, TRUE); //�摜�̕`��
		SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);		//�u�����h���[�h���I�t

		//x++;	// x��1���₷
	}


	DxLib_End(); // DX���C�u�����I������
	return 0;

}