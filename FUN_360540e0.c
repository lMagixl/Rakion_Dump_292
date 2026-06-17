
void __fastcall FUN_360540e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *this;
  int iVar8;
  int iVar9;
  int local_a4;
  CListHead local_90 [20];
  undefined1 local_7c [56];
  undefined1 local_44 [56];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211c42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_3604a760(param_1 + 0x50);
  FUN_36054650(local_90);
  local_4 = 0;
  FUN_360562d0(local_90,iVar1);
  local_a4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_3604a750((void *)(param_1 + 0x50),local_a4);
      puVar3 = (undefined4 *)FUN_36054990(local_90,local_a4);
      puVar4 = *(undefined4 **)(iVar2 + 0x48);
      puVar6 = puVar3;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3[0xd] = *(undefined4 *)(iVar2 + 0x48);
      iVar7 = FUN_3604aa50(iVar2 + 0x4c);
      puVar4 = (undefined4 *)FUN_3604c350(puVar3 + 8,iVar7);
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          piVar5 = (int *)FUN_3604a700((void *)(iVar2 + 0x4c),iVar9);
          iVar8 = *piVar5;
          if (piVar5[1] == 0) {
            puVar6 = *(undefined4 **)(iVar8 + 0x14);
            puVar3 = *(undefined4 **)(iVar8 + 0x10);
            this = local_44;
          }
          else {
            puVar6 = *(undefined4 **)(iVar8 + 0x10);
            puVar3 = *(undefined4 **)(iVar8 + 0x14);
            this = local_7c;
          }
          puVar6 = (undefined4 *)FUN_360de880(this,puVar3,puVar6,iVar8);
          puVar3 = puVar4;
          for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          iVar9 = iVar9 + 1;
          puVar4 = puVar4 + 0xe;
        } while (iVar9 < iVar7);
      }
      local_a4 = local_a4 + 1;
    } while (local_a4 < iVar1);
  }
  FUN_360e3f80((void *)(param_1 + 0x84),(undefined4 *)local_90);
  local_4 = 0xffffffff;
  thunk_FUN_36056320((undefined4 *)local_90);
  ExceptionList = local_c;
  return;
}

