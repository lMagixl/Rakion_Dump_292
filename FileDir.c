
/* public: class CTFileName __thiscall CTFileName::FileDir(void)const  */

undefined4 * __thiscall CTFileName::FileDir(CTFileName *this)

{
  undefined4 uVar1;
  char *_Str;
  char *pcVar2;
  undefined4 *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x25f70  1612  ?FileDir@CTFileName@@QBE?AV1@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f251;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _Str = StringDuplicate(*(char **)this);
  uVar1 = *(undefined4 *)(this + 4);
  local_4 = 1;
  pcVar2 = strrchr(_Str,0x5c);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = StringDuplicate(&DAT_36224180);
    *in_stack_00000004 = pcVar2;
    in_stack_00000004[1] = 0;
  }
  else {
    pcVar2[1] = '\0';
    pcVar2 = StringDuplicate(_Str);
    *in_stack_00000004 = pcVar2;
    in_stack_00000004[1] = uVar1;
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(_Str);
  ExceptionList = local_c;
  return in_stack_00000004;
}

