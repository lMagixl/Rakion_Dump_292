
int __thiscall FUN_361b4260(void *this,float *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar4 = 3;
  pfVar3 = &local_30;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar2,pfVar3,uVar4);
  local_3c = local_30 + *param_1;
  uVar4 = 3;
  local_38 = local_2c + param_1[1];
  pfVar3 = &local_3c;
  local_34 = local_28 + param_1[2];
  uVar2 = *(uint *)((int)this + 4);
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)pfVar3,uVar4);
  return (int)this;
}

