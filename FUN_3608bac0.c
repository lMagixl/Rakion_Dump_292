
void __cdecl FUN_3608bac0(long param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  lVar2 = GetMipmapOffset(param_1,param_3,param_4);
  iVar6 = param_2 + lVar2 * 4;
  uVar9 = param_4 >> ((byte)param_1 & 0x1f);
  uVar8 = param_3 >> ((byte)param_1 & 0x1f);
  uVar3 = uVar9;
  if ((int)uVar9 <= (int)uVar8) {
    uVar3 = uVar8;
  }
  if ((int)uVar3 < 0x401) {
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (1 < (int)uVar8) {
      puVar7 = (uint *)(&DAT_362a41e0 + (10 - iVar4) * 4);
      do {
        if ((int)uVar9 < 2) {
          return;
        }
        uVar3 = *puVar7 | 0x3f3f3fff;
        iVar5 = uVar9 * uVar8;
        iVar4 = 0;
        if (0 < iVar5) {
          do {
            puVar1 = (uint *)(iVar6 + iVar4 * 4);
            *puVar1 = *puVar1 & (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                                uVar3 << 0x18);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar5);
        }
        uVar8 = (int)uVar8 >> 1;
        uVar9 = (int)uVar9 >> 1;
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + iVar5 * 4;
      } while (1 < (int)uVar8);
    }
  }
  return;
}

