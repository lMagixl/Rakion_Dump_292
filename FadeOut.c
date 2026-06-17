
/* public: void __thiscall CBladeTrail::FadeOut(class Vector<float,3>,class Vector<float,3>,float)
    */

void __thiscall
CBladeTrail::FadeOut
          (CBladeTrail *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  CBladeTrail *pCVar2;
  int iVar3;
  float10 extraout_ST0;
  ulonglong uVar4;
  int iStack0000001c;
  
                    /* 0x18b070  1603  ?FadeOut@CBladeTrail@@QAEXV?$Vector@M$02@@0M@Z */
  iVar1 = *(int *)(this + 0x2f28);
  *(undefined4 *)(this + 0x2f20) = 0;
  uVar4 = FUN_361bfd6c();
  iVar3 = *(int *)(this + 0x2f2c) - (int)uVar4;
  *(int *)(this + 0x2f2c) = iVar3;
  *(float *)(this + 0x2f24) = (float)(extraout_ST0 - (float10)(int)uVar4);
  if (0 < iVar3) {
    iVar1 = (iVar3 + -2) / iVar1 + 2;
    iStack0000001c = *(int *)(this + 0x2f14) - iVar1;
    if (0 < iStack0000001c) {
      *(int *)(this + 0x2f14) = iVar1;
    }
    *(undefined4 *)this = param_2;
    *(undefined4 *)(this + 4) = param_3;
    *(undefined4 *)(this + 8) = param_4;
    *(undefined4 *)(this + 600) = param_5;
    *(undefined4 *)(this + 0x25c) = param_6;
    *(undefined4 *)(this + 0x260) = param_7;
    if (0 < iStack0000001c) {
      do {
        iVar1 = *(int *)(this + 0x2f14) + -1;
        if (0 < iVar1) {
          pCVar2 = this + (iVar1 * 3 + 0x93) * 4;
          do {
            *(undefined4 *)(pCVar2 + -0x24c) = *(undefined4 *)(pCVar2 + -600);
            *(undefined4 *)(pCVar2 + -0x248) = *(undefined4 *)(pCVar2 + -0x254);
            *(undefined4 *)(pCVar2 + -0x244) = *(undefined4 *)(pCVar2 + -0x250);
            *(undefined4 *)(pCVar2 + 0xc) = *(undefined4 *)pCVar2;
            *(undefined4 *)(pCVar2 + 0x10) = *(undefined4 *)(pCVar2 + 4);
            iVar1 = iVar1 + -1;
            *(undefined4 *)(pCVar2 + 0x14) = *(undefined4 *)(pCVar2 + 8);
            pCVar2 = pCVar2 + -0xc;
          } while (iVar1 != 0);
        }
        iStack0000001c = iStack0000001c + -1;
      } while (iStack0000001c != 0);
    }
    return;
  }
  *(undefined4 *)(this + 0x2f2c) = 0;
  *(undefined4 *)(this + 0x2f14) = 0;
  return;
}

