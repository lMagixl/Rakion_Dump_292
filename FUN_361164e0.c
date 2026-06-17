
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361164e0(void *this,undefined4 *param_1)

{
  void *this_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int local_a4;
  uint local_9c;
  int local_98;
  uint local_94;
  float local_8c;
  void *local_88;
  int local_84;
  int *local_80;
  int local_7c;
  float fStack_78;
  float fStack_74;
  int local_70;
  ulong local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  float fStack_5c;
  float afStack_58 [2];
  void *pvStack_50;
  float afStack_4c [2];
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621857f;
  pvStack_c = ExceptionList;
  local_6c = (-(uint)(*(int *)(*(int *)*param_1 + 0x74) != 0) & 0xf0f0f0f) + 0xf0f0f0f0;
  this_00 = (void *)param_1[0x6b];
  local_70 = *(int *)(*(int *)((int)this_00 + 0x38) + 0x14);
  switch(DAT_362fcbb8) {
  default:
    local_94 = 0;
    break;
  case 1:
    local_94 = DAT_362fcbbc;
    break;
  case 2:
    local_94 = param_1[0x31];
    break;
  case 3:
    local_94 = *(uint *)((int)this_00 + 0x3c);
  }
  switch(DAT_362fcbb0) {
  default:
    local_9c = 0;
    break;
  case 1:
    local_9c = DAT_362fcbb4;
    break;
  case 2:
    local_9c = param_1[0x31];
    break;
  case 3:
    local_9c = *(uint *)((int)this_00 + 0x3c);
  }
  ExceptionList = &pvStack_c;
  local_88 = this;
  if ((param_1[0x32] & 0x100) != 0) {
    ExceptionList = &pvStack_c;
    local_98 = FUN_3600bef0(param_1 + 5);
    local_98 = local_98 / 3;
    iVar3 = 0;
    if (0 < local_98) {
      local_a4 = 0;
      do {
        iVar12 = 0;
        do {
          iVar12 = iVar12 + 1;
          iVar6 = *(int *)(param_1[4] + *(int *)(param_1[6] + (iVar12 % 3 + local_a4) * 4) * 4);
          local_8c = (float)FUN_360d67e0(this_00,*(int *)(param_1[4] +
                                                         *(int *)(param_1[6] + iVar3) * 4));
          iVar4 = FUN_360d67e0(this_00,iVar6);
          iVar8 = local_70;
          this = local_88;
          iVar6 = *(int *)((int)local_88 + 0xe0c);
          iVar10 = ((int)local_8c + *(int *)((int)this_00 + 0xbc)) * 0x1c;
          local_68 = *(int *)(iVar10 + iVar6);
          iVar10 = iVar10 + iVar6;
          local_64 = *(int *)(iVar10 + 4);
          local_60 = *(undefined4 *)(iVar10 + 8);
          piVar5 = (int *)((iVar4 + *(int *)((int)this_00 + 0xbc)) * 0x1c + iVar6);
          local_84 = *piVar5;
          local_80 = (int *)piVar5[1];
          local_7c = piVar5[2];
          iVar6 = (**(code **)(**(int **)(local_70 + 0x664) + 0x1c))(&local_68,&local_84);
          if (iVar6 != 0) {
            (**(code **)(**(int **)(iVar8 + 0x664) + 0x24))(&local_68,&fStack_38);
            (**(code **)(**(int **)(iVar8 + 0x664) + 0x24))(&local_8c,afStack_4c);
            if ((_DAT_36228798 <= ABS(fStack_44 - fStack_38)) ||
               (_DAT_36228798 <= ABS(fStack_40 - fStack_34))) {
              uVar11 = local_94 | 0xff;
              uVar18 = local_6c;
              uVar14 = FUN_361bfd6c();
              lVar16 = (long)uVar14;
              uVar14 = FUN_361bfd6c();
              lVar17 = (long)uVar14;
              uVar14 = FUN_361bfd6c();
              lVar7 = (long)uVar14;
              uVar14 = FUN_361bfd6c();
              CDrawPort::DrawLine(*(CDrawPort **)((int)this + 8),(long)uVar14,lVar7,lVar17,lVar16,
                                  uVar11,uVar18);
            }
          }
          iVar3 = iVar3 + 4;
        } while (iVar12 < 3);
        local_a4 = local_a4 + 3;
        local_98 = local_98 + -1;
      } while (local_98 != 0);
    }
  }
  local_80 = param_1 + 1;
  local_84 = 0;
  local_4 = 0;
  if (0 < *local_80) {
    do {
      piVar5 = *(int **)(local_80[1] + local_84 * 8);
      iVar3 = *piVar5;
      iVar12 = piVar5[1];
      iVar6 = *(int *)((int)this_00 + 0xbc);
      iVar8 = FUN_360d67e0(this_00,iVar3);
      puVar13 = (undefined4 *)((iVar8 + iVar6) * 0x1c + *(int *)((int)this + 0xe0c));
      iVar4 = FUN_360d67e0(this_00,iVar12);
      iVar8 = local_70;
      puVar9 = (undefined4 *)((iVar4 + iVar6) * 0x1c + *(int *)((int)this + 0xe0c));
      uStack_2c = *puVar13;
      uStack_28 = puVar13[1];
      uStack_24 = puVar13[2];
      uStack_20 = *puVar9;
      uStack_1c = puVar9[1];
      uStack_18 = puVar9[2];
      iVar6 = (**(code **)(**(int **)(local_70 + 0x664) + 0x1c))(&uStack_2c,&uStack_20);
      if (iVar6 != 0) {
        (**(code **)(**(int **)(iVar8 + 0x664) + 0x24))(&uStack_2c,&fStack_5c);
        (**(code **)(**(int **)(iVar8 + 0x664) + 0x24))(&uStack_28,afStack_58);
        fStack_78 = fStack_5c;
        local_8c = afStack_4c[0];
        fStack_74 = afStack_58[0];
        local_88 = pvStack_50;
        if ((_DAT_36228798 <= ABS((float)pvStack_50 - fStack_5c)) ||
           (_DAT_36228798 <= ABS(afStack_4c[0] - afStack_58[0]))) {
          if ((-1 < (char)iVar6) || (bVar1 = true, (*(byte *)(iVar3 + 0x3c) & 1) != 0)) {
            bVar1 = false;
          }
          if ((-1 < (char)((uint)iVar6 >> 8)) || (bVar2 = true, (*(byte *)(iVar12 + 0x3c) & 1) != 0)
             ) {
            bVar2 = false;
          }
          if (DAT_362fcbb8 != 0) {
            uVar11 = local_94 | 0xff;
            uVar18 = local_6c;
            uVar14 = FUN_361bfd6c();
            lVar16 = (long)uVar14;
            uVar14 = FUN_361bfd6c();
            lVar17 = (long)uVar14;
            uVar14 = FUN_361bfd6c();
            lVar7 = (long)uVar14;
            uVar14 = FUN_361bfd6c();
            CDrawPort::DrawLine(*(CDrawPort **)((int)this + 8),(long)uVar14,lVar7,lVar17,lVar16,
                                uVar11,uVar18);
          }
          if (DAT_362fcbf8 == 4) {
            if (bVar1) {
              uVar14 = FUN_361bfd6c();
              local_68 = (int)uVar14;
              uVar15 = FUN_361bfd6c();
              local_64 = (int)uVar15;
              FUN_36123cb0(iVar3,&local_68);
              if ((*(byte *)(iVar3 + 0x3c) & 2) != 0) {
                CDrawPort::Fill(*(CDrawPort **)((int)this + 8),(int)uVar14 + -1,(int)uVar15 + -1,5,5
                                ,0xff);
              }
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
            }
            if (bVar2) {
              uVar14 = FUN_361bfd6c();
              iStack_14 = (int)uVar14;
              uVar15 = FUN_361bfd6c();
              iStack_10 = (int)uVar15;
              FUN_36123cb0(iVar12,&iStack_14);
              if ((*(byte *)(iVar12 + 0x3c) & 2) != 0) {
                CDrawPort::Fill(*(CDrawPort **)((int)this + 8),(int)uVar14 + -1,(int)uVar15 + -1,5,5
                                ,0xff);
              }
              *(uint *)(iVar12 + 0x3c) = *(uint *)(iVar12 + 0x3c) | 1;
            }
          }
          if (DAT_362fcbb0 != 0) {
            if (bVar1) {
              uVar11 = local_9c | 0xff;
              lVar17 = 3;
              lVar16 = 3;
              uVar14 = FUN_361bfd6c();
              iVar6 = (int)uVar14 + -1;
              uVar14 = FUN_361bfd6c();
              CDrawPort::Fill(*(CDrawPort **)((int)this + 8),(int)uVar14 + -1,iVar6,lVar16,lVar17,
                              uVar11);
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
            }
            if (bVar2) {
              uVar11 = local_9c | 0xff;
              lVar17 = 3;
              lVar16 = 3;
              uVar14 = FUN_361bfd6c();
              iVar3 = (int)uVar14 + -1;
              uVar14 = FUN_361bfd6c();
              CDrawPort::Fill(*(CDrawPort **)((int)this + 8),(int)uVar14 + -1,iVar3,lVar16,lVar17,
                              uVar11);
              *(uint *)(iVar12 + 0x3c) = *(uint *)(iVar12 + 0x3c) | 1;
            }
          }
        }
      }
      local_84 = local_84 + 1;
    } while (local_84 < *local_80);
  }
  ExceptionList = pvStack_c;
  return;
}

