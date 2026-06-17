
void __thiscall FUN_36147d20(void *this,byte *param_1,uint param_2)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int local_28;
  float local_20 [5];
  int iStack_c;
  
  FUN_361473a0(this,(int)param_1,param_2);
  param_2 = *(uint *)(*(int *)(*(int *)((int)this + 4) + 0x1ac) + 0x40);
  uVar5 = *(uint *)(*(int *)((int)this + 4) + 200) & 0x4000000;
  if (uVar5 != 0) {
    param_2 = 0x80808000;
  }
  puVar7 = *(uint **)((int)this + 0x30);
  for (iVar6 = *(int *)((int)this + 0x20) * *(int *)((int)this + 0x24); iVar6 != 0;
      iVar6 = iVar6 + -1) {
    *puVar7 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
              param_2 << 0x18;
    puVar7 = puVar7 + 1;
  }
  cVar2 = *(char *)(*(int *)((int)this + 4) + 0x18c);
  local_28 = 0;
  if ((cVar2 != '\0') &&
     (piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x1ac) + 0x38) + 0x14)
                        + 0x668), piVar3 != (int *)0x0)) {
    local_28 = (**(code **)(*piVar3 + 0xd4))(cVar2,local_20);
    if ((local_28 != 0) && (iStack_c == 0)) {
      FUN_36146f00(this,local_20);
    }
  }
  *(uint *)(*(int *)this + 0x10) = *(uint *)(*(int *)this + 0x10) & 0xfffffff7;
  piVar3 = *(int **)(*(int *)this + 0x90);
  while (piVar4 = piVar3, piVar3 = (int *)*piVar4, piVar3 != (int *)0x0) {
    iVar6 = piVar4[5];
    pbVar1 = (byte *)(piVar4 + -1);
    if ((iVar6 != 0) &&
       (((uVar5 == 0 || ((*(byte *)(iVar6 + 0x1c) & 0x20) != 0)) && (-1 < *(char *)(iVar6 + 0x1c))))
       ) {
      if (*(int *)(iVar6 + 0x44) != 0) {
        *(uint *)(*(int *)this + 0x10) = *(uint *)(*(int *)this + 0x10) | 8;
      }
      if (piVar4[0xb] == 0) {
        if ((*(byte *)(iVar6 + 0x1c) & 1) == 0) {
          if ((*pbVar1 & 4) == 0) {
            FUN_36147c90(this,(int)pbVar1,(byte *)0x0,0);
          }
        }
        else {
          FUN_36147150(this,pbVar1,(byte *)0x0,0);
        }
      }
      else {
        FUN_36146820(this,(int)pbVar1,(int *)&param_1,(char *)&param_2);
        if ((*(byte *)(iVar6 + 0x1c) & 1) == 0) {
          FUN_36147c90(this,(int)pbVar1,param_1,(byte)param_2);
        }
        else {
          FUN_36147150(this,pbVar1,param_1,(byte)param_2);
        }
      }
    }
  }
  if ((local_28 != 0) && (iStack_c != 0)) {
    FUN_36146f00(this,local_20);
  }
  if (DAT_362a4098 < 0) {
    DAT_362a4098 = 0;
  }
  else {
    if (DAT_362a4098 < 7) {
      if (DAT_362a4098 < 1) goto LAB_36147f09;
    }
    else {
      DAT_362a4098 = 6;
    }
    FilterBitmap(DAT_362a4098,*(ulong **)((int)this + 0x30),*(ulong **)((int)this + 0x30),
                 *(long *)((int)this + 0x28),*(long *)((int)this + 0x2c),*(long *)((int)this + 0x20)
                 ,*(long *)((int)this + 0x24));
  }
LAB_36147f09:
  iVar6 = FUN_36147370();
  if (((byte)_pGfx[0xa54] & 0x10) == 0) {
    DAT_362a4094 = 0;
  }
  if ((iVar6 != 0) && (DAT_362a4094 == 0)) {
    DitherBitmap(iVar6,*(ulong **)((int)this + 0x30),*(ulong **)((int)this + 0x30),
                 *(long *)((int)this + 0x28),*(long *)((int)this + 0x2c),*(long *)((int)this + 0x20)
                 ,*(long *)((int)this + 0x24));
  }
  return;
}

