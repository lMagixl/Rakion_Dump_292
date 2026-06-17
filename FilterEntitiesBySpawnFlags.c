
/* public: void __thiscall CWorld::FilterEntitiesBySpawnFlags(unsigned long) */

void __thiscall CWorld::FilterEntitiesBySpawnFlags(CWorld *this,ulong param_1)

{
  CWorld *this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CSelection<class_CEntity,1> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xca990  1626  ?FilterEntitiesBySpawnFlags@CWorld@@QAEXK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214876;
  local_c = ExceptionList;
  uVar1 = *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x68);
  ExceptionList = &local_c;
  *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x68) = 1;
  FUN_360ccb50((undefined4 *)local_1c);
  iVar4 = 0;
  this_00 = this + 0x15c;
  local_4 = 1;
  iVar2 = FUN_360caf20((int)this_00);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_360cafb0(this_00,iVar4);
      if ((*(int *)(iVar2 + 4) != 4) &&
         (iVar2 = FUN_360cafb0(this_00,iVar4), *(int *)(iVar2 + 4) != 8)) {
        iVar2 = FUN_360cafb0(this_00,iVar4);
        uVar3 = *(uint *)(iVar2 + 0x14) & param_1;
        if (((uVar3 & 0xffff) == 0) || ((uVar3 & 0xffff0000) == 0)) {
          iVar2 = FUN_360cafb0(this_00,iVar4);
          FUN_360cceb0(local_1c,iVar2);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = FUN_360caf20((int)this_00);
    } while (iVar4 < iVar2);
  }
  local_4 = local_4 & 0xffffff00;
  DestroyEntities(this,local_1c);
  *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x68) = uVar1;
  FUN_360cce70((undefined4 *)local_1c);
  FUN_360cd280((int *)local_1c);
  ExceptionList = local_c;
  return;
}

