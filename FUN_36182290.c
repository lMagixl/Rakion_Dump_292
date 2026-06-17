
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36182290(void)

{
  float *pfVar1;
  CTerrain *in_EAX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int local_4c;
  int local_48;
  int local_44;
  Vector<float,3> *local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  ushort *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10 [3];
  int local_4;
  
  iVar4 = *(int *)(in_EAX + 0x2c);
  local_10[2] = *(int *)(iVar4 + 0x18) + -1;
  local_4 = *(int *)(iVar4 + 0x1c) + -1;
  local_10[0] = 0;
  local_10[1] = 0;
  FUN_36172d30(&local_20,&DAT_36300a70,local_10);
  piVar2 = (int *)FUN_3617d840(local_20,local_1c,local_18,local_14);
  local_20 = *piVar2;
  local_1c = piVar2[1];
  local_18 = piVar2[2];
  local_14 = piVar2[3];
  TR_ExtractPoligonsInRect(in_EAX,(CTRect *)&local_20,&local_40,&local_44,&local_24,&local_3c);
  if ((0 < local_44) && (0 < local_3c)) {
    iVar5 = ((local_14 - local_1c) + 1) * ((local_18 - local_20) + 1);
    local_34 = (float)(local_1c - DAT_36300a74);
    local_38 = (float)(local_20 - DAT_36300a70);
    local_4c = DAT_36300a78 - DAT_36300a70;
    local_48 = DAT_36300a7c - DAT_36300a74;
    if (DAT_362a6c2c == 1) {
      local_4c = local_4c + -1;
      local_48 = local_48 + -1;
    }
    _DAT_36301614 = 0;
    FUN_360627d0(&DAT_3630160c,iVar5);
    _DAT_36301604 = 0;
    FUN_36062630(&DAT_363015fc,iVar5);
    local_30 = _DAT_36223384 / *(float *)(iVar4 + 0x34);
    local_2c = _DAT_36223384 / *(float *)(iVar4 + 0x3c);
    uVar6 = FUN_361bfd6c();
    iVar4 = 0;
    if (0 < iVar5) {
      iVar3 = 0;
      local_38 = (float)(int)local_38 / (float)local_4c;
      local_34 = (float)(int)local_34 / (float)local_48;
      do {
        pfVar1 = (float *)(DAT_36301610 + iVar4 * 8);
        *pfVar1 = (local_30 * *(float *)(local_40 + iVar3) - (float)local_20) / (float)local_4c +
                  local_38;
        pfVar1[1] = (local_2c * *(float *)(local_40 + iVar3 + 8) - (float)local_1c) /
                    (float)local_48 + local_34;
        FUN_360605c0(&local_28,DAT_36300a64 & 0xffffff00 | (uint)uVar6 & 0xff);
        *(undefined4 *)(DAT_36301600 + iVar4 * 4) = local_28;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar4 < iVar5);
    }
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x1c);
    (*DAT_362c461c)();
    (*DAT_362c45f8)();
    CTextureData::SetAsCurrent(DAT_36300a60,0,0);
    (*DAT_362c4670)(0);
    FUN_3617d780();
    (*DAT_362c45f4)();
    (*DAT_362c4690)(local_40,local_44);
    (*DAT_362c46a0)(DAT_36301600);
    (*DAT_362c469c)(DAT_36301610,0);
    (*DAT_362c46a4)(local_3c,local_24);
    (*DAT_362c4620)();
  }
  return;
}

