
void __thiscall FUN_360190f0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_4;
  
  iVar2 = 0;
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x2c,*(int *)((int)pvVar1 + -4),FUN_36014730);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  local_4 = FUN_3600cac0(param_1);
  if ((local_4 != 0) && (FUN_36014800(this,local_4), 0 < local_4)) {
    do {
      iVar3 = param_1[1] + iVar2;
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar2);
      *puVar4 = *(undefined4 *)(param_1[1] + iVar2);
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(iVar3 + 4);
      *(undefined2 *)((int)puVar4 + 6) = *(undefined2 *)(iVar3 + 6);
      puVar4[2] = *(undefined4 *)(iVar3 + 8);
      puVar4[3] = *(undefined4 *)(iVar3 + 0xc);
      puVar4[4] = *(undefined4 *)(iVar3 + 0x10);
      FUN_360148a0(puVar4 + 5,(undefined4 *)(iVar3 + 0x14));
      FUN_36014910(puVar4 + 7,(undefined4 *)(iVar3 + 0x1c));
      FUN_36010be0(puVar4 + 9,(undefined4 *)(iVar3 + 0x24));
      iVar2 = iVar2 + 0x2c;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

