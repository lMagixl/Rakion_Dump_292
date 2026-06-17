
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3605dcc0(void *this,undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 3;
  puVar1 = (undefined8 *)((int)this + 8);
  do {
    iVar2 = iVar2 + -1;
    puVar1[-1] = _DAT_36227d98;
    *puVar1 = _DAT_36227d98;
    puVar1[1] = _DAT_36227d98;
    puVar1 = puVar1 + 3;
  } while (iVar2 != 0);
  *(undefined8 *)this = *param_1;
  *(undefined8 *)((int)this + 0x20) = param_1[1];
  *(undefined8 *)((int)this + 0x40) = param_1[2];
  return;
}

