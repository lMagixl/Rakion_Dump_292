
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36097df0(int param_1)

{
  int iVar1;
  float10 fVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0x7d;
  uVar3 = FUN_361bfd6c();
  iVar1 = (int)uVar3;
  uVar3 = FUN_361bfd6c();
  FUN_3609b700((int)uVar3,iVar1,iVar4);
  fVar2 = (float10)fsin((float10)*(float *)(param_1 + 0x10));
  iVar4 = 0xfa;
  *(float *)(param_1 + 8) = (float)(fVar2 + fVar2 + (float10)*(float *)(param_1 + 8));
  fVar2 = (float10)fcos((float10)*(float *)(param_1 + 0x10));
  *(float *)(param_1 + 0xc) = (float)(fVar2 + fVar2 + (float10)*(float *)(param_1 + 0xc));
  uVar3 = FUN_361bfd6c();
  iVar1 = (int)uVar3;
  uVar3 = FUN_361bfd6c();
  FUN_3609b700((int)uVar3,iVar1,iVar4);
  DAT_362c9c58 = DAT_362c9c58 * 0x40003;
  if ((DAT_362c9c58 >> 0x10 & 0xf) == 0) {
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + _DAT_3622ec7c;
  }
  DAT_362c9c58 = DAT_362c9c58 * 0x40003;
  if ((DAT_362c9c58 & 0xf0000) == 0) {
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - _DAT_3622ec78;
  }
  return;
}

