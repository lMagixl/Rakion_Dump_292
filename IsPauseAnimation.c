
/* public: int __thiscall CModelInstance::IsPauseAnimation(long) */

int __thiscall CModelInstance::IsPauseAnimation(CModelInstance *this,long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0x15d110  2438  ?IsPauseAnimation@CModelInstance@@QAEHJ@Z */
  iVar1 = FUN_36035f40((int)(this + 0xbc));
  if (0 < iVar1) {
    iVar1 = *(int *)(this + 0xc0) + -0x18 + iVar1 * 0x18;
    iVar2 = FUN_36035f50(iVar1 + 8);
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = *(int **)(iVar1 + 0xc);
      do {
        if (piVar4[4] == param_1) {
          return *piVar4;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 8;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}

