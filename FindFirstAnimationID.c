
/* public: long __thiscall CModelInstance::FindFirstAnimationID(void) */

long __thiscall CModelInstance::FindFirstAnimationID(CModelInstance *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x15d3e0  1635  ?FindFirstAnimationID@CModelInstance@@QAEJXZ */
  iVar1 = FUN_36035fa0((int)(this + 0x34));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_36035fb0(this + 0x34,iVar4);
      iVar3 = FUN_3600c5e0((undefined4 *)(iVar2 + 0x14));
      if (0 < iVar3) {
        return **(long **)(iVar2 + 0x18);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 < iVar1);
  }
  return -1;
}

