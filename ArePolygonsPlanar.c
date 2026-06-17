
/* public: int __thiscall CObject3D::ArePolygonsPlanar(void) */

int __thiscall CObject3D::ArePolygonsPlanar(CObject3D *this)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x49e60  1062  ?ArePolygonsPlanar@CObject3D@@QAEHXZ */
  puStack_8 = &LAB_36211698;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3604a7d0((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604a790(this,iVar2);
      iVar1 = FUN_360503c0(iVar1);
      if (iVar1 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_3604a7d0((int)this);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return 1;
}

