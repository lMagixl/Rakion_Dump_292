
void __thiscall FUN_3612edd0(void *this,CTerrain *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  CTerrain::Clear(param_1);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x10);
  iVar3 = FUN_3612e830(this,(int)param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  FUN_3612e7e0(this,1);
  return;
}

