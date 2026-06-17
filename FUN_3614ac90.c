
void __cdecl FUN_3614ac90(int *param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  void *this;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar2 = param_1[9];
  while( true ) {
    this = (void *)((param_1[0xd] - param_1[0x1b]) - param_1[0x19]);
    if ((uVar2 - 0x106) + param_1[9] <= (uint)param_1[0x19]) {
      puVar7 = (undefined4 *)(param_1[0xc] + uVar2);
      puVar9 = (undefined4 *)param_1[0xc];
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      param_1[0x1a] = param_1[0x1a] - uVar2;
      iVar8 = param_1[0x11];
      param_1[0x15] = param_1[0x15] - uVar2;
      param_1[0x19] = param_1[0x19] - uVar2;
      psVar6 = (short *)(param_1[0xf] + iVar8 * 2);
      do {
        puVar1 = (ushort *)(psVar6 + -1);
        psVar6 = psVar6 + -1;
        if (*puVar1 < uVar2) {
          sVar4 = 0;
        }
        else {
          sVar4 = *puVar1 - (short)uVar2;
        }
        iVar8 = iVar8 + -1;
        *psVar6 = sVar4;
      } while (iVar8 != 0);
      psVar6 = (short *)(param_1[0xe] + uVar2 * 2);
      uVar5 = uVar2;
      do {
        puVar1 = (ushort *)(psVar6 + -1);
        psVar6 = psVar6 + -1;
        if (*puVar1 < uVar2) {
          sVar4 = 0;
        }
        else {
          sVar4 = *puVar1 - (short)uVar2;
        }
        uVar5 = uVar5 - 1;
        *psVar6 = sVar4;
      } while (uVar5 != 0);
      this = (void *)((int)this + uVar2);
    }
    if (*(int *)(*param_1 + 4) == 0) break;
    uVar5 = FUN_3614a950(this,(undefined4 *)(param_1[0x1b] + param_1[0x19] + param_1[0xc]));
    uVar5 = param_1[0x1b] + uVar5;
    param_1[0x1b] = uVar5;
    if (2 < uVar5) {
      uVar3 = (uint)*(byte *)(param_1[0x19] + param_1[0xc]);
      param_1[0x10] = uVar3;
      param_1[0x10] =
           (uVar3 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)((byte *)(param_1[0x19] + param_1[0xc]))[1]) & param_1[0x13];
    }
    if (0x105 < uVar5) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  }
  return;
}

