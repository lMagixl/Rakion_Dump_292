
/* void __cdecl TR_RenderTerrain(class CTerrain *) */

void __cdecl TR_RenderTerrain(CTerrain *param_1)

{
  int *piVar1;
  bool bVar2;
  
                    /* 0x182920  3778  ?TR_RenderTerrain@@YAXPAVCTerrain@@@Z */
  piVar1 = *(int **)(param_1 + 0x2c);
  if (*piVar1 != 0) {
    if ((DAT_36300a58 == 0) || (param_1 != DAT_36300a5c)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      FUN_361825c0();
    }
    FUN_36182790();
    FUN_36181710((int)param_1);
    if (DAT_362c5448 != 0) {
      FUN_36182000();
    }
    if (bVar2) {
      FUN_36182290();
    }
    if ((DAT_362c543c != 0) || (DAT_362c5440 != 0)) {
      FUN_3617df60((int)piVar1);
    }
    if (DAT_362c5434 != 0) {
      FUN_36182130((int)piVar1);
    }
    TR_CleanRender(param_1);
  }
  return;
}

