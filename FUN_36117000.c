
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36117000(void *this,int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  *(float *)((int)this + 0xd28) = (float)param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_1c = (float)param_4 + (float)param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(float *)((int)this + 0xd2c) = local_1c;
  *(int *)((int)this + 0xd24) = param_3;
  local_20 = ((float)param_3 + (float)param_1) - _DAT_36227cf0;
  local_1c = local_1c - _DAT_36227cf0;
  local_18 = (float)param_1 - _DAT_36227cf0;
  fVar1 = (float)param_2 - _DAT_36227cf0;
  local_14 = fVar1;
  pfVar3 = FUN_36069060(local_10,&local_18,&local_20);
  *(float *)((int)this + 0xd30) = *pfVar3;
  *(float *)((int)this + 0xd34) = pfVar3[1];
  *(float *)((int)this + 0xd38) = pfVar3[2];
  *(float *)((int)this + 0xd3c) = pfVar3[3];
  DAT_362fa9a8 = (int)ROUND(fVar1);
  fVar2 = (float)param_4 - _DAT_36227cf0;
  *(uint *)((int)this + 0xe2c) =
       DAT_362fa9a8 + (uint)(0x80000000 < (uint)((float)DAT_362fa9a8 - fVar1));
  DAT_362fa9a8 = (int)ROUND(fVar2);
  iVar4 = DAT_362fa9a8 + (uint)(0x80000000 < (uint)((float)DAT_362fa9a8 - fVar2));
  DAT_362fa9a8 = 0xffffffff;
  DAT_362fa9ac = 0xbf000000;
  *(int *)((int)this + 0xe28) = iVar4;
  *(int *)((int)this + 0xe30) = *(int *)((int)this + 0xe2c) + iVar4;
  return;
}

