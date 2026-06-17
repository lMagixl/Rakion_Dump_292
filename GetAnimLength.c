
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CModelInstance::GetAnimLength(long,int) */

float __thiscall CModelInstance::GetAnimLength(CModelInstance *this,long param_1,int param_2)

{
  int iVar1;
  CModelInstance *local_4;
  
                    /* 0x15d430  1706  ?GetAnimLength@CModelInstance@@QAEMJH@Z */
  local_4 = this;
  iVar1 = FindAnimationByID(this,param_1,&param_1,(long *)&local_4);
  if (iVar1 == 0) {
    return _DAT_362287b0;
  }
  iVar1 = FUN_36035fb0(this + 0x34,param_1);
  iVar1 = (int)local_4 * 0x2c + *(int *)(iVar1 + 0x18);
  if (param_2 != 0) {
    return (float)*(int *)(iVar1 + 4) * *(float *)(iVar1 + 8);
  }
  return (float)(*(int *)(iVar1 + 4) + -1) * *(float *)(iVar1 + 8);
}

