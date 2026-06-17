
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_361d70fd(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ushort *extraout_EDX;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_361d5497(this,param_3);
  }
  iVar3 = *(int *)((int)this + 0x2c);
  FUN_361d5cea(iVar3);
  if (*(int *)((int)this + 0x1058) != 0) {
    iVar6 = 0;
    puVar5 = extraout_EDX;
    do {
      fVar2 = *(float *)(iVar3 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar7 & 3) * 4);
      pfVar4 = (float *)(param_3 + iVar6);
      iVar1 = iVar6 + 0xc;
      iVar6 = iVar6 + 0x10;
      *puVar5 = (ushort)(((int)ROUND(*(float *)(iVar1 + param_3) * _DAT_36223774 + fVar2) & 0xffU)
                        << 8) |
                (ushort)(int)ROUND((*pfVar4 * _DAT_3624936c +
                                   pfVar4[1] * _DAT_36249370 + pfVar4[2] * _DAT_36249374) *
                                   _DAT_36223774 + fVar2);
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)this + 0x1058));
  }
  return;
}

