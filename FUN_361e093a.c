
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361e093a(int *param_1)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ushort local_10;
  uint local_8;
  
  piVar4 = param_1;
  if ((float)param_1[0x4c] != (float)_DAT_36227d98) {
    if (*(byte *)((int)param_1 + 0x117) < 9) {
      pvVar7 = FUN_361e5642(param_1,0x100);
      param_1 = (int *)0x0;
      piVar4[0x4e] = (int)pvVar7;
      do {
        _CIpow();
        uVar5 = ftol();
        piVar2 = (int *)((int)param_1 + 1);
        *(undefined1 *)((int)param_1 + piVar4[0x4e]) = uVar5;
        param_1 = piVar2;
      } while ((int)piVar2 < 0x100);
    }
    else {
      if ((*(byte *)((int)param_1 + 0x116) & 2) == 0) {
        local_8 = (uint)*(byte *)((int)param_1 + 0x153);
      }
      else {
        local_8 = (uint)*(byte *)(param_1 + 0x54);
        if ((uint)*(byte *)(param_1 + 0x54) < (uint)*(byte *)((int)param_1 + 0x151)) {
          local_8 = (uint)*(byte *)((int)param_1 + 0x151);
        }
        if (local_8 < *(byte *)((int)param_1 + 0x152)) {
          local_8 = (uint)*(byte *)((int)param_1 + 0x152);
        }
      }
      if (local_8 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = 0x10 - local_8;
      }
      if (((*(byte *)((int)param_1 + 0x61) & 4) != 0) && ((int)local_8 < 5)) {
        local_8 = 5;
      }
      if (8 < (int)local_8) {
        local_8 = 8;
      }
      if ((int)local_8 < 0) {
        local_8 = 0;
      }
      bVar3 = (byte)local_8;
      bVar10 = 8 - bVar3;
      iVar11 = 1 << (bVar10 & 0x1f);
      param_1[0x4b] = local_8 & 0xff;
      pvVar7 = FUN_361e5642(param_1,iVar11 << 2);
      puVar1 = (ushort *)(param_1 + 0x18);
      param_1[0x51] = (int)pvVar7;
      param_1 = (int *)0x0;
      if ((*puVar1 & 0x480) == 0) {
        if (0 < iVar11) {
          do {
            pvVar7 = FUN_361e5642(piVar4,0x200);
            *(void **)(piVar4[0x51] + (int)param_1 * 4) = pvVar7;
            iVar13 = 0;
            do {
              _CIpow();
              uVar6 = ftol();
              *(undefined2 *)(iVar13 + *(int *)(piVar4[0x51] + (int)param_1 * 4)) = uVar6;
              iVar13 = iVar13 + 2;
            } while (iVar13 < 0x200);
            param_1 = (int *)((int)param_1 + 1);
          } while ((int)param_1 < iVar11);
        }
      }
      else {
        if (0 < iVar11) {
          do {
            pvVar7 = FUN_361e5642(piVar4,0x200);
            piVar2 = (int *)((int)param_1 + 1);
            *(void **)(piVar4[0x51] + (int)param_1 * 4) = pvVar7;
            param_1 = piVar2;
          } while ((int)piVar2 < iVar11);
        }
        uVar14 = 0;
        param_1 = (int *)0x0;
        do {
          _CIpow();
          uVar8 = ftol();
          if (uVar14 <= uVar8) {
            local_10 = (ushort)(((uint)param_1 & 0xff) << 8) | (ushort)param_1;
            do {
              uVar12 = uVar14 >> (bVar10 & 0x1f);
              uVar9 = 0xff >> (bVar3 & 0x1f) & uVar14;
              uVar14 = uVar14 + 1;
              *(ushort *)(*(int *)(piVar4[0x51] + uVar9 * 4) + uVar12 * 2) = local_10;
            } while (uVar14 <= uVar8);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x100);
        if (uVar14 < (uint)(iVar11 << 8)) {
          do {
            *(undefined2 *)
             (*(int *)(piVar4[0x51] + (0xff >> (bVar3 & 0x1f) & uVar14) * 4) +
             (uVar14 >> (bVar10 & 0x1f)) * 2) = 0xffff;
            uVar14 = uVar14 + 1;
          } while (uVar14 < (uint)(iVar11 << 8));
        }
      }
    }
  }
  return;
}

