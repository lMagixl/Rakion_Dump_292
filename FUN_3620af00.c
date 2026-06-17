
undefined4 * __thiscall
FUN_3620af00(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = malloc(0xc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = malloc(*(int *)this << 2);
  puVar1[2] = puVar2;
  for (uVar3 = *(uint *)this & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return puVar1;
}

