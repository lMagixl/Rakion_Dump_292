
void __thiscall
FUN_3604caf0(void *this,CObject3D *param_1,CObject3D *param_2,CObject3D *param_3,int *param_4,
            int *param_5)

{
  int iVar1;
  int iVar2;
  
  CObject3D::Clear(param_1);
  CObject3D::CreateSectorIndices(param_2);
  CObject3D::CreateSectorIndices(param_3);
  CObject3D::CreateSectorBSPs(param_2);
  CObject3D::CreateSectorBSPs(param_3);
  iVar1 = FUN_3604a7d0((int)param_2);
  iVar2 = FUN_3604a7d0((int)param_3);
  FUN_3604b080(param_1,iVar2 + iVar1);
  FUN_3604c5d0(this,param_1,param_2,0,param_4,param_3,iVar1);
  if (*(int *)((int)this + 0x30) == 0) {
    FUN_3604c5d0(this,param_1,param_3,iVar1,param_5,param_2,0);
  }
  return;
}

