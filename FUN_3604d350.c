
void __thiscall FUN_3604d350(void *this,CListHead *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *this_00;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  void *local_74;
  int *local_6c;
  undefined4 *local_68;
  int *local_64;
  int local_60;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  iVar2 = FUN_3604b9e0((int)param_1);
  iVar8 = 0;
  if ((iVar2 != 0) && (param_2 != 7)) {
    if (param_2 == 8) {
      FUN_3604bda0((void *)((int)this + 0x34),param_1);
      return;
    }
    this_00 = (void *)0x0;
    local_6c = (int *)0x0;
    local_74 = (void *)0x0;
    switch(param_2) {
    case 0:
      this_00 = *(void **)this;
      iVar8 = FUN_3604d150(this);
      break;
    case 1:
      this_00 = *(void **)this;
      iVar8 = FUN_3604d190(this);
      break;
    case 2:
      this_00 = *(void **)this;
      iVar8 = FUN_3604d1d0(this);
      break;
    case 3:
      this_00 = *(void **)this;
      iVar8 = FUN_3604d210(this);
      break;
    case 4:
      this_00 = *(void **)this;
      iVar8 = FUN_3604d250(this);
      local_74 = *(void **)((int)this + 4);
      local_6c = (int *)FUN_3604d2d0((int)this);
      break;
    case 5:
      this_00 = *(void **)((int)this + 4);
      iVar8 = FUN_3604d290((int)this);
      break;
    case 6:
      this_00 = *(void **)((int)this + 4);
      iVar8 = FUN_3604d310((int)this);
    }
    local_68 = (undefined4 *)0x0;
    local_64 = (int *)0x0;
    local_60 = 0;
    puVar3 = (undefined4 *)FUN_3604c210(this_00,iVar2 * 2);
    iVar4 = FUN_3604c300((void *)((int)this_00 + 0x3c),iVar2);
    iVar8 = FUN_3604b1a0((void *)(iVar8 + 0x4c),iVar2);
    if (local_74 != (void *)0x0) {
      local_68 = (undefined4 *)FUN_3604c210(local_74,iVar2 * 2);
      local_64 = (int *)FUN_3604c300((void *)((int)local_74 + 0x3c),iVar2);
      local_60 = FUN_3604b1a0((void *)((int)local_6c + 0x4c),iVar2);
    }
    iVar7 = 0;
    if (0 < iVar2) {
      local_6c = (int *)(iVar4 + 0x14);
      do {
        puVar5 = (undefined4 *)FUN_3604bc20(param_1,iVar7);
        local_50[0] = *puVar5;
        local_50[1] = puVar5[1];
        local_50[2] = puVar5[2];
        local_50[3] = puVar5[3];
        local_40 = puVar5[4];
        local_3c = puVar5[5];
        local_2c = 0;
        puVar9 = local_50;
        puVar6 = puVar3;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
        local_28[0] = puVar5[6];
        local_28[1] = puVar5[7];
        local_28[2] = puVar5[8];
        local_28[3] = puVar5[9];
        local_14 = puVar5[0xb];
        local_18 = puVar5[10];
        local_4 = 0;
        puVar9 = local_28;
        puVar6 = puVar3 + 10;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
        *local_6c = (int)(puVar3 + 10);
        local_6c[-1] = (int)puVar3;
        piVar1 = local_6c + -5;
        local_6c = local_6c + 6;
        *(undefined4 *)(iVar8 + 4 + iVar7 * 8) = 0;
        *(int **)(iVar8 + iVar7 * 8) = piVar1;
        iVar7 = iVar7 + 1;
        puVar3 = puVar3 + 0x14;
      } while (iVar7 < iVar2);
    }
    if ((local_74 != (void *)0x0) && (iVar8 = 0, 0 < iVar2)) {
      local_64 = (int *)((int)local_64 + 0x14);
      do {
        puVar6 = (undefined4 *)FUN_3604bc20(param_1,iVar8);
        local_28[0] = puVar6[6];
        local_28[1] = puVar6[7];
        local_28[2] = puVar6[8];
        local_28[3] = puVar6[9];
        local_14 = puVar6[0xb];
        local_18 = puVar6[10];
        local_4 = 0;
        puVar3 = local_28;
        puVar9 = local_68;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        }
        local_50[0] = *puVar6;
        local_50[1] = puVar6[1];
        local_50[2] = puVar6[2];
        local_50[3] = puVar6[3];
        local_3c = puVar6[5];
        local_40 = puVar6[4];
        local_2c = 0;
        puVar3 = local_50;
        puVar9 = local_68 + 10;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        }
        *local_64 = (int)(local_68 + 10);
        local_64[-1] = (int)local_68;
        *(undefined4 *)(local_60 + 4 + iVar8 * 8) = 0;
        *(int **)(local_60 + iVar8 * 8) = local_64 + -5;
        iVar8 = iVar8 + 1;
        local_64 = local_64 + 6;
        local_68 = local_68 + 0x14;
      } while (iVar8 < iVar2);
    }
  }
  return;
}

