
void __cdecl FUN_36177740(CTerrain *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = param_2 + -1;
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  iVar9 = puVar3[7];
  iVar10 = puVar3[6];
  iVar6 = iVar9 + -1;
  iVar2 = iVar10 + -1;
  pvVar4 = (void *)puVar3[2];
  pvVar5 = (void *)*puVar3;
  puVar7 = AllocMemory(param_2 * param_3 * 2);
  puVar8 = AllocMemory((param_3 + -1) * iVar1);
  FUN_36177570(param_2,0,puVar7,iVar10,iVar9);
  FUN_361775c0(iVar1,0xff,puVar8,iVar2,iVar6);
  if (pvVar5 != (void *)0x0) {
    FreeMemory(pvVar5);
  }
  if (pvVar4 != (void *)0x0) {
    FreeMemory(pvVar4);
  }
  *puVar3 = puVar7;
  puVar3[2] = puVar8;
  puVar3[6] = param_2;
  puVar3[7] = param_3;
  FUN_361731d0((byte *)param_1,0);
  TR_SetShadowMapSize(param_1,puVar3[10],puVar3[0xb]);
  iVar9 = FUN_36172d20(puVar3 + 0x42);
  iVar10 = 0;
  if (0 < iVar9) {
    do {
      FUN_3617a070((byte *)param_1,iVar10,iVar1,param_3 + -1,iVar2,iVar6);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  return;
}

