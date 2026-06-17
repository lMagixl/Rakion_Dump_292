
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_PrepareTexture(class CTextureData *,enum PredefinedBlendType) */

void __cdecl Particle_PrepareTexture(CTextureData *param_1,PredefinedBlendType param_2)

{
  int iVar1;
  int iVar2;
  
                    /* 0x6c2a0  2751
                       ?Particle_PrepareTexture@@YAXPAVCTextureData@@W4PredefinedBlendType@@@Z */
  gfxSetBlendType(param_2);
  if ((param_2 == 0xcb) || (param_2 == 0xce)) {
    DAT_362bf988 = 0xffffff00;
  }
  else {
    DAT_362bf988 = (param_2 == 0xca) - 1 & 0xff;
  }
  DAT_362bf9e8 = param_1;
  DAT_362bf9ec = 0;
  CTextureData::SetAsCurrent(param_1,0,0);
  _DAT_362bf9bc = *(int *)(DAT_362bf9e8 + 0x20);
  _DAT_362bf9b8 = *(int *)(DAT_362bf9e8 + 0x24);
  _DAT_362bf9b4 = _DAT_36223384 / (float)_DAT_362bf9bc;
  iVar2 = DAT_362bf9f8 + 4;
  _DAT_362bf9b0 = _DAT_36223384 / (float)_DAT_362bf9b8;
  DAT_362bf9f8 = iVar2;
  iVar1 = FUN_36061fd0((undefined4 *)&DAT_362bf9f0);
  if (iVar1 < iVar2) {
    iVar1 = FUN_36061fd0((undefined4 *)&DAT_362bf9f0);
    FUN_36062460(&DAT_362bf9f0,iVar1 + ((int)(3 / (longlong)DAT_362bf9fc) + 1) * DAT_362bf9fc);
  }
  if ((DAT_362bf988 == 0) && ((DAT_362bf9d4 != 0 || (DAT_362bf9d8 != 0)))) {
    DAT_362bf9e4 = 0;
    DAT_362bf9e0 = 1;
    return;
  }
  DAT_362bf9e0 = 0;
  DAT_362bf9e4 = 0;
  return;
}

