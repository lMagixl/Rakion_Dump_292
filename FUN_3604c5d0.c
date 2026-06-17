
void __thiscall
FUN_3604c5d0(void *this,void *param_1,void *param_2,int param_3,int *param_4,void *param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  void *this_00;
  undefined4 *puVar6;
  double *pdVar7;
  CListHead *pCVar8;
  int local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c4;
  CListHead local_bc [20];
  undefined4 local_a8 [5];
  CListHead local_94 [20];
  CListHead local_80 [20];
  CListHead local_6c [20];
  CListHead local_58 [20];
  double local_44 [4];
  undefined4 local_24 [5];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3621184a;
  local_c = ExceptionList;
  local_c4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3604a7d0((int)param_2);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604a790(param_2,local_c4);
      iVar1 = FUN_3604a790(param_1,*(int *)(iVar1 + 0x68) + param_3);
      *(int *)this = iVar1;
      iVar2 = FUN_3604a790(param_2,local_c4);
      *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar2 + 0x6c);
      iVar1 = FUN_3604a790(param_2,local_c4);
      *(undefined4 *)(*(int *)this + 0x70) = *(undefined4 *)(iVar1 + 0x70);
      iVar1 = FUN_3604a790(param_2,local_c4);
      *(undefined4 *)(*(int *)this + 0x74) = *(undefined4 *)(iVar1 + 0x74);
      iVar1 = FUN_3604a790(param_2,local_c4);
      *(undefined4 *)(*(int *)this + 0x78) = *(undefined4 *)(iVar1 + 0x78);
      iVar1 = FUN_3604a790(param_2,local_c4);
      *(undefined4 *)(*(int *)this + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
      iVar2 = FUN_3604a790(param_2,local_c4);
      iVar1 = *(int *)this;
      pcVar3 = StringDuplicate(*(char **)(iVar2 + 0x80));
      StringFree(*(char **)(iVar1 + 0x80));
      *(char **)(iVar1 + 0x80) = pcVar3;
      iVar1 = FUN_3604a790(param_2,local_c4);
      this_00 = (void *)(iVar1 + 0x50);
      local_e8 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar1 = FUN_3604a760((int)this_00);
      if (0 < iVar1) {
        do {
          uVar4 = FUN_3604a750(this_00,local_e8);
          *(undefined4 *)((int)this + 8) = uVar4;
          iVar1 = FUN_3604a750(this_00,local_e8);
          if ((*(byte *)(iVar1 + 0xc4) & 1) == 0) {
            local_d0 = *param_4;
            local_dc = param_4[1];
            local_d4 = param_4[2];
            local_d8 = param_4[3];
            local_e0 = 0;
          }
          else {
            local_d0 = param_4[4];
            local_dc = param_4[5];
            local_d4 = param_4[6];
            local_d8 = param_4[7];
            local_e0 = 2;
          }
          FUN_3604b9a0(local_bc);
          pCVar8 = local_bc;
          local_4._0_1_ = 2;
          iVar1 = FUN_3604a750(this_00,local_e8);
          FUN_3604c460((void *)(iVar1 + 0x4c),pCVar8);
          *(undefined4 *)((int)this + 0xc) = 0;
          *(undefined4 *)((int)this + 0x10) = 0;
          *(undefined4 *)((int)this + 0x14) = 0;
          *(undefined4 *)((int)this + 0x18) = 0;
          if ((*(int *)((int)this + 0x2c) == 0) ||
             (iVar1 = FUN_3604a750(this_00,local_e8), (*(byte *)(iVar1 + 0xc4) & 2) == 0)) {
            iVar2 = 0;
            local_4 = CONCAT31(local_4._1_3_,3);
            iVar1 = FUN_3604a7d0((int)param_5);
            if (0 < iVar1) {
              do {
                FUN_3604c3a0((undefined4 *)((int)this + 0x34));
                iVar1 = FUN_3604a790(param_5,iVar2);
                iVar1 = FUN_3604a790(param_1,*(int *)(iVar1 + 0x68) + param_6);
                *(int *)((int)this + 4) = iVar1;
                iVar5 = FUN_3604a790(param_5,iVar2);
                *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar5 + 0x6c);
                iVar1 = FUN_3604a790(param_5,iVar2);
                *(undefined4 *)(*(int *)((int)this + 4) + 0x70) = *(undefined4 *)(iVar1 + 0x70);
                iVar1 = FUN_3604a790(param_5,iVar2);
                *(undefined4 *)(*(int *)((int)this + 4) + 0x74) = *(undefined4 *)(iVar1 + 0x74);
                iVar1 = FUN_3604a790(param_5,iVar2);
                *(undefined4 *)(*(int *)((int)this + 4) + 0x78) = *(undefined4 *)(iVar1 + 0x78);
                iVar1 = FUN_3604a790(param_5,iVar2);
                *(undefined4 *)(*(int *)((int)this + 4) + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
                iVar1 = FUN_3604a790(param_5,iVar2);
                puVar6 = (undefined4 *)(*(int *)((int)this + 4) + 0x80);
                pcVar3 = StringDuplicate(*(char **)(iVar1 + 0x80));
                StringFree((char *)*puVar6);
                *puVar6 = pcVar3;
                *(undefined4 *)((int)this + 0x1c) = 0;
                *(undefined4 *)((int)this + 0x24) = 0;
                *(undefined4 *)((int)this + 0x20) = 0;
                *(undefined4 *)((int)this + 0x28) = 0;
                FUN_3604cf00(local_a8,local_bc);
                iVar1 = FUN_3604a750(this_00,local_e8);
                iVar5 = FUN_3604a750(this_00,local_e8);
                uVar4 = *(undefined4 *)(iVar5 + 0x48);
                local_4._0_1_ = 4;
                puVar6 = *(undefined4 **)(iVar1 + 0x48);
                pdVar7 = local_44;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pdVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  pdVar7 = (double *)((int)pdVar7 + 4);
                }
                FUN_3604cf00(local_24,local_a8);
                local_4._0_1_ = 3;
                local_10 = uVar4;
                thunk_FUN_3604c3a0(local_a8);
                local_4._0_1_ = 5;
                iVar1 = FUN_3604a790(param_5,iVar2);
                FUN_360e3830(local_94,local_44,*(double **)(iVar1 + 0x8c));
                local_4._0_1_ = 6;
                FUN_360e1c30((undefined4 *)local_94);
                FUN_360e1c30((undefined4 *)local_6c);
                FUN_360e1c30((undefined4 *)local_58);
                FUN_360e1c30((undefined4 *)local_80);
                FUN_3604d350(this,local_94,local_d0);
                FUN_3604d350(this,local_6c,local_d4);
                FUN_3604d350(this,local_58,local_d8);
                FUN_3604c3a0((undefined4 *)local_bc);
                FUN_3604bda0(local_bc,local_80);
                FUN_3604bda0(local_bc,(CListHead *)((int)this + 0x34));
                local_4._0_1_ = 5;
                FUN_360e15a0((undefined4 *)local_94);
                local_4 = CONCAT31(local_4._1_3_,3);
                thunk_FUN_3604c3a0(local_24);
                iVar2 = iVar2 + 1;
                iVar1 = FUN_3604a7d0((int)param_5);
              } while (iVar2 < iVar1);
            }
            local_4._0_1_ = 2;
            FUN_3604d350(this,local_bc,local_dc);
            local_4 = CONCAT31(local_4._1_3_,1);
            thunk_FUN_3604c3a0((undefined4 *)local_bc);
          }
          else {
            FUN_3604d350(this,local_bc,local_e0);
            local_4 = CONCAT31(local_4._1_3_,1);
            thunk_FUN_3604c3a0((undefined4 *)local_bc);
          }
          local_e8 = local_e8 + 1;
          iVar1 = FUN_3604a760((int)this_00);
        } while (local_e8 < iVar1);
      }
      local_c4 = local_c4 + 1;
      local_4 = local_4 & 0xffffff00;
      iVar1 = FUN_3604a7d0((int)param_2);
    } while (local_c4 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

