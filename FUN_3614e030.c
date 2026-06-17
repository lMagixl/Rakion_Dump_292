
undefined4 __cdecl FUN_3614e030(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar1 + 0x2c) == 0) {
    iVar2 = (**(code **)(param_1 + 0x20))
                      (*(undefined4 *)(param_1 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x1c) & 0x1f),1);
    *(int *)(iVar1 + 0x2c) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(int *)(iVar1 + 0x20) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x1c) & 0x1f);
  }
  uVar3 = *(uint *)(iVar1 + 0x20);
  uVar5 = in_EAX - *(int *)(param_1 + 0x10);
  if (uVar3 <= uVar5) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc) - uVar3);
    puVar7 = *(undefined4 **)(iVar1 + 0x2c);
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
    return 0;
  }
  uVar3 = uVar3 - *(int *)(iVar1 + 0x28);
  if (uVar5 < uVar3) {
    uVar3 = uVar5;
  }
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc) - uVar5);
  puVar7 = (undefined4 *)(*(int *)(iVar1 + 0x2c) + *(int *)(iVar1 + 0x28));
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  uVar5 = uVar5 - uVar3;
  if (uVar5 != 0) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc) - uVar5);
    puVar7 = *(undefined4 **)(iVar1 + 0x2c);
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(uint *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
    return 0;
  }
  uVar5 = *(int *)(iVar1 + 0x28) + uVar3;
  *(uint *)(iVar1 + 0x28) = uVar5;
  if (uVar5 == *(uint *)(iVar1 + 0x20)) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  if (*(uint *)(iVar1 + 0x24) < *(uint *)(iVar1 + 0x20)) {
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) + uVar3;
  }
  return 0;
}

