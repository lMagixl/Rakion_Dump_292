
/* public: bool __thiscall Xenesis::xFile::skip(unsigned int) */

bool __thiscall Xenesis::xFile::skip(xFile *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
                    /* 0x1a48e0  4419  ?skip@xFile@Xenesis@@QAE_NI@Z */
  uVar1 = *(uint *)(this + 8);
  uVar2 = *(uint *)(*(int *)(this + 0x20) + 8);
  if (uVar2 <= uVar1) {
    return false;
  }
  if (param_1 != 0) {
    if (uVar2 < uVar1 + param_1) {
      param_1 = uVar2 - uVar1;
    }
    uVar2 = *(int *)(this + 0x10) + param_1;
    if (uVar2 < 0x20001) {
      *(uint *)(this + 8) = uVar1 + param_1;
      *(uint *)(this + 0x10) = uVar2;
      return true;
    }
    *(uint *)(this + 8) = (uVar1 - *(int *)(this + 0x10)) + 0x20000;
    while (uVar2 = uVar2 - 0x20000, 0x1ffff < uVar2) {
      bVar3 = skipBlock(this);
      if (!bVar3) {
        return false;
      }
      *(int *)(this + 8) = *(int *)(this + 8) + 0x20000;
    }
    bVar3 = loadBlock(this,*(uchar **)(this + 0x18));
    if (!bVar3) {
      return false;
    }
    *(uint *)(this + 0x10) = uVar2;
    *(uint *)(this + 8) = *(int *)(this + 8) + uVar2;
  }
  return true;
}

