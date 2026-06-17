
/* public: void __thiscall CObject3D::RemoveEmptySectors(void) */

void __thiscall CObject3D::RemoveEmptySectors(CObject3D *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4a560  3132  ?RemoveEmptySectors@CObject3D@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621173e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_3604b600(local_1c);
  iVar4 = 0;
  local_4 = 1;
  iVar1 = FUN_3604a7d0((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604a790(this,iVar4);
      iVar1 = FUN_3604a760(iVar1 + 0x50);
      if (iVar1 == 0) {
        uVar2 = FUN_3604a790(this,iVar4);
        FUN_3604b620(local_1c,uVar2);
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_3604a7d0((int)this);
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_3604ab80((int)local_1c);
  if (0 < iVar1) {
    do {
      puVar3 = (undefined4 *)FUN_3604a8d0(local_1c,iVar4);
      FUN_3604ae70(this,puVar3);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_3604ab80((int)local_1c);
    } while (iVar4 < iVar1);
  }
  FUN_3604b7d0(local_1c);
  ExceptionList = local_c;
  return;
}

