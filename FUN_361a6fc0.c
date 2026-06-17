
void __thiscall FUN_361a6fc0(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  uVar1 = *(uint *)((int)this + 0x24);
  uVar2 = *param_1;
  *param_1 = uVar2 + uVar1;
  param_1[1] = param_1[1] + (uint)CARRY4(uVar2,uVar1);
  param_1 = (uint *)**(uint **)((int)this + 0xc);
  if (param_1 != *(uint **)((int)this + 0xc)) {
    do {
      FUN_361a6fc0((void *)param_1[10],puVar3);
      FUN_3600a9a0((int *)&param_1);
    } while (param_1 != *(uint **)((int)this + 0xc));
  }
  return;
}

