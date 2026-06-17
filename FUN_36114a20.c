
void __fastcall FUN_36114a20(int param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = DAT_362fcbbc;
  bVar5 = DAT_362fcbb8 != 0;
  bVar6 = DAT_362fcbb0 != 0;
  TR_BeginRenderingView((CAnyProjection3D *)(param_1 + 0x3c),*(CDrawPort **)(param_1 + 8));
  piVar4 = *(int **)(param_1 + 0xe4c);
  while (piVar1 = (int *)*piVar4, piVar1 != (int *)0x0) {
    iVar2 = piVar4[4];
    if (bVar5) {
      TR_SetTerrainPlacement((Matrix<float,3,3> *)(iVar2 + 0x54),(Vector<float,3> *)(iVar2 + 0x3c));
      TR_RenderWireFrame((CTerrain *)(piVar4 + -6),uVar3);
    }
    piVar4 = piVar1;
    if (bVar6) {
      TR_SetTerrainPlacement((Matrix<float,3,3> *)(iVar2 + 0x54),(Vector<float,3> *)(iVar2 + 0x3c));
    }
  }
  TR_EndRenderingView();
  return;
}

