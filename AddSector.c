
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::AddSector(class CBrushSector *) */

void __thiscall CCastRay::AddSector(CCastRay *this,CBrushSector *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0xde7c0  1010  ?AddSector@CCastRay@@QAEXPAVCBrushSector@@@Z */
  if (((byte)param_1[0x44] & 0x40) == 0) {
    iVar2 = DAT_362cc0cc + 1;
    DAT_362cc0cc = iVar2;
    iVar1 = FUN_360de590((undefined4 *)&DAT_362cc0c4);
    if (iVar1 < iVar2) {
      iVar1 = FUN_360de590((undefined4 *)&DAT_362cc0c4);
      FUN_360de680(&DAT_362cc0c4,iVar1 + _DAT_362cc0d0);
    }
    *(CBrushSector **)(DAT_362cc0c8 + -4 + DAT_362cc0cc * 4) = param_1;
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x40;
  }
  return;
}

