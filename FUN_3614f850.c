
undefined4 __cdecl FUN_3614f850(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      (puVar7 = (undefined4 *)param_2[7], puVar7 == (undefined4 *)0x0)) ||
     (((code *)param_2[8] == (code *)0x0 || (param_2[9] == 0)))) {
    return 0xfffffffe;
  }
  puVar1 = (undefined4 *)(*(code *)param_2[8])(param_2[10],1,0x1ba8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  puVar2 = (undefined4 *)0x0;
  if ((puVar7[0xb] != 0) &&
     (puVar2 = (undefined4 *)(*(code *)param_2[8])(param_2[10],1 << ((byte)puVar7[7] & 0x1f),1),
     puVar2 == (undefined4 *)0x0)) {
    (*(code *)param_2[9])(param_2[10],puVar1);
    return 0xfffffffc;
  }
  puVar6 = param_1;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = puVar7;
  puVar8 = puVar1;
  for (iVar3 = 0x6ea; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar1[0x11] = puVar1 + ((puVar7[0x11] - (int)puVar7) + -0x528 >> 2) + 0x14a;
  puVar1[0x12] = puVar1 + ((puVar7[0x12] - (int)puVar7) + -0x528 >> 2) + 0x14a;
  puVar1[0x19] = puVar1 + ((puVar7[0x19] - (int)puVar7) + -0x528 >> 2) + 0x14a;
  if (puVar2 != (undefined4 *)0x0) {
    uVar5 = 1 << ((byte)puVar7[7] & 0x1f);
    puVar7 = (undefined4 *)puVar7[0xb];
    puVar6 = puVar2;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  puVar1[0xb] = puVar2;
  param_1[7] = puVar1;
  return 0;
}

