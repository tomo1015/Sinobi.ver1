//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//メインクラス
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#pragma once
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//インクルードファイル
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#include <windows.h>
#include <tchar.h>
#include <wrl.h>		// Microsoft::WRL::ComPtr
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//マクロ定義
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#define WINDOW_CLASS _T("Sinobi")
#define WINDOW_TITLE WINDOW_CLASS
#define WINDOW_STYLE WS_OVERLAPPEDWINDOW
#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080