
undefined4 __cdecl FUN_36046950(CTString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_36047bd0(0x362bf3fc);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      iVar2 = CTString::operator==((CTString *)(iVar1 + 4 + DAT_362bf400),param_1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x20;
      iVar2 = FUN_36047bd0(0x362bf3fc);
    } while (iVar3 < iVar2);
  }
  return 0;
}

