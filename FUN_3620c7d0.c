
void __thiscall FUN_3620c7d0(void *this,size_t param_1,void *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  size_t *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_10 [2];
  int local_8 [2];
  
  if ((int)param_1 < 9) {
    FUN_3620c8e0(param_1,param_2);
    return;
  }
  iVar2 = FUN_3620c910(this,param_1,(int)param_2);
  iVar3 = FUN_3620c9f0(iVar2,param_1,param_2);
  if (iVar3 < 0) {
    FUN_3620c8e0(param_1,param_2);
    return;
  }
  bVar1 = *(byte *)(*(int *)((int)param_2 + iVar3 * 8 + 4) + iVar2);
  psVar4 = (size_t *)FUN_3620caa0(local_10,iVar3,param_1,(int)param_2);
  uVar5 = FUN_3620c7d0(this,*psVar4,(void *)psVar4[1]);
  psVar4 = (size_t *)FUN_3620ca80(local_8,iVar3,param_1,(int)param_2);
  uVar6 = FUN_3620c7d0(this,*psVar4,(void *)psVar4[1]);
  FUN_3620ca50(iVar2,(uint)bVar1,uVar6,uVar5);
  return;
}

