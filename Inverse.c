
/* public: void __thiscall CObject3D::Inverse(void) */

void __thiscall CObject3D::Inverse(CObject3D *this)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4a280  2350  ?Inverse@CObject3D@@QAEXXZ */
  puStack_8 = &LAB_362116e6;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3604a7d0((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604a790(this,iVar2);
      FUN_36050ae0(iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_3604a7d0((int)this);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

