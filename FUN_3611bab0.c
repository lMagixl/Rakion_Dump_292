
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_3611bab0(void *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_a8;
  undefined1 local_84 [52];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362185f2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar4 = FUN_3611f3e0((int)param_1 + 0xd94);
  *(undefined4 *)(*(int *)((int)param_1 + 0xd90) + 0xb4) = uVar4;
  iVar1 = *(int *)((int)param_1 + 0xd40);
  iVar6 = *(int *)((int)param_1 + 0xd90);
  piVar9 = (int *)(iVar6 + 0x18);
  local_a8 = 0;
  local_4 = 0;
  if (0 < *piVar9) {
    do {
      iVar2 = *(int *)(iVar6 + 0x1c);
      uVar8 = *(uint *)(local_a8 * 0x1d0 + 200 + iVar2);
      puVar10 = (undefined4 *)(local_a8 * 0x1d0 + iVar2);
      if ((((iVar1 != 0) - 1 & 0x200000 & uVar8) == 0) || ((uVar8 & 0x40) != 0)) {
        bVar3 = false;
        puVar10[100] = 0;
        puVar7 = *(undefined1 **)*puVar10;
        if (((*(int *)((int)param_1 + 0xd40) != 0) &&
            (((*(int *)((int)param_1 + 0xd44) == 0 && (*(char *)((int)param_1 + 0xd5c) != '\0')) &&
             (*(char *)((int)puVar10 + 0x189) == *(char *)((int)param_1 + 0xd5c))))) ||
           ((*(int *)(*(int *)((int)param_1 + 0xd8c) + 0x66c) != 0 && (*(int *)(puVar7 + 0x74) == 0)
            ))) {
          local_50 = -*(float *)(puVar7 + 0x34);
          local_4c = -*(float *)(puVar7 + 0x38);
          local_48 = -*(float *)(puVar7 + 0x3c);
          local_44 = -*(float *)(puVar7 + 0x40);
          puVar7 = local_84;
          local_10 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0xd8c) + 0x664) + 0x3c))
                               (&local_50);
          bVar3 = true;
        }
        if (((*(int *)((int)param_1 + 0xd40) == 0) && ((puVar10[0x32] & 8) != 0)) &&
           ((puVar10[0x32] & 0x200000) != 0)) {
          uVar8 = 4;
LAB_3611bca2:
          *(float *)(DAT_362bef74 + 0x48) = *(float *)(DAT_362bef74 + 0x48) + _DAT_36223384;
          pfVar5 = FUN_3611b530(param_1,puVar10);
          FUN_361155f0(param_1,(int)puVar10,(int)pfVar5,uVar8);
        }
        else if (((*(int *)(puVar7 + 0x74) != 0) && ((puVar10[0x32] & 0x20000) == 0)) &&
                ((*(int *)((int)param_1 + 0xd40) == 0 || ((puVar10[0x32] & 0x1000) == 0)))) {
          uVar8 = 4;
          if (*(int *)(*(int *)((int)param_1 + 0x694) + 0xac) == 0) {
            if (bVar3) {
              uVar8 = 6;
            }
          }
          else if (!bVar3) {
            uVar8 = 5;
          }
          if (uVar8 != 0) goto LAB_3611bca2;
        }
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 < *piVar9);
  }
  iVar1 = *(int *)((int)param_1 + 0xd90);
  iVar6 = FUN_3611f3e0((int)param_1 + 0xd94);
  *(int *)(iVar1 + 0xb8) = iVar6 - *(int *)(iVar1 + 0xb4);
  ExceptionList = pvStack_c;
  return;
}

