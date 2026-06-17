
/* void __cdecl RM_RenderColisionBox(class CModelInstance &,struct ColisionBox &,unsigned long) */

void __cdecl RM_RenderColisionBox(CModelInstance *param_1,ColisionBox *param_2,ulong param_3)

{
  ulong uVar1;
  
                    /* 0x164490  2923
                       ?RM_RenderColisionBox@@YAXAAVCModelInstance@@AAUColisionBox@@K@Z */
  (*DAT_362c4674)(0);
  (*DAT_362c462c)();
  (*DAT_362c4628)();
  (*DAT_362c45f8)();
  (*DAT_362c45f0)();
  uVar1 = RM_GetFlags();
  if ((uVar1 & 1) != 0) {
    FUN_36163830(*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),
                 *(float *)(param_2 + 0xc),*(float *)(param_2 + 0x10),*(float *)(param_2 + 0x14));
    return;
  }
  (*DAT_362c4600)();
  (*DAT_362c4648)(0x1b,0x1c);
  FUN_36163e90((void *)(param_3 | 0x7f),*(float *)param_2,*(float *)(param_2 + 4),
               *(float *)(param_2 + 8),*(float *)(param_2 + 0xc),*(float *)(param_2 + 0x10),
               *(float *)(param_2 + 0x14));
  return;
}

