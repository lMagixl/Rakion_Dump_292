
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TRE_ShowSelection(class CTerrain const *,class CTRect &,class CTextureData
   *,unsigned long,float,enum SelectionFill,enum BufferType) */

void __cdecl
TRE_ShowSelection(CTerrain *param_1,CTRect *param_2,CTextureData *param_3,ulong param_4,
                 float param_5,SelectionFill param_6,BufferType param_7)

{
                    /* 0x174e40  3718
                       ?TRE_ShowSelection@@YAXPBVCTerrain@@AAVCTRect@@PAVCTextureData@@KMW4SelectionFill@@W4BufferType@@@Z
                        */
  DAT_36300a5c = param_1;
  DAT_36300a70 = *(undefined4 *)param_2;
  DAT_36300a74 = *(undefined4 *)(param_2 + 4);
  DAT_36300a78 = *(undefined4 *)(param_2 + 8);
  DAT_36300a7c = *(undefined4 *)(param_2 + 0xc);
  DAT_36300a60 = param_3;
  DAT_36300a64 = param_4;
  _DAT_36300a68 = param_5;
  _DAT_36300a6c = param_6;
  DAT_362a6c2c = param_7;
  DAT_36300a58 = 1;
  DAT_362a6c28 = *(undefined4 *)(_pGfx + 0xafc);
  return;
}

