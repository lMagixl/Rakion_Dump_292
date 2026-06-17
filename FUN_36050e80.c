
void __fastcall FUN_36050e80(undefined4 *param_1)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_2c;
  int local_28;
  CListHead local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211a90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_3604aa70((int)param_1);
  if (iVar1 != 0) {
    iVar3 = 0;
    iVar1 = FUN_3604aa70((int)param_1);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a710(param_1,iVar3);
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        iVar3 = iVar3 + 1;
        iVar1 = FUN_3604aa70((int)param_1);
      } while (iVar3 < iVar1);
    }
    this = param_1 + 0xf;
    iVar3 = 0;
    iVar1 = FUN_360543c0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_36054380(this,iVar3);
        *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x1c) = 1;
        iVar1 = FUN_36054380(this,iVar3);
        *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x1c) = 1;
        iVar3 = iVar3 + 1;
        iVar1 = FUN_360543c0((int)this);
      } while (iVar3 < iVar1);
    }
    iVar4 = 0;
    iVar3 = 0;
    iVar1 = FUN_3604aa70((int)param_1);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a710(param_1,iVar3);
        if (*(int *)(iVar1 + 0x1c) != 0) {
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_3604aa70((int)param_1);
      } while (iVar3 < iVar1);
    }
    FUN_360542c0(local_20);
    local_4 = 0;
    local_2c = (undefined4 *)FUN_3604c210(local_20,iVar4);
    local_28 = 0;
    iVar1 = FUN_3604aa70((int)param_1);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a710(param_1,local_28);
        if (*(int *)(iVar1 + 0x1c) != 0) {
          puVar2 = (undefined4 *)FUN_3604a710(param_1,local_28);
          puVar5 = local_2c;
          for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar5 = puVar5 + 1;
          }
          iVar1 = FUN_3604a710(param_1,local_28);
          *(undefined4 **)(iVar1 + 0x18) = local_2c;
          local_2c = local_2c + 10;
        }
        local_28 = local_28 + 1;
        iVar1 = FUN_3604aa70((int)param_1);
      } while (local_28 < iVar1);
    }
    iVar3 = 0;
    iVar1 = FUN_360543c0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_36054380(this,iVar3);
        iVar4 = FUN_36054380(this,iVar3);
        *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x18);
        iVar1 = FUN_36054380(this,iVar3);
        iVar4 = FUN_36054380(this,iVar3);
        *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x18);
        iVar3 = iVar3 + 1;
        iVar1 = FUN_360543c0((int)this);
      } while (iVar3 < iVar1);
    }
    FUN_360557e0(param_1);
    FUN_36055080(param_1,local_20);
    local_4 = 0xffffffff;
    thunk_FUN_360557e0((undefined4 *)local_20);
  }
  ExceptionList = local_c;
  return;
}

