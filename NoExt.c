
/* public: class CTFileName __thiscall CTFileName::NoExt(void)const  */

undefined4 * __thiscall CTFileName::NoExt(CTFileName *this)

{
  CTString *this_00;
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *in_stack_00000004;
  char *local_20;
  char *local_1c;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x26140  2676  ?NoExt@CTFileName@@QBE?AV1@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f2b7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FileName(this);
  local_4 = 1;
  this_00 = (CTString *)FileDir(this);
  local_4._0_1_ = 2;
  puVar1 = (undefined4 *)CTString::operator+(this_00,(CTString *)&local_20);
  local_4._0_1_ = 3;
  pcVar2 = StringDuplicate((char *)*puVar1);
  *in_stack_00000004 = pcVar2;
  in_stack_00000004[1] = 0;
  local_4._0_1_ = 2;
  StringFree(local_20);
  local_4._0_1_ = 1;
  StringFree(local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_14);
  ExceptionList = local_c;
  return in_stack_00000004;
}

