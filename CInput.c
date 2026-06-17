
/* public: __thiscall CInput::CInput(void) */

CInput * __thiscall CInput::CInput(CInput *this)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2b080  115  ??0CInput@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f5ef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTCriticalSection::CTCriticalSection((CTCriticalSection *)this);
  iVar4 = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)(this + 0x40) = 0xc;
  puVar1 = (undefined4 *)thunk_FUN_361bf99c(0x170);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 1;
    *puVar1 = 0xd;
    _eh_vector_constructor_iterator_
              (puVar3,0x1c,0xd,CInputDevice::CInputDevice,CInputDevice::~CInputDevice);
  }
  *(undefined4 **)(this + 0x44) = puVar3;
  iVar2 = 0;
  do {
    *(int *)(*(int *)(this + 0x44) + 8 + iVar4) = iVar2;
    CInputDevice::ClearControlsValue((CInputDevice *)(*(int *)(this + 0x44) + iVar4));
    iVar4 = iVar4 + 0x1c;
    iVar2 = iVar2 + 1;
  } while (iVar4 < 0x150);
  FUN_36027c10();
  ExceptionList = local_c;
  return this;
}

