
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaCalculateLightForSpecular(void) */

void __cdecl shaCalculateLightForSpecular(void)

{
  int iVar1;
  int iVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  float local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
                    /* 0x90a10  4303  ?shaCalculateLightForSpecular@@YAXXZ */
  iVar7 = DAT_362a433c;
  DAT_362c9954 = DAT_362a433c;
  iVar1 = FUN_36061f90((undefined4 *)&DAT_362c994c);
  if (iVar1 < iVar7) {
    iVar1 = FUN_36061f90((undefined4 *)&DAT_362c994c);
    FUN_360622b0(&DAT_362c994c,iVar1 + ((iVar7 + -1) / DAT_362c9958 + 1) * DAT_362c9958);
    iVar7 = DAT_362a433c;
  }
  FUN_360605c0(&local_28,DAT_362a4368);
  uVar5 = DAT_362c9948;
  local_14 = DAT_362c9944;
  local_18 = DAT_362c9948;
  FUN_360605c0(&local_20,DAT_362c9834);
  local_28 = (byte)((local_20 & 0xff) * (uint)local_28 >> 8);
  local_27 = (byte)((local_20 >> 8 & 0xff) * (uint)local_27 >> 8);
  local_26 = (byte)((local_20._2_2_ & 0xff) * (uint)local_26 >> 8);
  uVar6 = uVar5 & 0xff;
  uVar5 = uVar5 >> 8 & 0xff;
  uVar4 = local_18 >> 0x10 & 0xff;
  local_25 = (byte)((uint)(local_20._2_2_ >> 8) * (uint)local_25 >> 8);
  local_1c = uVar6;
  local_18 = uVar4;
  iVar1 = shaOverBrightningEnabled();
  if (iVar1 == 0) {
    local_1c = uVar6 * 2;
    local_18 = uVar4 * 2;
    uVar5 = uVar5 * 2;
    sVar3 = 7;
  }
  else {
    if (0x7f < uVar6) {
      local_1c = 0x7f;
    }
    if (0x7f < uVar5) {
      uVar5 = 0x7f;
    }
    if (0x7f < uVar4) {
      local_18 = 0x7f;
    }
    sVar3 = 8;
  }
  iVar1 = 0;
  if (0 < iVar7) {
    pfVar8 = (float *)(DAT_362c9810 + 8);
    do {
      local_24 = pfVar8[-2] * DAT_362c9868 + *pfVar8 * DAT_362c9870 + pfVar8[-1] * DAT_362c986c;
      if (local_24 < _DAT_3622376c) {
        local_24 = 0.0;
      }
      else if (local_24 < _DAT_36223384 == (local_24 == _DAT_36223384)) {
        local_24 = 1.0;
      }
      iVar7 = (int)ROUND(local_24 * 255.0);
      iVar2 = (int)((((int)((local_14 & 0xff) * iVar7) >> sVar3) + local_1c) * (uint)local_28) >> 8;
      if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(DAT_362c9950 + iVar1 * 4) = (char)iVar2;
      iVar2 = (int)((((int)((local_14 >> 8 & 0xff) * iVar7) >> sVar3) + uVar5) * (uint)local_27) >>
              8;
      if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(DAT_362c9950 + 1 + iVar1 * 4) = (char)iVar2;
      iVar2 = (int)((((int)((local_14 >> 0x10 & 0xff) * iVar7) >> sVar3) + local_18) *
                   (uint)local_26) >> 8;
      if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(DAT_362c9950 + 2 + iVar1 * 4) = (char)iVar2;
      pfVar8 = pfVar8 + 3;
      *(char *)(DAT_362c9950 + 3 + iVar1 * 4) = (iVar7 < 1) + -1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_362a433c);
    DAT_362c9864 = DAT_362c9950;
    return;
  }
  DAT_362c9864 = DAT_362c9950;
  return;
}

