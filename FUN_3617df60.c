
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3617df60(int param_1)

{
  int iVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_60;
  float afStack_30 [12];
  
  (*DAT_362c45f4)();
  iVar10 = DAT_362c5440;
  iStack_60 = FUN_361743e0((undefined4 *)(param_1 + 0x100));
  if (0 < iStack_60) {
    iVar13 = 0;
    do {
      fVar3 = *(float *)(*(int *)(param_1 + 0x104) + 0x10 + iVar13);
      iVar12 = *(int *)(param_1 + 0x104) + iVar13;
      FUN_36162680(afStack_30,(float *)&DAT_36300d18,(float *)(iVar12 + 0x48));
      FUN_3617d780();
      puVar2 = (uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar13);
      *puVar2 = *puVar2 | 8;
      iVar4 = *(int *)(iVar12 + 0x11c);
      iVar11 = 0;
      if (0 < iVar4) {
        do {
          iVar1 = *(int *)(iVar12 + 0x128) + iVar11 * 8;
          fVar8 = (float)*(byte *)(*(int *)(iVar12 + 0x128) + iVar11 * 8);
          fVar9 = (float)*(byte *)(iVar1 + 1);
          fVar7 = (float)*(ushort *)(iVar1 + 4);
          fVar6 = (float)*(ushort *)(iVar1 + 6);
          fVar5 = fVar7;
          if ((fVar3 != _DAT_3622376c) && (fVar5 = fVar6, fVar3 != _DAT_36223384)) {
            fVar5 = (fVar6 - fVar7) * fVar3 + fVar7;
          }
          CDrawPort::DrawPoint3D(DAT_36300c54,fVar8,fVar7,fVar9,0xff0000ff,0x40600000);
          if (iVar10 != 0) {
            CDrawPort::DrawPoint3D(DAT_36300c54,fVar8,fVar6,fVar9,0xffff,0x40600000);
            CDrawPort::DrawPoint3D(DAT_36300c54,fVar8,fVar5,fVar9,0xff00ff,0x40600000);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar4);
      }
      *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar13) =
           *(uint *)(*(int *)(param_1 + 0x104) + 0x118 + iVar13) & 0xffffffe7;
      iVar13 = iVar13 + 0x160;
      iStack_60 = iStack_60 + -1;
    } while (iStack_60 != 0);
  }
  (*DAT_362c4620)();
  return;
}

