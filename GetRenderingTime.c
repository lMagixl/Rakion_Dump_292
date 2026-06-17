
/* public: double __thiscall CTextureEffectGlobal::GetRenderingTime(void) */

double __thiscall CTextureEffectGlobal::GetRenderingTime(CTextureEffectGlobal *this)

{
                    /* 0x9b510  2083  ?GetRenderingTime@CTextureEffectGlobal@@QAENXZ */
  return (double)*(longlong *)(DAT_362bef7c + 0x220) / (double)*(longlong *)_pTimer;
}

