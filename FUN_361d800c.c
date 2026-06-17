
/* WARNING: Removing unreachable block (ram,0x361d806f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361d800c(void *this,int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  float fVar2;
  uint *puVar3;
  
  fVar2 = _DAT_362287a4;
  puVar3 = (uint *)(*(int *)((int)this + 0x1050) * param_1 + *(int *)((int)this + 0x1054) * param_2
                   + *(int *)((int)this + 0x18));
  puVar1 = puVar3 + *(int *)((int)this + 0x1058);
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    *param_3 = (float)*(byte *)((int)puVar3 + 2) * fVar2;
    param_3[1] = (float)*(byte *)((int)puVar3 + 1) * fVar2;
    param_3[2] = (float)(*puVar3 & 0xff) * fVar2;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_361d60db(this,(uint)(param_3 + *(int *)((int)this + 0x1058) * -4));
  }
  return;
}

