
void __cdecl FUN_36098b80(int param_1)

{
  int iVar1;
  float10 fVar2;
  unkbyte10 extraout_ST0;
  unkbyte10 extraout_ST0_00;
  ulonglong uVar3;
  int iVar4;
  
  fsin((float10)*(float *)(param_1 + 0x14));
  iVar4 = 0xff;
  uVar3 = FUN_361bfd6c();
  iVar1 = (int)uVar3;
  fcos((float10)*(float *)(param_1 + 0x14));
  uVar3 = FUN_361bfd6c();
  FUN_3609b8a0((int)uVar3,iVar1,iVar4);
  fVar2 = (float10)*(float *)(param_1 + 0x14) + (float10)*(float *)(param_1 + 0x18);
  iVar4 = 200;
  *(float *)(param_1 + 0x14) = (float)fVar2;
  fsin(fVar2);
  uVar3 = FUN_361bfd6c();
  iVar1 = (int)uVar3;
  fcos(extraout_ST0);
  uVar3 = FUN_361bfd6c();
  FUN_3609b8a0((int)uVar3,iVar1,iVar4);
  fVar2 = (float10)*(float *)(param_1 + 0x14) + (float10)*(float *)(param_1 + 0x18);
  iVar4 = 0x96;
  *(float *)(param_1 + 0x14) = (float)fVar2;
  fsin(fVar2);
  uVar3 = FUN_361bfd6c();
  iVar1 = (int)uVar3;
  fcos(extraout_ST0_00);
  uVar3 = FUN_361bfd6c();
  FUN_3609b8a0((int)uVar3,iVar1,iVar4);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x18);
  return;
}

