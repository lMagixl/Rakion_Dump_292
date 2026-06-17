
/* public: void __thiscall CWorld::PrecacheEntities_t(void) */

void __thiscall CWorld::PrecacheEntities_t(CWorld *this)

{
  CWorld *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc8ca0  2802  ?PrecacheEntities_t@CWorld@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214500;
  local_c = ExceptionList;
  this_00 = this + 0x15c;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  iVar4 = 0;
  local_1c = 0;
  local_4 = 0;
  iVar2 = FUN_360caf20((int)this_00);
  if (0 < iVar2) {
    do {
      CallProgressHook_t((float)local_1c / (float)iVar1);
      piVar3 = (int *)FUN_360cafb0(this_00,iVar4);
      (**(code **)(*piVar3 + 0x24))();
      local_1c = local_1c + 1;
      iVar4 = iVar4 + 1;
      iVar2 = FUN_360caf20((int)this_00);
    } while (iVar4 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

