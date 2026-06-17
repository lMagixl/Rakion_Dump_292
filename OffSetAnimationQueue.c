
/* public: void __thiscall CModelInstance::OffSetAnimationQueue(float) */

void __thiscall CModelInstance::OffSetAnimationQueue(CModelInstance *this,float param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x15d2c0  2711  ?OffSetAnimationQueue@CModelInstance@@QAEXM@Z */
  iVar3 = FUN_36035f40((int)(this + 0xbc));
  iVar7 = 0;
  if (3 < iVar3) {
    iVar5 = 0;
    iVar6 = (iVar3 - 4U >> 2) + 1;
    iVar7 = iVar6 * 4;
    do {
      iVar1 = iVar5 + 0x48;
      *(float *)(*(int *)(this + 0xc0) + iVar5) =
           *(float *)(*(int *)(this + 0xc0) + iVar5) - param_1;
      pfVar2 = (float *)(*(int *)(this + 0xc0) + 0x18 + iVar5);
      pfVar4 = (float *)(*(int *)(this + 0xc0) + 0x18 + iVar5);
      iVar5 = iVar5 + 0x60;
      *pfVar4 = *pfVar2 - param_1;
      *(float *)(*(int *)(this + 0xc0) + -0x18 + iVar1) =
           *(float *)(*(int *)(this + 0xc0) + -0x18 + iVar1) - param_1;
      iVar6 = iVar6 + -1;
      *(float *)(*(int *)(this + 0xc0) + iVar1) =
           *(float *)(*(int *)(this + 0xc0) + iVar1) - param_1;
    } while (iVar6 != 0);
  }
  if (iVar7 < iVar3) {
    iVar5 = iVar7 * 0x18;
    iVar3 = iVar3 - iVar7;
    do {
      pfVar2 = (float *)(*(int *)(this + 0xc0) + iVar5);
      pfVar4 = (float *)(*(int *)(this + 0xc0) + iVar5);
      iVar5 = iVar5 + 0x18;
      iVar3 = iVar3 + -1;
      *pfVar4 = *pfVar2 - param_1;
    } while (iVar3 != 0);
  }
  return;
}

