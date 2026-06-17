
/* WARNING: Removing unreachable block (ram,0x3620a3f5) */
/* WARNING: Removing unreachable block (ram,0x3620a410) */
/* WARNING: Removing unreachable block (ram,0x3620a41f) */
/* WARNING: Removing unreachable block (ram,0x3620a426) */

undefined4 __cdecl FUN_3620a1a0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  byte *_Memory;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  size_t _Size;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_24;
  int local_20;
  size_t local_1c;
  byte *local_18;
  int local_14;
  size_t local_10;
  undefined4 *local_c;
  int local_8;
  size_t local_4;
  
  if (((DAT_36388428 == 1) && (DAT_36388430 == 1)) && (DAT_3638845c < 0x101)) {
    iVar9 = param_1[1];
    iVar3 = param_1[2];
    _Size = param_1[3];
    iVar7 = param_1[4];
    *DAT_3638842c = *param_1;
    DAT_3638842c[1] = iVar9;
    DAT_3638842c[2] = iVar3;
    DAT_3638842c[3] = 1;
    DAT_3638842c[4] = iVar7;
    if (DAT_36388434 == _Size) {
      local_10 = _Size * iVar3 * iVar9;
      local_4 = _Size;
      _Memory = malloc(local_10);
      local_18 = _Memory;
      DAT_36388444 = malloc(_Size);
      DAT_36388448 = malloc(_Size);
      iVar9 = 0;
      local_20 = 0;
      while (sVar2 = local_10, iVar7 != 0) {
        while (local_1c = sVar2, local_14 = iVar7, local_1c != 0) {
          iVar3 = 0;
          if (0 < (int)_Size) {
            do {
              iVar7 = iVar9 * 4;
              iVar9 = iVar9 + 1;
              iVar4 = iVar3 + 1;
              _Memory[iVar3] = (byte)*(undefined4 *)(iVar7 + param_1[6]);
              iVar3 = iVar4;
              local_20 = iVar9;
            } while (iVar4 < (int)_Size);
          }
          puVar5 = (undefined4 *)FUN_3620cc80(&DAT_36388438,_Memory,param_2);
          puVar1 = DAT_3638842c;
          local_24 = *puVar5;
          puVar5 = (undefined4 *)DAT_3638842c[7];
          if (DAT_3638842c[8] - (int)puVar5 >> 2 == 0) {
            iVar9 = DAT_3638842c[6];
            if ((iVar9 == 0) || (uVar8 = (int)puVar5 - iVar9 >> 2, uVar8 < 2)) {
              uVar8 = 1;
            }
            if (iVar9 == 0) {
              local_8 = 0;
            }
            else {
              local_8 = (int)puVar5 - iVar9 >> 2;
            }
            local_8 = local_8 + uVar8;
            iVar9 = local_8;
            if (local_8 < 0) {
              iVar9 = 0;
            }
            puVar6 = (undefined4 *)FUN_361bf99c(iVar9 << 2);
            local_c = puVar6;
            for (puVar10 = (undefined4 *)puVar1[6]; puVar10 != puVar5; puVar10 = puVar10 + 1) {
              FUN_3620a4f0(puVar6,puVar10);
              puVar6 = puVar6 + 1;
            }
            FUN_3620a4c0(puVar6,1,&local_24);
            FUN_3620a490(puVar5,(undefined4 *)puVar1[7],puVar6 + 1);
            FUN_362040f0();
            operator_delete((void *)puVar1[6]);
            puVar1[8] = local_c + local_8;
            if (puVar1[6] == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = (int)(puVar1[7] - puVar1[6]) >> 2;
            }
            puVar1[6] = local_c;
            puVar1[7] = local_c + iVar9 + 1;
            _Size = local_4;
            iVar9 = local_20;
          }
          else {
            FUN_3620a490(puVar5,puVar5,puVar5 + 1);
            FUN_3620a4c0((undefined4 *)puVar1[7],1 - ((int)puVar1[7] - (int)puVar5 >> 2),&local_24);
            puVar10 = (undefined4 *)puVar1[7];
            for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
              *puVar5 = local_24;
            }
            puVar1[7] = puVar1[7] + 4;
          }
          _Memory = local_18;
          iVar7 = local_14;
          sVar2 = local_1c - _Size;
        }
        local_1c = 0;
        iVar7 = local_14 + -1;
        local_14 = iVar7;
      }
      free(_Memory);
      free(DAT_36388444);
      free(DAT_36388448);
      return 0;
    }
  }
  return 0xffffffff;
}

