
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361d7a13(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined2 *extraout_EDX;
  undefined2 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_361d5497(this,param_3);
  }
  iVar1 = *(int *)((int)this + 0x2c);
  FUN_361d5cea(iVar1);
  uVar3 = 0;
  puVar4 = extraout_EDX;
  if (*(int *)((int)this + 0x1058) != 0) {
    do {
      pfVar2 = (float *)(param_3 + iVar5);
      *puVar4 = (short)(int)ROUND(*(float *)(iVar1 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 +
                                            (uVar3 & 3) * 4) +
                                  (*pfVar2 * _DAT_3624936c +
                                  pfVar2[1] * _DAT_36249370 + pfVar2[2] * _DAT_36249374) *
                                  _DAT_3622dd00);
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar3 < *(uint *)((int)this + 0x1058));
  }
  return;
}

