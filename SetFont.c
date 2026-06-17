
/* public: void __thiscall CDrawPort::SetFont(class CFontData *) */

void __thiscall CDrawPort::SetFont(CDrawPort *this,CFontData *param_1)

{
  CFontData *pCVar1;
  int iVar2;
  
                    /* 0x695c0  3471  ?SetFont@CDrawPort@@QAEXPAVCFontData@@@Z */
  if (((*(uint *)(*(int *)(param_1 + 0x1048) + 0x1c) & 0x100000) != 0) &&
     ((*(uint *)(param_1 + 0x30) & 4) == 0)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) >> 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) >> 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) >> 1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) >> 1;
    pCVar1 = param_1 + 0x50;
    iVar2 = 0x100;
    do {
      *(int *)(pCVar1 + -8) = *(int *)(pCVar1 + -8) >> 1;
      *(int *)(pCVar1 + -4) = *(int *)(pCVar1 + -4) >> 1;
      *(int *)pCVar1 = *(int *)pCVar1 >> 1;
      *(int *)(pCVar1 + 4) = *(int *)(pCVar1 + 4) >> 1;
      pCVar1 = pCVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(CFontData **)(this + 4) = param_1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0xcb;
  return;
}

