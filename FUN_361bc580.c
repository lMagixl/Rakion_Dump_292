
void __thiscall FUN_361bc580(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + 4);
  iVar3 = 3;
  puVar2 = puVar1;
  do {
    *puVar2 = *(undefined4 *)((param_2 - (int)this) + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[1] = *puVar1;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  param_1[1] = *puVar1;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  *param_1 = &PTR_FUN_3623dc04;
  return;
}

