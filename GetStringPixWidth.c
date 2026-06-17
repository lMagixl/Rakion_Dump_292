
/* long __cdecl GetStringPixWidth(class CTString const &) */

long __cdecl GetStringPixWidth(CTString *param_1)

{
  CFontTexture *this;
  ulong uVar1;
  
                    /* 0x187f40  2144  ?GetStringPixWidth@@YAJABVCTString@@@Z */
  this = CFontTexture::getInstance();
  uVar1 = CFontTexture::getTextWidth(this,param_1);
  return uVar1;
}

