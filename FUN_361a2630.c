
uint __cdecl FUN_361a2630(int param_1,short param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_8;
  uint local_4;
  
  puVar2 = &DAT_362a91a8;
  puVar4 = &DAT_362a8160;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = &DAT_362a91f0;
  puVar4 = &DAT_362a81a8;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar5 = (int)param_2;
  iVar1 = 0;
  local_4 = 0x12;
  puVar3 = &DAT_362a8160;
  do {
    iVar1 = (int)(short)iVar1;
    *puVar3 = *puVar3 ^ CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + param_1),
                                                   *(undefined1 *)((iVar1 + 1) % iVar5 + param_1)),
                                          *(undefined1 *)((iVar1 + 2) % iVar5 + param_1)),
                                 *(undefined1 *)((iVar1 + 3) % iVar5 + param_1));
    iVar1 = (iVar1 + 4) % iVar5;
    local_4 = local_4 - 1;
    puVar3 = puVar3 + 1;
  } while (local_4 != 0);
  local_8 = 0;
  local_4 = 0;
  puVar3 = &DAT_362a8164;
  iVar1 = 9;
  do {
    FUN_361a1e10(&local_8,&local_4);
    puVar3[-1] = local_8;
    *puVar3 = local_4;
    puVar3 = puVar3 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar3 = &DAT_362a81ac;
  iVar1 = 4;
  do {
    iVar5 = 0x80;
    do {
      FUN_361a1e10(&local_8,&local_4);
      puVar3[-1] = local_8;
      *puVar3 = local_4;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return local_8 & 0xffff0000;
}

