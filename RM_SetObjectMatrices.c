
/* void __cdecl RM_SetObjectMatrices(class CModelInstance &) */

void __cdecl RM_SetObjectMatrices(CModelInstance *param_1)

{
  uint uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  float afStack_30 [6];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x163000  2934  ?RM_SetObjectMatrices@@YAXAAVCModelInstance@@@Z */
  puVar2 = RM_GetRenderFlags();
  uVar1 = *puVar2;
  if ((char)uVar1 < '\0') {
    (*DAT_362c4640)();
  }
  else {
    (*DAT_362c4614)();
  }
  if (((DAT_362fe940 != 0) && (0 < DAT_362a40e4)) &&
     ((*(int *)(DAT_362fe940 + 0x7c) != 0 || (*(int *)(DAT_362fe940 + 0x80) != 0)))) {
    if ((uVar1 & 0x100) == 0) {
      (*DAT_362c4618)();
      uVar3 = 0x40;
    }
    else {
      (*DAT_362c4644)();
      uVar3 = 0x41;
    }
    (*DAT_362c4658)(uVar3);
  }
  FUN_36162680((float *)&DAT_362fe118,(float *)&DAT_362fe0e8,(float *)(param_1 + 0x60));
  afStack_30[0] = *(float *)(param_1 + 0x90);
  afStack_30[5] = *(float *)(param_1 + 0x94);
  uStack_8 = *(undefined4 *)(param_1 + 0x98);
  afStack_30[1] = 0.0;
  afStack_30[2] = 0.0;
  afStack_30[3] = 0.0;
  afStack_30[4] = 0.0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_4 = 0;
  FUN_36162680((float *)&DAT_362fe148,(float *)&DAT_362fe118,afStack_30);
  return;
}

