
void __fastcall FUN_360b3630(int param_1)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  void *this_00;
  int iVar5;
  int iVar6;
  int *local_28;
  CListHead local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213ddb;
  local_c = ExceptionList;
  this = (undefined4 *)(param_1 + 0x28);
  ExceptionList = &local_c;
  iVar1 = FUN_360b0fc0((int)this);
  if (iVar1 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    iVar1 = FUN_360b0fc0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_360b3ab0(this,iVar6);
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        iVar6 = iVar6 + 1;
        iVar1 = FUN_360b0fc0((int)this);
      } while (iVar6 < iVar1);
    }
    this_00 = (void *)(param_1 + 0x14);
    iVar1 = FUN_360b3d10((int)this_00);
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)FUN_360b3aa0(this_00,iVar5);
        piVar4 = (int *)*puVar2;
        do {
          *(undefined4 *)(piVar4[2] + 0x1c) = 1;
          piVar4 = (int *)*piVar4;
          piVar3 = (int *)FUN_360b3aa0(this_00,iVar5);
        } while (piVar4 != (int *)*piVar3);
        iVar5 = iVar5 + 1;
        iVar1 = FUN_360b3d10((int)this_00);
      } while (iVar5 < iVar1);
    }
    iVar5 = 0;
    iVar6 = 0;
    iVar1 = FUN_360b0fc0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_360b3ab0(this,iVar6);
        if (*(int *)(iVar1 + 0x1c) != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_360b0fc0((int)this);
      } while (iVar6 < iVar1);
    }
    FUN_360b0fa0(local_20);
    local_4 = 0;
    local_28 = FUN_360b4470(local_20,iVar5);
    iVar5 = 0;
    iVar1 = FUN_360b0fc0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_360b3ab0(this,iVar5);
        if (*(int *)(iVar1 + 0x1c) != 0) {
          piVar4 = (int *)FUN_360b3ab0(this,iVar5);
          piVar3 = local_28;
          for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar3 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar3 = piVar3 + 1;
          }
          iVar1 = FUN_360b3ab0(this,iVar5);
          *(int **)(iVar1 + 0x20) = local_28;
          local_28 = local_28 + 9;
        }
        iVar5 = iVar5 + 1;
        iVar1 = FUN_360b0fc0((int)this);
      } while (iVar5 < iVar1);
    }
    iVar5 = 0;
    iVar1 = FUN_360b3d10((int)this_00);
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)FUN_360b3aa0(this_00,iVar5);
        piVar4 = (int *)*puVar2;
        do {
          piVar4[2] = *(int *)(piVar4[2] + 0x20);
          piVar4 = (int *)*piVar4;
          piVar3 = (int *)FUN_360b3aa0(this_00,iVar5);
        } while (piVar4 != (int *)*piVar3);
        iVar5 = iVar5 + 1;
        iVar1 = FUN_360b3d10((int)this_00);
      } while (iVar5 < iVar1);
    }
    FUN_360b2110(this);
    FUN_360b3fb0(this,local_20);
    local_4 = 0xffffffff;
    thunk_FUN_360b2110((undefined4 *)local_20);
  }
  ExceptionList = local_c;
  return;
}

