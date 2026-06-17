
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361d7ba1(void *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint *extraout_EDX;
  uint *puVar5;
  uint uVar6;
  
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_361d5497(this,param_3);
  }
  iVar2 = *(int *)((int)this + 0x2c);
  FUN_361d5cea(iVar2);
  uVar6 = 0;
  if (*(int *)((int)this + 0x1058) != 0) {
    iVar4 = 0;
    puVar5 = extraout_EDX;
    do {
      fVar1 = *(float *)(iVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar6 & 3) * 4);
      pfVar3 = (float *)(param_3 + iVar4);
      *puVar5 = (int)ROUND(*(float *)(iVar4 + 0xc + param_3) * _DAT_3622dd00 + fVar1) << 0x10 |
                (int)ROUND((*pfVar3 * _DAT_3624936c +
                           pfVar3[1] * _DAT_36249370 + pfVar3[2] * _DAT_36249374) * _DAT_3622dd00 +
                           fVar1);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar6 < *(uint *)((int)this + 0x1058));
  }
  return;
}

