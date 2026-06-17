
/* struct RenBone * __cdecl RM_GetRenBoneArray(class CModelInstance &,long &) */

RenBone * __cdecl RM_GetRenBoneArray(CModelInstance *param_1,long *param_2)

{
  int iVar1;
  
                    /* 0x16d9a0  2918  ?RM_GetRenBoneArray@@YAPAURenBone@@AAVCModelInstance@@AAJ@Z
                        */
  iVar1 = FUN_3615fda0((int)(param_1 + 0xc));
  if (iVar1 == 0) {
    CalculateRenderingData(param_1);
  }
  iVar1 = FUN_3615fda0((int)(param_1 + 0xc));
  *param_2 = iVar1;
  if (0 < iVar1) {
    return *(RenBone **)(param_1 + 0x10);
  }
  return (RenBone *)0x0;
}

