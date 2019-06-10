
// teratail194066Dlg.h : ヘッダー ファイル
//

#pragma once


// Cteratail194066Dlg ダイアログ
class Cteratail194066Dlg : public CDialogEx
{
// コンストラクション
public:
	Cteratail194066Dlg(CWnd* pParent = nullptr);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TERATAIL194066_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
private:
	HWINEVENTHOOK m_event;
	static void CALLBACK WinEventProc(HWINEVENTHOOK hWinEventHook, DWORD event, HWND hwnd,LONG idObject, LONG idChild, DWORD idEventThread, DWORD dwmsEventTime);
};
