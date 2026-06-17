
/* void __cdecl TR_RenderWireFrame(class CTerrain *,unsigned long) */

void __cdecl TR_RenderWireFrame(CTerrain *param_1,ulong param_2)

{
  bool bVar1;
  
                    /* 0x1829c0  3779  ?TR_RenderWireFrame@@YAXPAVCTerrain@@K@Z */
  if (**(int **)(param_1 + 0x2c) != 0) {
    if ((DAT_36300a58 == 0) || (param_1 != DAT_36300a5c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_361825c0();
    }
    FUN_36182790();
    FUN_36182000();
    if (bVar1) {
      FUN_36182290();
    }
    TR_CleanRender(param_1);
  }
  return;
}

