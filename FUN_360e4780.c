
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360e4780(void *this,CTString *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  
  uVar2 = CTString::GetHash(param_1);
  iVar1 = *(int *)((int)this + 4);
  iVar4 = 0;
  if (0 < iVar1) {
    puVar3 = (ulong *)(*(int *)((int)this + 0x10) + (uVar2 % *(uint *)this) * iVar1 * 8);
    do {
      if (puVar3[1] == 0) {
        puVar3[1] = (ulong)param_1;
        *puVar3 = uVar2;
        return;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar4 < iVar1);
  }
  _DAT_362cc1c4 = 1;
  FUN_360e46a0(this);
  FUN_360e4780(this,param_1);
  _DAT_362cc1c4 = 0;
  return;
}

