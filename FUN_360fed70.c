
void __thiscall FUN_360fed70(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  longlong local_10;
  longlong local_8;
  
  uVar1 = *(undefined4 *)((int)this + 0x34);
  uVar2 = *(undefined4 *)((int)this + 0x30);
  if (*(void **)((int)this + 0x1c) == (void *)0x0) {
    FUN_360fec70((void *)((int)this + 0x20),&local_8);
  }
  else {
    puVar4 = (uint *)FUN_360fec70(*(void **)((int)this + 0x1c),&local_10);
    uVar6 = *puVar4;
    uVar5 = puVar4[1];
    puVar4 = (uint *)FUN_360fec70((void *)((int)this + 0x20),&local_8);
    if (((int)uVar5 <= (int)puVar4[1]) && (((int)uVar5 < (int)puVar4[1] || (uVar6 < *puVar4)))) {
      uVar6 = *puVar4;
      uVar5 = puVar4[1];
    }
    iVar3 = *(int *)((int)this + 0x1c);
    *(uint *)((int)this + 0x30) = uVar6;
    *(uint *)((int)this + 0x34) = uVar5;
    *(uint *)(iVar3 + 0x10) = uVar6;
    *(uint *)(iVar3 + 0x14) = uVar5;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}

