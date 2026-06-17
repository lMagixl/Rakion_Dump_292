
/* public: __thiscall CPlayerSource::CPlayerSource(void) */

CPlayerSource * __thiscall CPlayerSource::CPlayerSource(CPlayerSource *this)

{
  int iVar1;
  CPlayerSource *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x107b60  200  ??0CPlayerSource@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217926;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CPlayerCharacter::CPlayerCharacter((CPlayerCharacter *)(this + 8));
  local_4 = 0;
  CTCriticalSection::CTCriticalSection((CTCriticalSection *)(this + 0x4c));
  local_4 = CONCAT31(local_4._1_3_,1);
  CPlayerAction::CPlayerAction((CPlayerAction *)(this + 0x58));
  this_00 = this + 0xa0;
  iVar1 = 10;
  do {
    CPlayerAction::CPlayerAction((CPlayerAction *)this_00);
    this_00 = this_00 + 0x48;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0xfffffffe;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  CPlayerAction::Clear((CPlayerAction *)(this + 0x58));
  ExceptionList = local_c;
  return this;
}

