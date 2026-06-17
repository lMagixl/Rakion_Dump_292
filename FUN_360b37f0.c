
void __thiscall FUN_360b37f0(void *this,int param_1,int param_2)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213dfd;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x14);
  iVar8 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_360b3d10((int)this_00);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_360b3aa0(this_00,iVar8);
      piVar5 = (int *)*puVar3;
      do {
        if (piVar5[2] == param_1) {
          piVar5[2] = param_2;
        }
        piVar5 = (int *)*piVar5;
        piVar4 = (int *)FUN_360b3aa0(this_00,iVar8);
      } while (piVar5 != (int *)*piVar4);
      iVar8 = iVar8 + 1;
      iVar2 = FUN_360b3d10((int)this_00);
    } while (iVar8 < iVar2);
  }
  FUN_360b3f80((void *)((int)this + 0x28),param_1);
  iVar8 = 0;
  iVar2 = FUN_360b3d10((int)this_00);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_360b3aa0(this_00,iVar8);
      puVar3 = (undefined4 *)*puVar3;
      do {
        puVar1 = (undefined4 *)*puVar3;
        if (puVar3[2] == puVar1[2]) {
          piVar5 = (int *)FUN_360b3aa0(this_00,iVar8);
          if (puVar1 == (undefined4 *)*piVar5) {
            puVar6 = (undefined4 *)FUN_360b3aa0(this_00,iVar8);
            *puVar6 = *puVar1;
          }
          *puVar3 = *puVar1;
          operator_delete(puVar1);
        }
        puVar3 = (undefined4 *)*puVar3;
        piVar5 = (int *)FUN_360b3aa0(this_00,iVar8);
      } while (puVar3 != (undefined4 *)*piVar5);
      iVar8 = iVar8 + 1;
      iVar2 = FUN_360b3d10((int)this_00);
    } while (iVar8 < iVar2);
  }
  FUN_360b4580(local_1c);
  iVar8 = 0;
  local_4 = 1;
  iVar2 = FUN_360b3d10((int)this_00);
  if (0 < iVar2) {
    do {
      piVar5 = (int *)FUN_360b3aa0(this_00,iVar8);
      piVar5 = (int *)*piVar5;
      if (((int *)*piVar5 == piVar5) || (*(int **)*piVar5 == piVar5)) {
        uVar7 = FUN_360b3aa0(this_00,iVar8);
        FUN_360b45a0(local_1c,uVar7);
      }
      iVar8 = iVar8 + 1;
      iVar2 = FUN_360b3d10((int)this_00);
    } while (iVar8 < iVar2);
  }
  iVar8 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = FUN_360b3e10((int)local_1c);
  if (0 < iVar2) {
    do {
      piVar5 = (int *)FUN_360b3b90(local_1c,iVar8);
      FUN_360b3f40(this_00,piVar5);
      iVar8 = iVar8 + 1;
      iVar2 = FUN_360b3e10((int)local_1c);
    } while (iVar8 < iVar2);
  }
  FUN_360b4610(local_1c);
  ExceptionList = local_c;
  return;
}

