
/* public: __thiscall CBladeTrail::CBladeTrail(void) */

void __thiscall CBladeTrail::CBladeTrail(CBladeTrail *this)

{
  int iVar1;
  CBladeTrail *pCVar2;
  
                    /* 0x18b510  29  ??0CBladeTrail@@QAE@XZ */
  *(undefined4 *)(this + 0x2f18) = 10;
  *(undefined4 *)(this + 0x2f1c) = 10;
  *(undefined4 *)(this + 0x2f14) = 0;
  *(undefined4 *)(this + 0x2f24) = 0;
  *(undefined4 *)(this + 0x2f20) = 0;
  *(undefined4 *)(this + 0x2f10) = 0x14;
  *(undefined4 *)(this + 0x2f28) = 6;
  *(undefined4 *)(this + 0x2f2c) = 0xfffffffb;
  iVar1 = 0x32;
  pCVar2 = this;
  do {
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
    *(undefined4 *)(pCVar2 + 8) = 0;
    *(undefined4 *)(pCVar2 + 600) = 0;
    *(undefined4 *)(pCVar2 + 0x25c) = 0;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(pCVar2 + 0x260) = 0;
    pCVar2 = pCVar2 + 0xc;
  } while (iVar1 != 0);
  iVar1 = 0x34;
  pCVar2 = this + 0x720;
  do {
    *(undefined4 *)(pCVar2 + -0x270) = 0;
    *(undefined4 *)(pCVar2 + -0x26c) = 0;
    *(undefined4 *)(pCVar2 + -0x268) = 0;
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(pCVar2 + 8) = 0;
    pCVar2 = pCVar2 + 0xc;
  } while (iVar1 != 0);
  iVar1 = 400;
  pCVar2 = this + 0x1c50;
  do {
    *(undefined4 *)(pCVar2 + -0x12c0) = 0;
    *(undefined4 *)(pCVar2 + -0x12bc) = 0;
    *(undefined4 *)(pCVar2 + -0x12b8) = 0;
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(pCVar2 + 8) = 0;
    pCVar2 = pCVar2 + 0xc;
  } while (iVar1 != 0);
  return;
}

