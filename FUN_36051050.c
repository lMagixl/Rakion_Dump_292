
void __fastcall FUN_36051050(int param_1)

{
  undefined4 *this;
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  int local_28;
  CListHead local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211aa2;
  local_c = ExceptionList;
  this = (undefined4 *)(param_1 + 0x3c);
  ExceptionList = &local_c;
  iVar1 = FUN_360543c0((int)this);
  if (iVar1 != 0) {
    iVar6 = 0;
    iVar1 = FUN_360543c0((int)this);
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)FUN_36054380(this,iVar6);
        *puVar2 = 0;
        iVar6 = iVar6 + 1;
        iVar1 = FUN_360543c0((int)this);
      } while (iVar6 < iVar1);
    }
    this_00 = (void *)(param_1 + 0x50);
    iVar6 = 0;
    iVar1 = FUN_3604a760((int)this_00);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a750(this_00,iVar6);
        pvVar7 = (void *)(iVar1 + 0x4c);
        iVar1 = FUN_3604aa50((int)pvVar7);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            puVar2 = (undefined4 *)FUN_3604a700(pvVar7,iVar1);
            *(undefined4 *)*puVar2 = 1;
            iVar1 = iVar1 + 1;
            iVar3 = FUN_3604aa50((int)pvVar7);
          } while (iVar1 < iVar3);
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_3604a760((int)this_00);
      } while (iVar6 < iVar1);
    }
    iVar3 = 0;
    iVar6 = 0;
    iVar1 = FUN_360543c0((int)this);
    if (0 < iVar1) {
      do {
        piVar4 = (int *)FUN_36054380(this,iVar6);
        if (*piVar4 != 0) {
          iVar3 = iVar3 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_360543c0((int)this);
      } while (iVar6 < iVar1);
    }
    FUN_36054360(local_20);
    local_4 = 0;
    puVar2 = (undefined4 *)FUN_3604c300(local_20,iVar3);
    iVar6 = 0;
    iVar1 = FUN_360543c0((int)this);
    if (0 < iVar1) {
      do {
        piVar4 = (int *)FUN_36054380(this,iVar6);
        if (*piVar4 != 0) {
          puVar5 = (undefined4 *)FUN_36054380(this,iVar6);
          *puVar2 = *puVar5;
          puVar2[1] = puVar5[1];
          puVar2[2] = puVar5[2];
          puVar2[3] = puVar5[3];
          puVar2[4] = puVar5[4];
          puVar2[5] = puVar5[5];
          iVar1 = FUN_36054380(this,iVar6);
          *(undefined4 **)(iVar1 + 8) = puVar2;
          puVar2 = puVar2 + 6;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_360543c0((int)this);
      } while (iVar6 < iVar1);
    }
    local_28 = 0;
    iVar1 = FUN_3604a760((int)this_00);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_3604a750(this_00,local_28);
        pvVar7 = (void *)(iVar1 + 0x4c);
        iVar6 = 0;
        iVar1 = FUN_3604aa50((int)pvVar7);
        if (0 < iVar1) {
          do {
            puVar2 = (undefined4 *)FUN_3604a700(pvVar7,iVar6);
            piVar4 = (int *)FUN_3604a700(pvVar7,iVar6);
            *puVar2 = *(undefined4 *)(*piVar4 + 8);
            iVar6 = iVar6 + 1;
            iVar1 = FUN_3604aa50((int)pvVar7);
          } while (iVar6 < iVar1);
        }
        local_28 = local_28 + 1;
        iVar1 = FUN_3604a760((int)this_00);
      } while (local_28 < iVar1);
    }
    FUN_36055af0(this);
    FUN_36055140(this,local_20);
    local_4 = 0xffffffff;
    thunk_FUN_36055af0((undefined4 *)local_20);
  }
  ExceptionList = local_c;
  return;
}

