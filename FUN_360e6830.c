
void __fastcall FUN_360e6830(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362159de;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_36035fa0((int)param_1);
  if (0 < iVar1) {
    do {
      if (DAT_362c5480 != 0) {
        iVar1 = FUN_36035fb0(param_1,iVar3);
        CPrintF(s_I_Deleting___s__362328de + 2,*(undefined4 *)(iVar1 + 0xc),
                *(undefined4 *)(iVar1 + 0x10));
      }
      iVar1 = FUN_36035fb0(param_1,iVar3);
      FUN_360e71c0(param_1,iVar1);
      iVar1 = FUN_36035fb0(param_1,iVar3);
      FUN_360e64b0((void *)((int)param_1 + 0x10),iVar1);
      puVar2 = (undefined4 *)FUN_36035fb0(param_1,iVar3);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_36035fa0((int)param_1);
    } while (iVar3 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

