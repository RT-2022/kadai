#include "DxLib.h"
#define PI 3.141592654

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK); //ウィンドウモード変更と初期化と裏画面設定

	if (DxLib_Init() == -1)    // ＤＸライブラリ初期化処理
	{
		return -1;    // エラーが起きたら直ちに終了
	}

	while (CheckHitKey(KEY_INPUT_A) == 0)
	{
		// while(裏画面を表画面に反映, メッセージ処理, 画面クリア)
		//while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {

			//DrawRotaGraph(400, 200, 2.0, PI / 4, Handle, TRUE); //画像の描画
		int Handle;     // 画像格納用ハンドル
		Handle = LoadGraph("C:\\sozai\\pikumin.jpg"); // 画像のロード
		SetDrawBlendMode(DX_BLENDMODE_ALPHA, 128);		//ブレンドモードをα(128/255)に設定
		DrawGraph(0, 0, Handle, TRUE); //画像の描画
		SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);		//ブレンドモードをオフ

		//x++;	// xを1増やす
	}


	DxLib_End(); // DXライブラリ終了処理
	return 0;

}