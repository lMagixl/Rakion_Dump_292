
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CModelInstance::GetAnimPlayingTime(long) */

float __thiscall CModelInstance::GetAnimPlayingTime(CModelInstance *this,long param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0x15d4a0  1707  ?GetAnimPlayingTime@CModelInstance@@QAEMJ@Z */
  iVar2 = FUN_36035f40((int)(this + 0xbc));
  if (0 < iVar2) {
    pfVar1 = (float *)(*(int *)(this + 0xc0) + -0x18 + iVar2 * 0x18);
    iVar2 = FUN_36035f50((int)(pfVar1 + 2));
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = (int *)((int)pfVar1[3] + 0x10);
      do {
        if (*piVar4 == param_1) {
          return *(float *)(_pTimer + 0xc) - *pfVar1;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 8;
      } while (iVar3 < iVar2);
    }
  }
  return _DAT_3622376c;
}

