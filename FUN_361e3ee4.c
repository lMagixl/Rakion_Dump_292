
int __thiscall FUN_361e3ee4(void *this,int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  size_t sVar8;
  
  iVar3 = param_1[1];
  if ((undefined4 *)0x3b9ac9f0 < param_3) {
    FUN_361e3ecf(this,1);
  }
  puVar6 = param_3;
  if (((uint)param_3 & 7) != 0) {
    puVar6 = (undefined4 *)((int)param_3 + (8 - ((uint)param_3 & 7)));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  param_3 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)(iVar3 + 0x30 + param_2 * 4);
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 != (undefined4 *)0x0) {
    do {
      puVar4 = puVar5;
      puVar5 = puVar4;
      if (puVar6 <= (undefined4 *)puVar4[2]) break;
      puVar5 = (undefined4 *)*puVar4;
      param_3 = puVar4;
    } while (puVar5 != (undefined4 *)0x0);
    if (puVar5 != (undefined4 *)0x0) goto LAB_361e3fca;
  }
  puVar4 = puVar6 + 4;
  if (param_3 == (undefined4 *)0x0) {
    uVar7 = *(uint *)(&DAT_3624bb00 + param_2 * 4);
  }
  else {
    uVar7 = *(uint *)(&DAT_3624bb08 + param_2 * 4);
  }
  if (1000000000U - (int)puVar4 < uVar7) {
    uVar7 = 1000000000U - (int)puVar4;
  }
  while( true ) {
    sVar8 = uVar7 + (int)puVar4;
    puVar5 = (undefined4 *)FUN_361f08cb(param_1,sVar8);
    if (puVar5 != (undefined4 *)0x0) break;
    uVar7 = uVar7 >> 1;
    if (uVar7 < 0x32) {
      FUN_361e3ecf(sVar8,2);
    }
  }
  piVar1 = (int *)(iVar3 + 0x48);
  *piVar1 = (int)puVar4 + *piVar1 + uVar7;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = uVar7 + (int)puVar6;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = puVar2;
  }
  *param_3 = puVar5;
LAB_361e3fca:
  iVar3 = puVar5[1];
  puVar5[2] = puVar5[2] - (int)puVar6;
  puVar5[1] = iVar3 + (int)puVar6;
  return iVar3 + 0x10 + (int)puVar5;
}

