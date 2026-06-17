
/* public: int __thiscall CModelInstance::AddFlagsToPlayingAnim(long,unsigned long) */

int __thiscall
CModelInstance::AddFlagsToPlayingAnim(CModelInstance *this,long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x15d680  977  ?AddFlagsToPlayingAnim@CModelInstance@@QAEHJK@Z */
  iVar1 = FUN_36035f40((int)(this + 0xbc));
  if (0 < iVar1) {
    iVar1 = *(int *)(this + 0xc0) + -0x18 + iVar1 * 0x18;
    iVar2 = FUN_36035f50(iVar1 + 8);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar1 = *(int *)(iVar1 + 0xc);
      do {
        if (*(int *)(iVar1 + 0x10) == param_1) {
          *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | param_2;
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}

