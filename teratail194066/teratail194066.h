
// teratail194066.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// Cteratail194066App:
// このクラスの実装については、teratail194066.cpp を参照してください
//

class Cteratail194066App : public CWinApp
{
public:
	Cteratail194066App();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern Cteratail194066App theApp;
