
/* public: void __thiscall CBladeTrail::FadeIn(class Vector<float,3>,class Vector<float,3>,float) */

void __thiscall
CBladeTrail::FadeIn(CBladeTrail *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8)

{
  int iVar1;
  CBladeTrail *pCVar2;
  int iVar3;
  ulonglong uVar4;
  
                    /* 0x18b420  1602  ?FadeIn@CBladeTrail@@QAEXV?$Vector@M$02@@0M@Z */
  *(undefined4 *)(this + 0x2f24) = 0;
  *(float *)(this + 0x2f20) = (float)*(int *)(this + 0x2f18) * param_8 + *(float *)(this + 0x2f20);
  uVar4 = FUN_361bfd6c();
  iVar1 = (int)uVar4;
  if (0 < iVar1) {
    iVar1 = 1;
    *(undefined4 *)(this + 0x2f20) = 0;
  }
  iVar3 = *(int *)(this + 0x2f14) + iVar1;
  *(int *)(this + 0x2f14) = iVar3;
  if (*(int *)(this + 0x2f10) < iVar3) {
    iVar3 = *(int *)(this + 0x2f10);
  }
  *(int *)(this + 0x2f14) = iVar3;
  iVar3 = iVar3 + -1;
  *(int *)(this + 0x2f2c) = *(int *)(this + 0x2f28) * iVar3 + 1;
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 600) = param_5;
  *(undefined4 *)(this + 0x25c) = param_6;
  *(undefined4 *)(this + 0x260) = param_7;
  if ((0 < iVar1) && (0 < iVar3)) {
    pCVar2 = this + (iVar3 * 3 + 0x93) * 4;
    do {
      *(undefined4 *)(pCVar2 + -0x24c) = *(undefined4 *)(pCVar2 + -600);
      *(undefined4 *)(pCVar2 + -0x248) = *(undefined4 *)(pCVar2 + -0x254);
      *(undefined4 *)(pCVar2 + -0x244) = *(undefined4 *)(pCVar2 + -0x250);
      *(undefined4 *)(pCVar2 + 0xc) = *(undefined4 *)pCVar2;
      *(undefined4 *)(pCVar2 + 0x10) = *(undefined4 *)(pCVar2 + 4);
      iVar3 = iVar3 + -1;
      *(undefined4 *)(pCVar2 + 0x14) = *(undefined4 *)(pCVar2 + 8);
      pCVar2 = pCVar2 + -0xc;
    } while (iVar3 != 0);
  }
  return;
}

