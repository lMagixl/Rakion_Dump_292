
/* public: class CTString const __thiscall CPlayerCharacter::GetNameForPrinting(void)const  */

CTString * __thiscall CPlayerCharacter::GetNameForPrinting(CPlayerCharacter *this)

{
  char *pcVar1;
  CTString *this_00;
  CTString *in_stack_00000004;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x134fc0  2011  ?GetNameForPrinting@CPlayerCharacter@@QBE?BVCTString@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219104;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_362387f4);
  local_4 = 1;
  this_00 = (CTString *)operator+((char *)&local_10,(CTString *)&DAT_362387f0);
  local_4._0_1_ = 2;
  CTString::operator+(this_00,in_stack_00000004);
  local_4._0_1_ = 1;
  StringFree(local_10);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return in_stack_00000004;
}

