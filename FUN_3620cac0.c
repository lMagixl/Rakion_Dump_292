
void __thiscall FUN_3620cac0(void *this,byte *param_1,int *param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  int local_4;
  
  pbVar2 = param_1;
  if (*param_2 == 0) {
    local_4 = 0;
    pbVar3 = (byte *)param_2[2];
    if (0 < param_2[1]) {
      do {
        param_1 = pbVar3;
        iVar4 = FUN_3620ccd0(0,(int)pbVar2,*(int *)(param_1 + 4));
        iVar8 = 1;
        if (iVar4 < *(int *)((int)this + 4)) {
          do {
            if (*(int *)this <= iVar8) {
              *(int *)((int)this + 4) = iVar4;
              *(byte **)((int)this + 8) = param_1;
              break;
            }
            iVar5 = FUN_3620ccd0(iVar8,(int)pbVar2,*(int *)(param_1 + 4));
            iVar4 = iVar4 + iVar5;
            iVar8 = iVar8 + 1;
          } while (iVar4 < *(int *)((int)this + 4));
        }
        local_4 = local_4 + 1;
        pbVar3 = param_1 + 8;
        if (param_2[1] <= local_4) {
          FUN_3620cd80(this,(int)pbVar2);
          return;
        }
      } while( true );
    }
  }
  else {
    iVar4 = param_2[1];
    uVar7 = (undefined1)param_2[2];
    if ((int)(uint)param_1[iVar4] <= param_2[2]) {
      puVar6 = (undefined1 *)(*(int *)((int)this + 0xc) + iVar4);
      uVar1 = *puVar6;
      *puVar6 = uVar7;
      iVar8 = FUN_3620cac0(this,param_1,(int *)param_2[3]);
      if (iVar8 != 0) {
        return;
      }
      *(undefined1 *)(*(int *)((int)this + 0xc) + iVar4) = uVar1;
      puVar6 = (undefined1 *)(*(int *)((int)this + 0x10) + iVar4);
      uVar1 = *puVar6;
      *puVar6 = uVar7;
      iVar8 = FUN_3620ccf0(this,param_1);
      if ((iVar8 != 0) && (iVar8 = FUN_3620cac0(this,param_1,(int *)param_2[4]), iVar8 != 0)) {
        return;
      }
      *(undefined1 *)(iVar4 + *(int *)((int)this + 0x10)) = uVar1;
      FUN_3620cd80(this,(int)param_1);
      return;
    }
    puVar6 = (undefined1 *)(*(int *)((int)this + 0x10) + iVar4);
    uVar1 = *puVar6;
    *puVar6 = uVar7;
    iVar8 = FUN_3620cac0(this,param_1,(int *)param_2[4]);
    if (iVar8 != 0) {
      return;
    }
    *(undefined1 *)(iVar4 + *(int *)((int)this + 0x10)) = uVar1;
    puVar6 = (undefined1 *)(*(int *)((int)this + 0xc) + iVar4);
    uVar1 = *puVar6;
    *puVar6 = uVar7;
    iVar8 = FUN_3620ccf0(this,param_1);
    if ((iVar8 != 0) && (iVar8 = FUN_3620cac0(this,param_1,(int *)param_2[3]), iVar8 != 0)) {
      return;
    }
    *(undefined1 *)(*(int *)((int)this + 0xc) + iVar4) = uVar1;
  }
  FUN_3620cd80(this,(int)param_1);
  return;
}

