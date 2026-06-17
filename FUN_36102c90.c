
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36102c90(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  uVar2 = param_1;
  param_1 = (**(code **)((int)this + 0x18))(param_1);
  uVar3 = (**(code **)((int)this + 0x14))(&param_1);
  iVar1 = *(int *)((int)this + 4);
  iVar5 = 0;
  if (0 < iVar1) {
    puVar4 = (uint *)(*(int *)((int)this + 0x10) + (uVar3 % *(uint *)this) * iVar1 * 8);
    do {
      if (puVar4[1] == 0) {
        puVar4[1] = uVar2;
        *puVar4 = uVar3;
        return;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < iVar1);
  }
  _DAT_362cf72c = 1;
  FUN_36102bc0(this);
  FUN_36102c90(this,uVar2);
  _DAT_362cf72c = 0;
  return;
}

