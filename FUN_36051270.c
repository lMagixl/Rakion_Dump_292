
void __fastcall FUN_36051270(int param_1)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  undefined4 *puVar5;
  undefined4 *local_28;
  CListHead local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211ab4;
  local_c = ExceptionList;
  this = (undefined4 *)(param_1 + 0x14);
  ExceptionList = &local_c;
  iVar1 = FUN_3604aaa0((int)this);
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar1 = FUN_3604aaa0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a740(this,iVar3);
        *(undefined4 *)(iVar1 + 0x24) = 0;
        iVar3 = iVar3 + 1;
        iVar1 = FUN_3604aaa0((int)this);
      } while (iVar3 < iVar1);
    }
    this_00 = (void *)(param_1 + 0x50);
    iVar3 = 0;
    iVar1 = FUN_3604a760((int)this_00);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a750(this_00,iVar3);
        *(undefined4 *)(*(int *)(iVar1 + 0x48) + 0x24) = 1;
        iVar3 = iVar3 + 1;
        iVar1 = FUN_3604a760((int)this_00);
      } while (iVar3 < iVar1);
    }
    iVar3 = 0;
    iVar4 = 0;
    iVar1 = FUN_3604aaa0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a740(this,iVar4);
        if (*(int *)(iVar1 + 0x24) != 0) {
          iVar3 = iVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = FUN_3604aaa0((int)this);
      } while (iVar4 < iVar1);
    }
    FUN_360542e0(local_20);
    local_4 = 0;
    local_28 = (undefined4 *)FUN_3604c260(local_20,iVar3);
    iVar3 = 0;
    iVar1 = FUN_3604aaa0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a740(this,iVar3);
        if (*(int *)(iVar1 + 0x24) != 0) {
          puVar2 = (undefined4 *)FUN_3604a740(this,iVar3);
          puVar5 = local_28;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar5 = puVar5 + 1;
          }
          iVar1 = FUN_3604a740(this,iVar3);
          *(undefined4 **)(iVar1 + 0x20) = local_28;
          local_28 = local_28 + 0xc;
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_3604aaa0((int)this);
      } while (iVar3 < iVar1);
    }
    iVar3 = 0;
    iVar1 = FUN_3604a760((int)this_00);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a750(this_00,iVar3);
        iVar4 = FUN_3604a750(this_00,iVar3);
        *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(*(int *)(iVar4 + 0x48) + 0x20);
        iVar3 = iVar3 + 1;
        iVar1 = FUN_3604a760((int)this_00);
      } while (iVar3 < iVar1);
    }
    FUN_360558a0(this);
    FUN_360550e0(this,local_20);
    local_4 = 0xffffffff;
    thunk_FUN_360558a0((undefined4 *)local_20);
  }
  ExceptionList = local_c;
  return;
}

