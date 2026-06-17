
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_3611c580(void *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_a8;
  int local_a0;
  float local_94 [4];
  undefined1 local_84 [52];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36218619;
  local_c = ExceptionList;
  if ((*(int *)((int)param_1 + 0xd40) == 0) && (DAT_362a4170 != 0)) {
    iVar1 = *(int *)((int)param_1 + 0xd90);
    piVar7 = (int *)(iVar1 + 0x18);
    local_a0 = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    if (0 < *piVar7) {
      do {
        iVar2 = *(int *)(iVar1 + 0x1c);
        uVar8 = *(uint *)(local_a0 * 0x1d0 + 200 + iVar2);
        puVar9 = (undefined4 *)(local_a0 * 0x1d0 + iVar2);
        if (((uVar8 & 0x200000) != 0) && ((uVar8 & 0x40) == 0)) {
          puVar9[100] = 0;
          puVar6 = *(undefined1 **)*puVar9;
          if (((*(int *)((int)param_1 + 0xd40) != 0) &&
              (((*(int *)((int)param_1 + 0xd44) == 0 && (*(char *)((int)param_1 + 0xd5c) != '\0'))
               && (*(char *)((int)puVar9 + 0x189) == *(char *)((int)param_1 + 0xd5c))))) ||
             ((*(int *)(*(int *)((int)param_1 + 0xd8c) + 0x66c) != 0 &&
              (*(int *)(puVar6 + 0x74) == 0)))) {
            puVar6 = local_84;
            puVar3 = (undefined4 *)FUN_36121a00((void *)(*(int *)*puVar9 + 0x34),local_94);
            local_50 = *puVar3;
            local_4c = puVar3[1];
            local_48 = puVar3[2];
            local_44 = puVar3[3];
            local_10 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0xd8c) + 0x664) + 0x3c))
                                 (&local_50);
          }
          if ((((*(int *)((int)param_1 + 0xd40) == 0) && ((puVar9[0x32] & 8) != 0)) &&
              ((puVar9[0x32] & 0x200000) != 0)) ||
             (((*(int *)(puVar6 + 0x74) != 0 && ((puVar9[0x32] & 0x20000) == 0)) &&
              ((*(int *)((int)param_1 + 0xd40) == 0 || ((puVar9[0x32] & 0x1000) == 0)))))) {
            if (*(char *)(*(int *)((int)param_1 + 0xd90) + 0x44) < '\0') {
              this = (void *)puVar9[0x6b];
              uVar8 = 0xffffffff;
              local_a8 = FUN_3600bea0(puVar9 + 3);
              if (0 < local_a8) {
                iVar2 = *(int *)((int)param_1 + 0xe0c);
                piVar10 = (int *)puVar9[4];
                do {
                  iVar4 = FUN_360d67e0(this,*piVar10);
                  uVar8 = uVar8 & *(uint *)((iVar4 + *(int *)((int)this + 0xbc)) * 0x1c + 0x10 +
                                           iVar2);
                  piVar10 = piVar10 + 1;
                  local_a8 = local_a8 + -1;
                } while (local_a8 != 0);
                if (uVar8 == 0) goto LAB_3611c76d;
              }
            }
            else {
LAB_3611c76d:
              *(float *)(DAT_362bef74 + 0x5c) = *(float *)(DAT_362bef74 + 0x5c) + _DAT_36223384;
              pfVar5 = FUN_3611b530(param_1,puVar9);
              if ((pfVar5[0x3a] == 0.0) || ((*(byte *)((int)pfVar5[0x3a] + 200) & 0x40) == 0)) {
                FUN_36117840(param_1,(int)pfVar5);
              }
              else {
                FUN_3611c4b0(param_1,(int *)pfVar5);
              }
            }
          }
        }
        local_a0 = local_a0 + 1;
      } while (local_a0 < *piVar7);
    }
  }
  ExceptionList = local_c;
  return;
}

