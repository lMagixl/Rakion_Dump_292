
/* public: __thiscall CFontData::CFontData(void) */

CFontData * __thiscall CFontData::CFontData(CFontData *this)

{
  char *pcVar1;
  char *pcVar2;
  int extraout_EDX;
  CFontData *this_00;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x187ff0  108  ??0CFontData@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621ad47;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSerial::CSerial((CSerial *)this);
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x40) = pcVar1;
  *(undefined4 *)(this + 0x44) = 0;
  local_4._0_1_ = 1;
  this_00 = this + 0x48;
  iVar3 = 0x100;
  do {
    CFontCharData::CFontCharData((CFontCharData *)this_00);
    this_00 = (CFontData *)(extraout_EDX + 0x10);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x1048) = 0;
  pcVar1 = StringDuplicate(&DAT_3623dafc);
  local_4._0_1_ = 2;
  pcVar2 = StringDuplicate(pcVar1);
  StringFree(*(char **)(this + 0x40));
  *(char **)(this + 0x40) = pcVar2;
  *(undefined4 *)(this + 0x44) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  StringFree(pcVar1);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x30) = 2;
  *(undefined4 *)(this + 0x38) = 0x3f19999a;
  ExceptionList = local_c;
  return this;
}

