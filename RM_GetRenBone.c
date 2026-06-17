
/* struct RenBone * __cdecl RM_GetRenBone(class CModelInstance &,long) */

RenBone * __cdecl RM_GetRenBone(CModelInstance *param_1,long param_2)

{
  int iVar1;
  RenBone *pRVar2;
  int iVar3;
  
                    /* 0x16d940  2917  ?RM_GetRenBone@@YAPAURenBone@@AAVCModelInstance@@J@Z */
  iVar1 = FUN_3615fda0((int)(param_1 + 0xc));
  if (iVar1 == 0) {
    CalculateRenderingData(param_1);
  }
  iVar1 = FUN_3615fda0((int)(param_1 + 0xc));
  iVar3 = 1;
  if (1 < iVar1) {
    pRVar2 = *(RenBone **)(param_1 + 0x10);
    do {
      pRVar2 = pRVar2 + 0xe8;
      if (**(int **)pRVar2 == param_2) {
        return pRVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (RenBone *)0x0;
}

