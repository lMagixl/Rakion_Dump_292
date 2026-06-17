
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl CalculateRenderingData(class CModelInstance &) */

void __cdecl CalculateRenderingData(CModelInstance *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  
                    /* 0x16bf70  1136  ?CalculateRenderingData@@YAXAAVCModelInstance@@@Z */
  bVar4 = DAT_362fe1b8 != 0;
  if (bVar4) {
    pcVar1 = Translate(s_I_ETRSWarning___Recursively_calc_3623ccca + 2,4);
    CPrintF(pcVar1);
  }
  DAT_362fe1b8 = 1;
  FUN_36163450();
  FUN_36163440((int)param_1);
  RM_SetObjectMatrices(param_1);
  CModelInstance::GetAllFramesBBox(param_1,(AABBox<float,3> *)&DAT_362a6bdc);
  if (DAT_362a6bb8 == _DAT_36227d20) {
    fVar5 = FUN_36166700();
    DAT_362fe0e4 = (float)(fVar5 * (float10)_DAT_362a6bb4);
  }
  else {
    DAT_362fe0e4 = DAT_362a6bb8;
  }
  FUN_3616b710();
  FUN_3616b810((int *)param_1,0.0);
  FUN_3616bee0((int)param_1);
  iVar2 = FUN_36162460(0x362fe990);
  if (1 < iVar2) {
    iVar3 = 0x8c;
    iVar2 = iVar2 + -1;
    do {
      FUN_361675d0((int)param_1,(int *)(iVar3 + DAT_362fe994));
      iVar3 = iVar3 + 0x8c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((((DAT_362a413c != 0) && (DAT_362fe1e8 != (code *)0x0)) && (_bWorldEditorApp == 0)) &&
     (!bVar4)) {
    (*DAT_362fe1e8)(DAT_362fe1ec);
  }
  if (DAT_362a4130 == 0) {
    FUN_361658e0((int)param_1);
    DAT_362fe1b8 = 0;
    return;
  }
  FUN_36165ad0((int)param_1);
  DAT_362fe1b8 = 0;
  return;
}

