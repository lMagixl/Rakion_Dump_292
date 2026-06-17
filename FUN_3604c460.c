
void FUN_3604c460(void *param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *this;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 local_70 [56];
  undefined1 local_38 [56];
  
  iVar1 = FUN_3604aa50((int)param_1);
  FUN_3604c350(param_2,iVar1);
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_3604a700(param_1,iVar7);
      if (piVar2[1] == 0) {
        puVar3 = (undefined4 *)FUN_3604bc20(param_2,iVar7);
        iVar5 = *piVar2;
        puVar4 = *(undefined4 **)(iVar5 + 0x14);
        puVar6 = *(undefined4 **)(iVar5 + 0x10);
        this = local_38;
      }
      else {
        puVar3 = (undefined4 *)FUN_3604bc20(param_2,iVar7);
        iVar5 = *piVar2;
        puVar4 = *(undefined4 **)(iVar5 + 0x10);
        puVar6 = *(undefined4 **)(iVar5 + 0x14);
        this = local_70;
      }
      puVar4 = (undefined4 *)FUN_360de880(this,puVar6,puVar4,iVar5);
      iVar7 = iVar7 + 1;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
    } while (iVar7 < iVar1);
  }
  return;
}

