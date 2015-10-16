#pragma once
#include "MyLib.h"
class CDxFont :public CMyLib{
private:
	LPD3DXFONT font;

public:

	CDxFont();
	CDxFont(int fontsize);
	~CDxFont();

	BOOL Create(int fontsize);
	void Draw(LPCTSTR text, int x, int y);
	void Draw(LPCTSTR text, int count,
		LPRECT pRect, DWORD Format, D3DXCOLOR Color);

	const LPD3DXFONT GetD3DXFont();
};
