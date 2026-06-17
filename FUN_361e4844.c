
void __cdecl FUN_361e4844(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  param_1[1] = 0;
  uVar1 = FUN_361f0910();
  puVar2 = (undefined4 *)FUN_361f08cb(param_1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = param_1;
    FUN_361f0913();
    *(undefined4 *)(*param_1 + 0x14) = 0x35;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1,piVar5);
  }
  else {
    *puVar2 = FUN_361e3ee4;
    puVar2[1] = FUN_361e3fe0;
    puVar2[2] = FUN_361e406e;
    puVar2[3] = FUN_361e4100;
    puVar2[4] = FUN_361e419e;
    puVar2[5] = FUN_361e41ff;
    puVar2[6] = FUN_361e4260;
    puVar2[7] = FUN_361e44f2;
    puVar2[8] = FUN_361e4610;
    puVar2[9] = FUN_361e4733;
    puVar2[10] = FUN_361e4814;
    puVar2[0xb] = uVar1;
    puVar3 = puVar2 + 0xf;
    iVar4 = 2;
    do {
      puVar3[-2] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0x50;
    param_1[1] = (int)puVar2;
  }
  return;
}

