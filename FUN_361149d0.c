
void __fastcall FUN_361149d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  TR_BeginRenderingView((CAnyProjection3D *)(param_1 + 0x3c),*(CDrawPort **)(param_1 + 8));
  piVar2 = *(int **)(param_1 + 0xe4c);
  while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
    TR_SetTerrainPlacement
              ((Matrix<float,3,3> *)(piVar2[4] + 0x54),(Vector<float,3> *)(piVar2[4] + 0x3c));
    TR_RenderTerrain((CTerrain *)(piVar2 + -6));
    piVar2 = piVar1;
  }
  TR_EndRenderingView();
  return;
}

