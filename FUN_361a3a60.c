
void __thiscall FUN_361a3a60(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_4;
  
  uVar5 = param_2;
  puVar4 = &DAT_362aa210;
  puVar6 = this;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = &DAT_362aa258;
  puVar6 = (undefined4 *)((int)this + 0x48);
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = 0;
  puVar3 = (uint *)((int)this + 8);
  local_4 = 3;
  do {
    param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar2 % uVar5 + param_1),
                                         *(undefined1 *)((uVar2 + 1) % uVar5 + param_1)),
                                *(undefined1 *)((uVar2 + 2) % uVar5 + param_1)),
                       *(undefined1 *)((uVar2 + 3) % uVar5 + param_1));
    puVar3[-2] = puVar3[-2] ^ param_2;
    param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((uVar2 + 4) % uVar5 + param_1),
                                         *(undefined1 *)((uVar2 + 5) % uVar5 + param_1)),
                                *(undefined1 *)((uVar2 + 6) % uVar5 + param_1)),
                       *(undefined1 *)((uVar2 + 7) % uVar5 + param_1));
    puVar3[-1] = puVar3[-1] ^ param_2;
    param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((uVar2 + 8) % uVar5 + param_1),
                                         *(undefined1 *)((uVar2 + 9) % uVar5 + param_1)),
                                *(undefined1 *)((uVar2 + 10) % uVar5 + param_1)),
                       *(undefined1 *)((uVar2 + 0xb) % uVar5 + param_1));
    *puVar3 = *puVar3 ^ param_2;
    param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((uVar2 + 0xc) % uVar5 + param_1),
                                         *(undefined1 *)((uVar2 + 0xd) % uVar5 + param_1)),
                                *(undefined1 *)((uVar2 + 0xe) % uVar5 + param_1)),
                       *(undefined1 *)((uVar2 + 0xf) % uVar5 + param_1));
    puVar3[1] = puVar3[1] ^ param_2;
    param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((uVar2 + 0x10) % uVar5 + param_1),
                                         *(undefined1 *)((uVar2 + 0x11) % uVar5 + param_1)),
                                *(undefined1 *)((uVar2 + 0x12) % uVar5 + param_1)),
                       *(undefined1 *)((uVar2 + 0x13) % uVar5 + param_1));
    puVar3[2] = puVar3[2] ^ param_2;
    param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((uVar2 + 0x14) % uVar5 + param_1),
                                         *(undefined1 *)((uVar2 + 0x15) % uVar5 + param_1)),
                                *(undefined1 *)((uVar2 + 0x16) % uVar5 + param_1)),
                       *(undefined1 *)((uVar2 + 0x17) % uVar5 + param_1));
    puVar3[3] = puVar3[3] ^ param_2;
    uVar2 = uVar2 + 0x18;
    puVar3 = puVar3 + 6;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  uVar5 = 0;
  param_2 = 0;
  param_1 = 0;
  do {
    FUN_361a3320(this,&param_2,&param_1);
    *(uint *)((int)this + uVar5 * 4) = param_2;
    *(uint *)((int)this + uVar5 * 4 + 4) = param_1;
    uVar5 = uVar5 + 2;
  } while (uVar5 < 0x12);
  puVar3 = (uint *)((int)this + 0x4c);
  iVar1 = 4;
  do {
    iVar7 = 0x80;
    do {
      FUN_361a3320(this,&param_2,&param_1);
      puVar3[-1] = param_2;
      *puVar3 = param_1;
      puVar3 = puVar3 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

