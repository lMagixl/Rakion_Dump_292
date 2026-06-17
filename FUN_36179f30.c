
void __cdecl FUN_36179f30(byte *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  CSerial *this;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar1 = *(undefined4 **)(param_2 * 0x94 + *(int *)(*(int *)(param_1 + 0x2c) + 0x10c));
  FUN_36179ea0();
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  puVar1[4] = param_3[4];
  puVar1[5] = param_3[5];
  puVar1[6] = param_3[6];
  puVar1[7] = param_3[7];
  puVar1[8] = param_3[8];
  puVar1[9] = param_3[9];
  puVar1[10] = param_3[10];
  puVar1[0xb] = param_3[0xb];
  if ((void *)param_3[0xc] != (void *)0x0) {
    uVar3 = MEM_Size((void *)param_3[0xc]);
    puVar4 = AllocMemory(uVar3);
    puVar1[0xc] = puVar4;
    puVar7 = (undefined4 *)param_3[0xc];
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  this = (CSerial *)param_3[0xd];
  if (this != (CSerial *)0x0) {
    puVar1[0xd] = this;
    CSerial::MarkUsed(this);
  }
  if (DAT_36300a94 == 0) {
    iVar2 = param_3[0xe];
    if (iVar2 != 0) {
      puVar1[0xe] = iVar2;
      FUN_36175510(iVar2);
    }
  }
  else if (param_3[0xe] != 0) {
    uVar5 = FUN_36176bb0();
    puVar1[0xe] = uVar5;
    FUN_361733b0(param_1,param_2,1);
    return;
  }
  return;
}

