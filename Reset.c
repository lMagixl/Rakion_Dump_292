
/* public: void __thiscall CProfileForm::Reset(void) */

void __thiscall CProfileForm::Reset(CProfileForm *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x304d0  3159  ?Reset@CProfileForm@@QAEXXZ */
  puVar2 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  *(undefined4 *)(this + 0x38) = *puVar2;
  *(undefined4 *)(this + 0x3c) = puVar2[1];
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  iVar3 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      *(undefined4 *)(*(int *)(this + 0x14) + 4 + iVar3 * 8) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x10));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x18)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(this + 0x1c);
      *(undefined4 *)(iVar4 + 0x10 + iVar1) = 0;
      *(undefined4 *)(iVar4 + 0x14 + iVar1) = 0;
      iVar1 = *(int *)(this + 0x1c);
      *(undefined4 *)(iVar4 + 8 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0xc + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x1c + *(int *)(this + 0x1c)) = 0;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (iVar3 < *(int *)(this + 0x18));
  }
  return;
}

