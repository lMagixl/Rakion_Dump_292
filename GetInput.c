
/* public: void __thiscall CInput::GetInput(int) */

void __thiscall CInput::GetInput(CInput *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2a760  1925  ?GetInput@CInput@@QAEXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f4b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)this,1);
  iVar3 = 0;
  local_4 = 0;
  if ((*(int *)(this + 0xc) != 0) && ((param_1 == 0 || (DAT_362a1b60 != 0)))) {
    iVar2 = 0;
    iVar1 = FUN_3600aa00((undefined4 *)(this + 0x40));
    if (0 < iVar1) {
      do {
        FUN_3602a6f0((undefined4 *)(*(int *)(this + 0x44) + iVar3));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x1c;
        iVar1 = FUN_3600aa00((undefined4 *)(this + 0x40));
      } while (iVar2 < iVar1);
    }
    *(int *)(this + 8) = param_1;
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_18);
    ExceptionList = local_c;
    return;
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

