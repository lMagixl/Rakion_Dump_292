
void __thiscall FUN_36116c00(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulonglong uVar14;
  ulong uVar15;
  int local_4c;
  int local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_362185b3;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x38) + 0x14);
  local_44 = 0;
  uStack_3 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)((int)param_1 + 0x18)) {
    do {
      uVar4 = DAT_362fcbbc;
      puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x1c) + local_44 * 0x1d0);
      iVar2 = *(int *)(*(int *)*puVar5 + 0x74);
      local_4c = 0;
      local_4 = 1;
      if (0 < (int)puVar5[1]) {
        do {
          piVar3 = *(int **)(puVar5[2] + local_4c * 8);
          iVar6 = FUN_360d67e0(param_1,*piVar3);
          iVar7 = FUN_360d67e0(param_1,piVar3[1]);
          iVar9 = *(int *)((int)this + 0xe0c);
          iVar6 = (*(int *)((int)param_1 + 0xbc) + iVar6) * 0x1c;
          local_3c = *(undefined4 *)(iVar6 + iVar9);
          iVar6 = iVar6 + iVar9;
          local_38 = *(undefined4 *)(iVar6 + 4);
          local_34 = *(undefined4 *)(iVar6 + 8);
          puVar8 = (undefined4 *)((iVar7 + *(int *)((int)param_1 + 0xbc)) * 0x1c + iVar9);
          local_30 = *puVar8;
          local_2c = puVar8[1];
          local_28 = puVar8[2];
          iVar9 = (**(code **)(**(int **)(iVar1 + 0x664) + 0x1c))(&local_3c,&local_30);
          if (iVar9 != 0) {
            (**(code **)(**(int **)(iVar1 + 0x664) + 0x24))(&local_3c,auStack_18);
            (**(code **)(**(int **)(iVar1 + 0x664) + 0x24))(&local_38,&local_2c);
            uVar10 = uVar4 | 0xff;
            uVar15 = (-(uint)(iVar2 != 0) & 0xf0f0f0f) + 0xf0f0f0f0;
            uVar14 = FUN_361bfd6c();
            lVar11 = (long)uVar14;
            uVar14 = FUN_361bfd6c();
            lVar12 = (long)uVar14;
            uVar14 = FUN_361bfd6c();
            lVar13 = (long)uVar14;
            uVar14 = FUN_361bfd6c();
            CDrawPort::DrawLine(*(CDrawPort **)((int)this + 8),(long)uVar14,lVar13,lVar12,lVar11,
                                uVar10,uVar15);
          }
          local_4c = local_4c + 1;
        } while (local_4c < (int)puVar5[1]);
      }
      local_44 = local_44 + 1;
    } while (local_44 < *(int *)((int)param_1 + 0x18));
  }
  ExceptionList = local_c;
  return;
}

