
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361d8df1(void *this,int param_1,int param_2,float *param_3)

{
  ushort *puVar1;
  float fVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)
           (*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2 +
           *(int *)((int)this + 0x18));
  puVar1 = puVar3 + *(int *)((int)this + 0x1058);
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    fVar2 = (float)*puVar3 * _DAT_3622dcfc;
    param_3[2] = fVar2;
    param_3[1] = fVar2;
    *param_3 = fVar2;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_361d60db(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}

