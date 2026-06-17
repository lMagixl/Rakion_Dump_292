
/* void __cdecl TR_UpdateTopMap(class CTerrain *) */

void __cdecl TR_UpdateTopMap(CTerrain *param_1)

{
                    /* 0x173060  3792  ?TR_UpdateTopMap@@YAXPAVCTerrain@@@Z */
  if (_bWorldEditorApp != 0) {
    if (DAT_362c5430 != 0) {
      FUN_36176c10((int)param_1);
      return;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  }
  return;
}

