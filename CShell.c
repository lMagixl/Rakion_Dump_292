
/* public: __thiscall CShell::CShell(void) */

CShell * __thiscall CShell::CShell(CShell *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x38e10  227  ??0CShell@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362103cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTCriticalSection::CTCriticalSection((CTCriticalSection *)this);
  local_4 = 0;
  FUN_36039980((CListHead *)(this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  DAT_362a2614 = FUN_3603a060((undefined4 *)&DAT_362bec70);
  ExceptionList = local_c;
  return this;
}

