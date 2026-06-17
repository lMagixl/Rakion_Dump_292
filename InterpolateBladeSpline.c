
/* public: void __thiscall CBladeTrail::InterpolateBladeSpline(void) */

void __thiscall CBladeTrail::InterpolateBladeSpline(CBladeTrail *this)

{
  CBladeTrail *pCVar1;
  CBladeTrail *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  Vector<float,3> local_18 [12];
  Vector<float,3> local_c [12];
  
                    /* 0x18b1b0  2346  ?InterpolateBladeSpline@CBladeTrail@@QAEXXZ */
  if (1 < *(int *)(this + 0x2f14)) {
    iVar4 = 1;
    if (1 < *(int *)(this + 0x2f14) + 1) {
      pCVar2 = this + 0x4bc;
      do {
        *(undefined4 *)pCVar2 = *(undefined4 *)(pCVar2 + -0x4bc);
        *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(pCVar2 + -0x4b8);
        *(undefined4 *)(pCVar2 + 8) = *(undefined4 *)(pCVar2 + -0x4b4);
        *(undefined4 *)(pCVar2 + 0x270) = *(undefined4 *)(pCVar2 + -0x264);
        *(undefined4 *)(pCVar2 + 0x274) = *(undefined4 *)(pCVar2 + -0x260);
        *(undefined4 *)(pCVar2 + 0x278) = *(undefined4 *)(pCVar2 + -0x25c);
        iVar4 = iVar4 + 1;
        pCVar2 = pCVar2 + 0xc;
      } while (iVar4 < *(int *)(this + 0x2f14) + 1);
    }
    *(undefined4 *)(this + 0x4b0) = *(undefined4 *)this;
    *(undefined4 *)(this + 0x4b4) = *(undefined4 *)(this + 4);
    *(undefined4 *)(this + 0x4b8) = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 0x720) = *(undefined4 *)(this + 600);
    *(undefined4 *)(this + 0x724) = *(undefined4 *)(this + 0x25c);
    *(undefined4 *)(this + 0x728) = *(undefined4 *)(this + 0x260);
    pCVar1 = this + *(int *)(this + 0x2f14) * 0xc + -0xc;
    pCVar2 = this + (*(int *)(this + 0x2f14) * 3 + 0x12f) * 4;
    *(undefined4 *)pCVar2 = *(undefined4 *)pCVar1;
    *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(pCVar1 + 4);
    *(undefined4 *)(pCVar2 + 8) = *(undefined4 *)(pCVar1 + 8);
    pCVar2 = this + (*(int *)(this + 0x2f14) * 3 + 0x93) * 4;
    pCVar1 = this + (*(int *)(this + 0x2f14) * 3 + 0x1cb) * 4;
    *(undefined4 *)pCVar1 = *(undefined4 *)pCVar2;
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(pCVar2 + 4);
    *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(pCVar2 + 8);
    iVar4 = 0;
    if (*(int *)(this + 0x2f14) != 1 && -1 < *(int *)(this + 0x2f14) + -1) {
      pCVar2 = this + 0x4c8;
      do {
        iVar5 = 0;
        if (0 < *(int *)(this + 0x2f28)) {
          do {
            puVar3 = (undefined4 *)
                     pwGetBSpline(local_18,(Vector<float,3> *)(pCVar2 + -0x18),
                                  (Vector<float,3> *)(pCVar2 + -0xc),(Vector<float,3> *)pCVar2,
                                  (float)(pCVar2 + 0xc));
            pCVar1 = this + (*(int *)(this + 0x2f28) * iVar4 + 0xcc + iVar5) * 0xc;
            *(undefined4 *)pCVar1 = *puVar3;
            *(undefined4 *)(pCVar1 + 4) = puVar3[1];
            *(undefined4 *)(pCVar1 + 8) = puVar3[2];
            puVar3 = (undefined4 *)
                     pwGetBSpline(local_c,(Vector<float,3> *)(pCVar2 + 600),
                                  (Vector<float,3> *)(pCVar2 + 0x264),
                                  (Vector<float,3> *)(pCVar2 + 0x270),(float)(pCVar2 + 0x27c));
            pCVar1 = this + (*(int *)(this + 0x2f28) * iVar4 + 0x25c + iVar5) * 0xc;
            *(undefined4 *)pCVar1 = *puVar3;
            *(undefined4 *)(pCVar1 + 4) = puVar3[1];
            *(undefined4 *)(pCVar1 + 8) = puVar3[2];
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(this + 0x2f28));
        }
        iVar4 = iVar4 + 1;
        pCVar2 = pCVar2 + 0xc;
      } while (iVar4 < *(int *)(this + 0x2f14) + -1);
    }
    pCVar2 = this + (*(int *)(this + 0x2f14) * 3 + 0x12f) * 4;
    pCVar1 = this + ((*(int *)(this + 0x2f14) + -1) * *(int *)(this + 0x2f28) + 0xcc) * 0xc;
    *(undefined4 *)pCVar1 = *(undefined4 *)pCVar2;
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(pCVar2 + 4);
    *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(pCVar2 + 8);
    pCVar2 = this + (*(int *)(this + 0x2f14) * 3 + 0x1cb) * 4;
    pCVar1 = this + ((*(int *)(this + 0x2f14) + -1) * *(int *)(this + 0x2f28) + 0x25c) * 0xc;
    *(undefined4 *)pCVar1 = *(undefined4 *)pCVar2;
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(pCVar2 + 4);
    *(undefined4 *)(pCVar1 + 8) = *(undefined4 *)(pCVar2 + 8);
  }
  return;
}

