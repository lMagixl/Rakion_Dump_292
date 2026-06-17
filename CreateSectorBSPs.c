
/* public: void __thiscall CObject3D::CreateSectorBSPs(void) */

void __thiscall CObject3D::CreateSectorBSPs(CObject3D *this)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4a210  1432  ?CreateSectorBSPs@CObject3D@@QAEXXZ */
  puStack_8 = &LAB_362116d4;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3604a7d0((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604a790(this,iVar2);
      FUN_360540e0(iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_3604a7d0((int)this);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

