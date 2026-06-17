
/* public: void __thiscall CSerial::Reload(void) */

void __thiscall CSerial::Reload(CSerial *this)

{
  char *pcVar1;
  CTFileStream local_98 [120];
  CSerial *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x36e10  3097  ?Reload@CSerial@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_362100bd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff5c;
  ExceptionList = &local_10;
  local_20 = this;
  CChangeable::MarkChanged((CChangeable *)(this + 4));
  local_1c = StringDuplicate(*(char **)(this + 0xc));
  local_18 = *(undefined4 *)(this + 0x10);
  local_8 = 0;
  (**(code **)(*(int *)this + 8))();
  local_8._0_1_ = 1;
  CTFileStream::CTFileStream(local_98);
  local_8._0_1_ = 2;
  CTFileStream::Open_t(local_98,(CTFileName *)&local_1c,1);
  (**(code **)(*(int *)this + 0xc))(local_98);
  local_8 = CONCAT31(local_8._1_3_,1);
  CTFileStream::~CTFileStream(local_98);
  local_8 = 0;
  pcVar1 = StringDuplicate(local_1c);
  StringFree(*(char **)(this + 0xc));
  *(char **)(this + 0xc) = pcVar1;
  *(undefined4 *)(this + 0x10) = local_18;
  local_8 = 0xffffffff;
  StringFree(local_1c);
  ExceptionList = local_10;
  return;
}

