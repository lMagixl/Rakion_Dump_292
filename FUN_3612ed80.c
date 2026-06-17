
void __thiscall FUN_3612ed80(void *this,CBrush3D *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  CBrush3D::Clear(param_1);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x10);
  iVar3 = FUN_3612e7b0(this,(int)param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  FUN_3612e760(this,1);
  return;
}

