
/* void __cdecl TR_SetTopMapSize(class CTerrain *,long,long) */

void __cdecl TR_SetTopMapSize(CTerrain *param_1,long param_2,long param_3)

{
  int iVar1;
  
                    /* 0x177540  3787  ?TR_SetTopMapSize@@YAXPAVCTerrain@@JJ@Z */
  iVar1 = *(int *)(param_1 + 0x2c);
  if (_bWorldEditorApp != 0) {
    *(long *)(iVar1 + 0x20) = param_2;
    *(long *)(iVar1 + 0x24) = param_3;
    FUN_36176c10((int)param_1);
  }
  return;
}

