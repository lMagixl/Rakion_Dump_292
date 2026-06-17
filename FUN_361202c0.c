
void __thiscall
FUN_361202c0(void *this,undefined4 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  
  fVar1 = param_5;
  bVar3 = -1 < (int)(param_5 - param_3);
  if (!bVar3) {
    param_5 = param_3;
    param_3 = fVar1;
  }
  param_1[5] = (uint)bVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((-1 < (int)(param_5 - *(float *)((int)this + 0xd34))) &&
     (-1 < (int)(*(float *)((int)this + 0xd3c) - param_3))) {
    uVar4 = FUN_361bfd6c();
    param_1[1] = (int)uVar4;
    DAT_362fa9a8 = (int)ROUND(param_3);
    param_1[6] = DAT_362fa9a8 + (uint)(0x80000000 < (uint)((float)DAT_362fa9a8 - param_3));
    DAT_362fa9a8 = (int)ROUND(param_5);
    DAT_362fa9ac = (float)DAT_362fa9a8 - param_5;
    iVar2 = DAT_362fa9a8 + (uint)(0x80000000 < (uint)DAT_362fa9ac);
    param_1[7] = iVar2;
    if ((int)param_1[6] < *(int *)((int)this + 0xe5c)) {
      param_1[6] = *(int *)((int)this + 0xe5c);
    }
    if (*(int *)((int)this + 0xe30) < iVar2) {
      param_1[7] = *(int *)((int)this + 0xe30);
    }
    uVar4 = FUN_361bfd6c();
    *param_1 = (int)uVar4;
    return;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 2;
  return;
}

