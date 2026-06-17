
void __cdecl FUN_360e28b0(undefined4 *param_1)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CListHead local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215568;
  local_c = ExceptionList;
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360defb0((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360def70(param_1,iVar5);
      if (*(int *)(iVar1 + 0x18) != 0) {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_360defb0((int)param_1);
    } while (iVar5 < iVar1);
  }
  FUN_360dec80(local_20);
  local_4 = 0;
  FUN_360e1150(local_20,iVar6);
  param_1 = (undefined4 *)0x0;
  iVar1 = FUN_360defb0((int)this);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_360def70(this,iVar4);
      if (puVar2[6] != 0) {
        puVar3 = (undefined4 *)FUN_360def70(local_20,(int)param_1);
        param_1 = (undefined4 *)((int)param_1 + 1);
        for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360defb0((int)this);
    } while (iVar4 < iVar1);
  }
  FUN_360e0d40(this);
  FUN_360dfc70(this,local_20);
  local_4 = 0xffffffff;
  thunk_FUN_360e0d40((undefined4 *)local_20);
  ExceptionList = local_c;
  return;
}

