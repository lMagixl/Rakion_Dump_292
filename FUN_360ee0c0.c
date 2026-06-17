
int __fastcall FUN_360ee0c0(void *param_1)

{
  int iVar1;
  CSerial *this;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621613c;
  local_c = ExceptionList;
  iVar3 = 0;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360ee800((int)param_1);
  if (0 < iVar1) {
    do {
      this = (CSerial *)FUN_360ee810(param_1,iVar3);
      iVar1 = CSerial::IsUsed(this);
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360ee800((int)param_1);
    } while (iVar3 < iVar1);
  }
  ExceptionList = local_c;
  return iVar2;
}

