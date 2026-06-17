
int * __cdecl FUN_3604c500(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_50 [8];
  undefined4 local_30 [12];
  
  piVar1 = FUN_3604d100((void *)(param_1 + 0x50),1);
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_3604c260((void *)(param_1 + 0x14),1);
    puVar3 = *(undefined4 **)(param_2 + 0x48);
  }
  else {
    puVar2 = (undefined4 *)FUN_3604c260((void *)(param_1 + 0x14),1);
    puVar3 = (undefined4 *)FUN_3604c180(*(void **)(param_2 + 0x48),local_50);
    puVar6 = local_30;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = local_30;
  }
  puVar6 = puVar2;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar1[0x12] = (int)puVar2;
  piVar4 = FUN_3604c2b0((void *)(param_1 + 0x28),1);
  FUN_3604b940(piVar4,*(int *)(param_2 + 0x60));
  piVar1[0x18] = (int)piVar4;
  piVar1[0x32] = *(int *)(param_2 + 200);
  piVar4 = (int *)(param_2 + 100);
  piVar7 = piVar1 + 0x19;
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar1[0x31] = *(int *)(param_2 + 0xc4);
  piVar4 = (int *)(param_2 + 8);
  piVar7 = piVar1 + 2;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  return piVar1;
}

