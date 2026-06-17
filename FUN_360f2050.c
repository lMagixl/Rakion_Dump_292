
undefined4 __thiscall FUN_360f2050(void *this,int param_1,char param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined3 extraout_var;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int local_8;
  void *local_4;
  
  local_4 = this;
  if (param_2 == '\0') {
    if ((*(int *)((int)this + 0x9c) != 0) && (*(int *)((int)this + 0xd4) == 0)) {
      iVar3 = FUN_360febf0((int)this + 0x88);
      bVar2 = FUN_360feaa0(iVar3);
      if ((CONCAT31(extraout_var,bVar2) != 0) &&
         (iVar3 = FUN_360ff020((void *)((int)this + 0x88),&local_8,0), iVar3 != 0)) {
        do {
          puVar4 = FUN_360fec00((int *)((int)this + 0x88));
          this = local_4;
          uVar1 = puVar4[1];
          uVar6 = puVar4[2] - 0xc;
          puVar7 = puVar4 + 0xb;
          puVar8 = *(uint **)(param_1 + 0x14);
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(char *)puVar8 = (char)*puVar7;
            puVar7 = (uint *)((int)puVar7 + 1);
            puVar8 = (uint *)((int)puVar8 + 1);
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar6;
          if (*(uint *)((int)local_4 + 0x8c) < *puVar4) {
            *(uint *)((int)local_4 + 0x8c) = *puVar4;
          }
          FUN_360ff0d0(puVar4);
        } while ((uVar1 & 0x100) == 0);
        return 1;
      }
    }
  }
  else {
    iVar3 = FUN_360ff020((void *)((int)this + 0xc0),&local_8,1);
    if (iVar3 != 0) {
      do {
        puVar4 = FUN_360fec00((int *)((int)this + 0xc0));
        uVar1 = puVar4[1];
        uVar6 = puVar4[2] - 0xc;
        puVar7 = puVar4 + 0xb;
        puVar8 = *(uint **)(param_1 + 0x14);
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar6;
        if (*(uint *)((int)this + 0x8c) < *puVar4) {
          *(uint *)((int)this + 0x8c) = *puVar4;
        }
        FUN_360ff0d0(puVar4);
      } while ((uVar1 & 8) == 0);
      return 1;
    }
  }
  return 0;
}

