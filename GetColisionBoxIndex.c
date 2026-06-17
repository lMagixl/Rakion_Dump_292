
/* public: long __thiscall CModelInstance::GetColisionBoxIndex(long) */

long __thiscall CModelInstance::GetColisionBoxIndex(CModelInstance *this,long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x15c7a0  1767  ?GetColisionBoxIndex@CModelInstance@@QAEJJ@Z */
  iVar1 = FUN_36035f90((undefined4 *)(this + 0x1c));
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int *)(this + 0x20) + 0x1c);
    do {
      if (*piVar3 == param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 8;
    } while (iVar2 < iVar1);
  }
  return 0;
}

