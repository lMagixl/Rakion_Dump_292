
/* public: void __thiscall CAnimData::SetFrames(long,long,long *) */

void __thiscall CAnimData::SetFrames(CAnimData *this,long param_1,long param_2,long *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x1f770  3477  ?SetFrames@CAnimData@@QAEXJJPAJ@Z */
  iVar3 = param_1 * 0x2c;
  pvVar1 = *(void **)(iVar3 + 0x28 + *(int *)(this + 0x18));
  if (pvVar1 != (void *)0x0) {
    FreeMemory(pvVar1);
  }
  pvVar1 = AllocMemory(param_2 * 4);
  *(void **)(iVar3 + 0x28 + *(int *)(this + 0x18)) = pvVar1;
  iVar2 = 0;
  if (param_2 < 1) {
    *(long *)(iVar3 + 0x24 + *(int *)(this + 0x18)) = param_2;
    return;
  }
  do {
    *(long *)(*(int *)(iVar3 + 0x28 + *(int *)(this + 0x18)) + iVar2 * 4) = param_3[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_2);
  *(long *)(iVar3 + 0x24 + *(int *)(this + 0x18)) = param_2;
  return;
}

