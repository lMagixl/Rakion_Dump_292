
/* void __cdecl TR_ClearTerrain(class CTerrain *) */

void __cdecl TR_ClearTerrain(CTerrain *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* 0x177f90  3748  ?TR_ClearTerrain@@YAXPAVCTerrain@@@Z */
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  TR_DiscardShadingInfos(param_1);
  FUN_36177f80();
  if ((int *)puVar1[3] != (int *)0x0) {
    FUN_36175520((int *)puVar1[3]);
    puVar1[3] = 0;
  }
  if ((void *)puVar1[2] != (void *)0x0) {
    FreeMemory((void *)puVar1[2]);
    puVar1[2] = 0;
  }
  if ((int *)puVar1[4] != (int *)0x0) {
    FUN_36175520((int *)puVar1[4]);
    puVar1[4] = 0;
  }
  if ((int *)puVar1[5] != (int *)0x0) {
    FUN_36175520((int *)puVar1[5]);
    puVar1[5] = 0;
  }
  if ((void *)*puVar1 != (void *)0x0) {
    FreeMemory((void *)*puVar1);
    *puVar1 = 0;
  }
  iVar2 = FUN_36172d20(puVar1 + 0x42);
  if (0 < iVar2) {
    do {
      TRL_DeleteLayer(param_1,0,1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

