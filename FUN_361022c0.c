
int __thiscall FUN_361022c0(void *this,float param_1,undefined4 *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = FUN_36100cb0(this,param_1,(int *)&param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((int)param_1 < (int)((*(ushort *)((int)this + 0x1c3c) - 1) + *(int *)((int)this + 0x1c40))) {
    puVar1 = (uint *)((int)this + (((int)param_1 + 1) % 600) * 0xc + 0x20);
    uVar4 = *puVar1;
    uVar3 = uVar4 - *(int *)((int)this + (int)param_1 * 0xc + 0x20);
    if (((int)uVar3 < 1) &&
       ((uVar3 != 0 || (*(short *)((int)this + (int)param_1 * 0xc + 0x26) != 0)))) {
      if ((int)(*(int *)((int)this + 0x14) + -1 + uVar3) <= (int)*param_3) {
        *param_3 = (*(int *)((int)this + 0x14) - *(int *)((int)this + (int)param_1 * 0xc + 0x20)) +
                   uVar4;
        iVar2 = *(int *)((int)this + (int)param_1 * 0xc + 0x20);
        uVar3 = *(int *)((int)this + 0x14) - iVar2;
        puVar5 = (undefined4 *)(*(int *)((int)this + 0x18) + iVar2);
        puVar6 = param_2;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        uVar4 = *puVar1;
        puVar5 = *(undefined4 **)((int)this + 0x18);
        puVar6 = (undefined4 *)
                 ((*(int *)((int)this + 0x14) - *(int *)((int)this + (int)param_1 * 0xc + 0x20)) +
                 (int)param_2);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        return 0;
      }
    }
    else if ((int)uVar3 <= (int)*param_3) {
      *param_3 = uVar3;
      puVar5 = (undefined4 *)
               (*(int *)((int)this + 0x18) + *(int *)((int)this + (int)param_1 * 0xc + 0x20));
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      return 0;
    }
    return 5;
  }
  *param_3 = 0;
  return 0;
}

