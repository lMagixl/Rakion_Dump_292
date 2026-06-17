
void FUN_36027c10(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = &DAT_362b9b08;
  for (iVar6 = 0x200; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_362b9708;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_362b9608;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_362b9508;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  piVar5 = &DAT_362a1b94;
  iVar6 = 0x25;
  do {
    iVar2 = piVar5[-1];
    iVar3 = *piVar5;
    iVar4 = piVar5[2];
    cVar1 = *(char *)((int)piVar5 + 9);
    if (-1 < piVar5[1]) {
      (&DAT_362b9b08)[piVar5[1]] = iVar2;
    }
    if (-1 < iVar3) {
      (&DAT_362b9708)[iVar3] = iVar2;
    }
    if (-1 < (char)iVar4) {
      *(char *)((int)&DAT_362b9608 + iVar2) = (char)iVar4;
    }
    if (-1 < cVar1) {
      *(char *)((int)&DAT_362b9508 + iVar2) = cVar1;
    }
    iVar2 = piVar5[5];
    iVar3 = piVar5[6];
    iVar4 = piVar5[8];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    if (-1 < piVar5[7]) {
      (&DAT_362b9b08)[piVar5[7]] = iVar2;
    }
    if (-1 < iVar3) {
      (&DAT_362b9708)[iVar3] = iVar2;
    }
    if (-1 < (char)iVar4) {
      *(char *)((int)&DAT_362b9608 + iVar2) = (char)iVar4;
    }
    if (-1 < cVar1) {
      *(char *)((int)&DAT_362b9508 + iVar2) = cVar1;
    }
    iVar2 = piVar5[0xb];
    iVar3 = piVar5[0xc];
    iVar4 = piVar5[0xe];
    cVar1 = *(char *)((int)piVar5 + 0x39);
    if (-1 < piVar5[0xd]) {
      (&DAT_362b9b08)[piVar5[0xd]] = iVar2;
    }
    if (-1 < iVar3) {
      (&DAT_362b9708)[iVar3] = iVar2;
    }
    if (-1 < (char)iVar4) {
      *(char *)((int)&DAT_362b9608 + iVar2) = (char)iVar4;
    }
    if (-1 < cVar1) {
      *(char *)((int)&DAT_362b9508 + iVar2) = cVar1;
    }
    piVar5 = piVar5 + 0x12;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

