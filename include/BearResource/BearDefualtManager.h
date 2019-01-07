#pragma once 
namespace BearGraphics
{
	struct BearVertexDefault
	{
		BearCore::BearVector3<float> Position;
		BearCore::BearVector2<float> TextureUV;
	};
	class BEARGRAPHICS_API BearDefaultManager
	{
		BEAR_CLASS_STATIC(BearDefaultManager);
	public:
		static const BearVertexShaderRef&GetVertexShader(BearDefaultVertexShader type);
		static const BearPixelShaderRef&GetPixelShader(BearDefaultPixelShader type);
		static const BearVertexStateRef&GetVertexState();
		static const BearSamplerStateRef&GetSamplerState();
		static const BearTexture2DRef&GetTexture2D();
		static const BearBlendStateRef&GetBlendAlpha();
		static const BearRasterizerStateRef&GetRasterizerState();
		static void Clear();

	};
}
