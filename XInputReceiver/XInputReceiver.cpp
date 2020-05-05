// XInputReceiver.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <Xinput.h>

#pragma comment (lib, "xinput.lib")

int main()
{
	XINPUT_STATE state;

	while (true)
	{
		ZeroMemory(&state, sizeof(XINPUT_STATE));

		auto result = XInputGetState(0, &state);
		if (result != ERROR_SUCCESS) return 0;

		printf("bLeftTrigger=%d\n", state.Gamepad.bLeftTrigger);
		printf("bRightTrigger=%d\n", state.Gamepad.bRightTrigger);
		printf("sThumbLX=%d\n", state.Gamepad.sThumbLX);
		printf("sThumbLY=%d\n", state.Gamepad.sThumbLY);
		printf("sThumbRX=%d\n", state.Gamepad.sThumbRX);
		printf("sThumbRY=%d\n", state.Gamepad.sThumbRY);

		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_A)
		{
			printf("push XINPUT_GAMEPAD_A\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_B)
		{
			printf("push XINPUT_GAMEPAD_B\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_X)
		{
			printf("push XINPUT_GAMEPAD_X\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_Y)
		{
			printf("push XINPUT_GAMEPAD_Y\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_START)
		{
			printf("push XINPUT_GAMEPAD_START\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_BACK)
		{
			printf("push XINPUT_GAMEPAD_BACK\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_DOWN)
		{
			printf("push XINPUT_GAMEPAD_DPAD_DOWN\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_LEFT)
		{
			printf("push XINPUT_GAMEPAD_DPAD_LEFT\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT)
		{
			printf("push XINPUT_GAMEPAD_DPAD_RIGHT\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_UP)
		{
			printf("push XINPUT_GAMEPAD_DPAD_UP\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_SHOULDER)
		{
			printf("push XINPUT_GAMEPAD_LEFT_SHOULDER\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_THUMB)
		{
			printf("push XINPUT_GAMEPAD_LEFT_THUMB\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_SHOULDER)
		{
			printf("push XINPUT_GAMEPAD_RIGHT_SHOULDER\n");
		}
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_THUMB)
		{
			printf("push XINPUT_GAMEPAD_RIGHT_THUMB\n");
		}

		Sleep(1000);
	}
}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
