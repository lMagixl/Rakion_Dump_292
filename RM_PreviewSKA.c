
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_PreviewSKA(class CModelInstance &,class CDrawPort *,enum SkaPreviewFlags,long) */

void __cdecl
RM_PreviewSKA(CModelInstance *param_1,CDrawPort *param_2,SkaPreviewFlags param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x162380  2920
                       ?RM_PreviewSKA@@YAXAAVCModelInstance@@PAVCDrawPort@@W4SkaPreviewFlags@@J@Z */
  uVar2 = DAT_362fe1ac;
  puStack_8 = &LAB_3621a56a;
  local_c = ExceptionList;
  DAT_362fdfe8 = param_2;
  DAT_362fe1ac = 0;
  local_4 = 0;
  DAT_362fdfd0 = param_3;
  DAT_362a6bac = param_4;
  ExceptionList = &local_c;
  CalculateRenderingData(param_1);
  iVar3 = FUN_36162460(0x362fe990);
  if (1 < iVar3) {
    iVar4 = 0x8c;
    iVar3 = iVar3 + -1;
    do {
      _DAT_362fdfdc = *(undefined4 *)(iVar4 + DAT_362fe994);
      iVar1 = iVar4 + DAT_362fe994;
      DAT_362fdff8 = DAT_362fdff8 + 1;
      RM_SetObjectMatrices(param_1);
      FUN_36162300((undefined4 *)param_1,iVar1);
      iVar4 = iVar4 + 0x8c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_36163450();
  FUN_36161550();
  DAT_362fe1ac = uVar2;
  ExceptionList = local_c;
  return;
}

