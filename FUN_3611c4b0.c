
void __thiscall FUN_3611c4b0(void *this,int *param_1)

{
  CBrushMip *pCVar1;
  CBrush3D *this_00;
  CRelationDst *pCVar2;
  CBrushMip *pCVar3;
  float10 fVar4;
  float fVar5;
  
  FUN_36114360(0);
  FUN_36122640(this,(int)param_1);
  for (param_1 = *(int **)(param_1[0x3a] + 0x1b0); *param_1 != 0; param_1 = (int *)*param_1) {
    pCVar2 = CRelationLnk::GetDst((CRelationLnk *)(param_1 + -2));
    if ((((byte)pCVar2[-0x4c] & 2) == 0) || (*(int *)((int)this + 0xd40) != 0)) {
      pCVar1 = *(CBrushMip **)(pCVar2 + -0x58);
      this_00 = *(CBrush3D **)(pCVar1 + 0x14);
      FUN_3611bd10(this,*(float **)(this_00 + 0x668));
      if (((byte)this_00[0x670] & 2) == 0) {
        fVar4 = (float10)(**(code **)(**(int **)(this_00 + 0x664) + 0x40))();
        fVar5 = (float)fVar4;
      }
      else {
        fVar5 = 0.0;
      }
      fVar5 = CWorldRenderPrefs::GetCurrentMipBrushingFactor(&_wrpWorldRenderPrefs,fVar5);
      pCVar3 = CBrush3D::GetBrushMipByDistance(this_00,fVar5);
      if (pCVar1 == pCVar3) {
        FUN_3611c7e0(this,(int)(pCVar2 + -0x90));
      }
    }
  }
  FUN_36114360(1);
  return;
}

