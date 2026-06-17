
void __fastcall FUN_36050ae0(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_20 [8];
  
  pvVar1 = (void *)(param_1 + 0x14);
  iVar7 = 0;
  iVar2 = FUN_3604aaa0((int)pvVar1);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_3604a740(pvVar1,iVar7);
      puVar5 = local_20;
      pvVar4 = (void *)FUN_3604a740(pvVar1,iVar7);
      puVar5 = (undefined4 *)FUN_3604c180(pvVar4,puVar5);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_3604aaa0((int)pvVar1);
    } while (iVar7 < iVar2);
  }
  pvVar1 = (void *)(param_1 + 0x50);
  iVar7 = 0;
  iVar2 = FUN_3604a760((int)pvVar1);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_3604a750(pvVar1,iVar7);
      pvVar4 = (void *)(iVar2 + 0x4c);
      iVar8 = 0;
      iVar2 = FUN_3604aa50((int)pvVar4);
      if (0 < iVar2) {
        do {
          iVar2 = FUN_3604a700(pvVar4,iVar8);
          iVar2 = *(int *)(iVar2 + 4);
          iVar6 = FUN_3604a700(pvVar4,iVar8);
          *(uint *)(iVar6 + 4) = (uint)(iVar2 == 0);
          iVar8 = iVar8 + 1;
          iVar2 = FUN_3604aa50((int)pvVar4);
        } while (iVar8 < iVar2);
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_3604a760((int)pvVar1);
    } while (iVar7 < iVar2);
  }
  return;
}

