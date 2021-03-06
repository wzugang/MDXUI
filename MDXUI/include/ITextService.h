
///////////////////////////////////////////////////////////////////////////////
//
// This source file is part of the MDXUI source distribution and is Copyright
// 2017-2018 by Mengjin (sh06155@hotmail.com).
// The latest version may be obtained from [******************]
//
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "DxConfig.h"
namespace DxUI{

	class CDxEffects;
	class CDxPainter;
	//+----------------------
	//
	// �ַ�����Ⱦ����
	//
	//+----------------------
	class DXUI_API ITextService
	{
	public:
		ITextService();
		~ITextService();
		virtual void	DealTextFormat(const MString& Text,const RECT& rc,ID2D1HwndRenderTarget* pRendertarget, CDxEffects* Effects,bool isMultLines = true);
	
		const std::vector<DXLineTextInfo>& GetDealResult() const;
		const std::vector<DXDrawTextInfo>& GetDrawTextInfo() const;
	private:
		std::vector<DXLineTextInfo>  mAllLineInfo;
		std::vector<DXDrawTextInfo>  mAllTextInfo;
		IDWriteTextLayout*			pTextLayout{ nullptr };
	};
}


