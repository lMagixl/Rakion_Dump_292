
/* public: void __thiscall CWorld::DumpReferenceInfo(class CEntity *) */

void __thiscall CWorld::DumpReferenceInfo(CWorld *this,CEntity *param_1)

{
  CWorld *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc84f0  1547  ?DumpReferenceInfo@CWorld@@QAEXPAVCEntity@@@Z */
  puStack_8 = &LAB_3621448e;
  local_c = ExceptionList;
  this_00 = this + 0x3c;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_00,local_14);
      for (iVar1 = *(int *)(*(int *)(iVar1 + 0x78) + 0x20); iVar1 != 0;
          iVar1 = *(int *)(iVar1 + 0x2c)) {
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 0xc)) {
          iVar4 = 0;
          do {
            iVar5 = *(int *)(iVar1 + 8);
            if ((*(int *)(iVar5 + iVar4) == 7) &&
               (iVar2 = FUN_360cafb0(this_00,local_14),
               *(CEntity **)(iVar2 + *(int *)(iVar5 + iVar4 + 0xc)) == param_1)) {
              iVar5 = iVar3;
              iVar2 = FUN_360cafb0(this_00,local_14);
              CPrintF(s_Referenced_by_ID__0x_X_Property__36231eec,*(undefined4 *)(iVar2 + 0x1c),
                      iVar5);
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x20;
          } while (iVar3 < *(int *)(iVar1 + 0xc));
        }
      }
      local_14 = local_14 + 1;
      iVar1 = FUN_360caf20((int)this_00);
    } while (local_14 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

