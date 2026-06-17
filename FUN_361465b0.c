
undefined4 __thiscall FUN_361465b0(void *this,int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_4;
  
  *(int *)((int)this + 0xc) = param_2;
  bVar4 = false;
  *(CShadowMap **)((int)this + 4) = (CShadowMap *)(param_1 + 0xd0);
  *(int *)this = param_1;
  bVar3 = false;
  local_4 = 0;
  piVar2 = *(int **)(param_1 + 0x160);
  while (piVar5 = piVar2, piVar2 = (int *)*piVar5, piVar2 != (int *)0x0) {
    puVar1 = (uint *)(piVar5 + -1);
    if (((*(byte *)(piVar5 + -1) & 1) == 0) && (-1 < (char)*(uint *)(piVar5[5] + 0x1c))) {
      if ((param_3 == 0) && ((*(uint *)(piVar5[5] + 0x1c) & 1) != 0)) {
        local_4 = 1;
      }
      else {
        if (!bVar3) {
          FUN_36145090(this);
          FUN_36145720(this);
          bVar3 = true;
        }
        *puVar1 = *puVar1 | 1;
        uVar6 = FUN_361463b0(this,(int)puVar1);
        *puVar1 = *puVar1 & 0xfffffff3 | uVar6;
        if ((uVar6 & 0xc) != 0) {
          if ((void *)piVar5[0xb] != (void *)0x0) {
            FreeMemory((void *)piVar5[0xb]);
          }
          piVar5[0xb] = 0;
        }
        bVar4 = true;
      }
    }
  }
  if (bVar3) {
    FreeMemory(*(void **)((int)this + 0xbc));
  }
  if (bVar4) {
    CShadowMap::Invalidate((CShadowMap *)(param_1 + 0xd0),0);
  }
  return local_4;
}

