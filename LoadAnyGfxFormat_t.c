
/* public: void __thiscall CImageInfo::LoadAnyGfxFormat_t(class CTFileName const &) */

void __thiscall CImageInfo::LoadAnyGfxFormat_t(CImageInfo *this,CTFileName *param_1)

{
  CTFileName *pCVar1;
  long lVar2;
  
                    /* 0x8d1c0  2544  ?LoadAnyGfxFormat_t@CImageInfo@@QAEXABVCTFileName@@@Z */
  pCVar1 = param_1;
  lVar2 = GetGfxFileInfo_t(this,param_1);
  if (lVar2 == 1) {
    LoadPCX_t(this,pCVar1);
  }
  else {
    if (lVar2 == 2) {
      LoadTGA_t(this,pCVar1);
      return;
    }
    if (lVar2 == 0) {
      param_1 = (CTFileName *)s_Gfx_format_not_supported__3622de20;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
    }
  }
  return;
}

