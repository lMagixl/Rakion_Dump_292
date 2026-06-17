
undefined4 __thiscall FUN_3603f4b0(void *this,int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  char *local_18;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210aee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = (char *)FUN_360469f0(this);
  if (DAT_362bef98 == 0) {
    puVar1 = (undefined4 *)
             CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_18);
    local_4 = 0;
    pcVar2 = StringDuplicate((char *)*puVar1);
    StringFree((char *)*unaff_ESI);
    *unaff_ESI = pcVar2;
    unaff_ESI[1] = 0;
    local_4 = 0xffffffff;
    StringFree(local_18);
    iVar3 = FUN_3603f2c0();
    if (iVar3 != 0) {
      ExceptionList = local_c;
      return 1;
    }
  }
  if ((-1 < param_1) && (-1 < (int)local_14)) {
    pcVar2 = StringDuplicate(*(char **)this);
    StringFree((char *)*unaff_ESI);
    *unaff_ESI = pcVar2;
    unaff_ESI[1] = *(undefined4 *)((int)this + 4);
    ExceptionList = local_c;
    return 2;
  }
  if (DAT_362bef98 != 0) {
    puVar1 = (undefined4 *)
             CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_14);
    local_4 = 1;
    pcVar2 = StringDuplicate((char *)*puVar1);
    StringFree((char *)*unaff_ESI);
    *unaff_ESI = pcVar2;
    unaff_ESI[1] = 0;
    local_4 = 0xffffffff;
    StringFree(local_14);
    iVar3 = FUN_3603f2c0();
    if (iVar3 != 0) {
      ExceptionList = local_c;
      return 1;
    }
  }
  iVar3 = CTString::operator!=((CTString *)&_fnmCDPath,&DAT_362274e9);
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)CTString::operator+((CTString *)&_fnmCDPath,(CTString *)&local_10);
    local_4 = 2;
    pcVar2 = StringDuplicate((char *)*puVar1);
    StringFree((char *)*unaff_ESI);
    *unaff_ESI = pcVar2;
    unaff_ESI[1] = 0;
    local_4 = 0xffffffff;
    StringFree(local_10);
    iVar3 = FUN_3603f2c0();
    if (iVar3 != 0) {
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

