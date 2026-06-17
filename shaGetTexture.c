
/* class CTextureObject * __cdecl shaGetTexture(long) */

CTextureObject * __cdecl shaGetTexture(long param_1)

{
  CTextureObject *pCVar1;
  
                    /* 0x8e6a0  4352  ?shaGetTexture@@YAPAVCTextureObject@@J@Z */
  if (((DAT_362c982c == 0) || (DAT_362a4344 <= param_1)) ||
     (pCVar1 = *(CTextureObject **)(DAT_362c982c + param_1 * 4), pCVar1 == (CTextureObject *)0x0)) {
    pCVar1 = (CTextureObject *)0x0;
  }
  return pCVar1;
}

