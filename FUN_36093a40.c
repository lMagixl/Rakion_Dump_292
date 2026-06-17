
void __cdecl FUN_36093a40(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint3 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  int local_24;
  int local_20;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0x78) == 0) {
    bVar9 = (byte)*(undefined4 *)(param_1 + 0x28);
    iVar11 = *(int *)(param_1 + 0x24) >> (bVar9 & 0x1f);
    iVar6 = *(int *)(param_1 + 0x20) >> (bVar9 & 0x1f);
    iVar14 = iVar11 * iVar6;
    lVar7 = GetMipmapOffset(0xf,iVar6,iVar11);
    puVar8 = AllocMemory(*(int *)(param_1 + 0x34) * lVar7 * 4);
    uVar2 = *(uint *)(param_1 + 0x1c);
    puVar16 = *(ushort **)(param_1 + 0x60);
    local_20 = 0;
    puVar12 = puVar8;
    if (0 < *(int *)(param_1 + 0x34)) {
      do {
        puVar15 = puVar12;
        puVar17 = puVar16;
        local_24 = iVar14;
        if (0 < iVar14) {
          do {
            uVar1 = *puVar17;
            bVar5 = (byte)(uVar1 >> 8);
            bVar9 = (byte)uVar1;
            if ((uVar2 & 1) == 0) {
              bVar10 = bVar5 & 0xf8 | bVar5 >> 5;
              bVar5 = (byte)(uVar1 >> 3);
              bVar13 = (bVar9 & 0xfe) << 2;
              bVar5 = bVar5 & 0xf8 | bVar5 >> 5;
              param_1._0_1_ = 0xff;
              bVar13 = bVar13 | bVar13 >> 5;
            }
            else {
              bVar10 = bVar5 & 0xf0 | bVar5 >> 4;
              bVar5 = (byte)(uVar1 >> 4);
              bVar5 = bVar5 & 0xf0 | bVar5 >> 4;
              bVar13 = bVar9 & 0xf0 | bVar9 >> 4;
              param_1._0_1_ = bVar9 << 4 | bVar9 & 0xf;
            }
            uVar3 = CONCAT21(CONCAT11(bVar10,bVar5),bVar13);
            *puVar15 = (uint)bVar10 | uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 |
                       CONCAT31(uVar3,(byte)param_1) << 0x18;
            local_24 = local_24 + -1;
            puVar15 = puVar15 + 1;
            puVar17 = puVar17 + 1;
          } while (local_24 != 0);
        }
        puVar16 = puVar16 + lVar7;
        local_20 = local_20 + 1;
        puVar12 = puVar12 + lVar7;
      } while (local_20 < *(int *)(iVar4 + 0x34));
    }
    FreeMemory(*(void **)(iVar4 + 0x60));
    *(uint **)(iVar4 + 0x60) = puVar8;
    *(long *)(iVar4 + 0x30) = lVar7 * 4;
  }
  return;
}

