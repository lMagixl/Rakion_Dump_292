
/* void __cdecl shaSetTexture(class CTextureData *,long) */

void __cdecl shaSetTexture(CTextureData *param_1,long param_2)

{
                    /* 0x8fdb0  4393  ?shaSetTexture@@YAXPAVCTextureData@@J@Z */
  if (param_1 == (CTextureData *)0x0) {
    shaDisableTexture(param_2);
    return;
  }
  if (param_2 != -1) {
    shaSetTextureUnit(param_2);
  }
  CTextureData::SetAsCurrent(param_1,0,0);
  return;
}

