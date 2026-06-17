
undefined4 * __thiscall FUN_36055c80(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = (undefined4 *)FUN_3604c300((void *)((int)this + 0x3c),1);
  uVar2 = FUN_3604a710(this,param_1);
  uVar3 = FUN_3604a710(this,param_2);
  *puVar1 = local_18;
  puVar1[1] = local_14;
  puVar1[2] = local_10;
  puVar1[3] = local_c;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  return puVar1;
}

