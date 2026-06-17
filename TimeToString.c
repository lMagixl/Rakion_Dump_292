
/* class CTString __cdecl TimeToString(float) */

float __cdecl TimeToString(float param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  CTString *this;
  ulonglong uVar3;
  float in_stack_00000008;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x44de0  3828  ?TimeToString@@YA?AVCTString@@M@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211275;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  floor((double)in_stack_00000008);
  uVar3 = FUN_361bfd6c();
  uVar3 = (ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff;
  uVar1 = (longlong)uVar3 / 0x3c;
  this = (CTString *)((longlong)uVar3 % 0x3c);
  uVar3 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
  CTString::PrintF(this,(char *)&local_14,s__02d__02d__02d_36227704,(int)((longlong)uVar3 / 0x3c),
                   (int)((longlong)uVar3 % 0x3c),this);
  pcVar2 = StringDuplicate(local_14);
  *(char **)param_1 = pcVar2;
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  StringFree(local_14);
  ExceptionList = local_c;
  return param_1;
}

