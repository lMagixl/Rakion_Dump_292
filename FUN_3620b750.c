
void __thiscall FUN_3620b750(void *this,int *param_1)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  **(undefined4 **)((int)this + 0x2c) = (int)tVar1;
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 8) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0xc) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x10) = *(undefined4 *)((int)this + 0x14);
  FUN_3620b7a0(this,param_1);
  return;
}

