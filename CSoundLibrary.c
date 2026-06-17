
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CSoundLibrary::CSoundLibrary(void) */

CSoundLibrary * __thiscall CSoundLibrary::CSoundLibrary(CSoundLibrary *this)

{
  undefined8 uVar1;
  CSoundLibrary *pCVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9ff30  235  ??0CSoundLibrary@@QAE@XZ */
  puStack_8 = &LAB_36212f81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x10;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  local_4 = 1;
  CListHead::Clear((CListHead *)(this + 0x38));
  CListHead::Clear((CListHead *)(this + 0x458));
  uVar1 = _DAT_36227d98;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined2 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x468) = uVar1;
  *(undefined4 *)(this + 0x48) = 0;
  DAT_362ca0d8 = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  pCVar2 = this + 0x70;
  iVar3 = 0x32;
  do {
    *(undefined4 *)(pCVar2 + 4) = 0;
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 8) = 0;
    *(undefined4 *)(pCVar2 + 0xc) = 0;
    *(undefined4 *)(pCVar2 + 0x10) = 0;
    pCVar2 = pCVar2 + 0x14;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = local_c;
  return this;
}

