
void __thiscall FUN_360a5c20(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)((int)this + 0x1c);
  iVar4 = param_1 - (int)this;
  param_1 = 600;
  do {
    puVar1 = (undefined4 *)(iVar4 + (int)puVar3);
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3 = puVar3 + 3;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(undefined2 *)((int)this + 0x1c3c) = *(undefined2 *)(iVar2 + 0x1c3c);
  *(undefined4 *)((int)this + 0x1c40) = *(undefined4 *)(iVar2 + 0x1c40);
  *(undefined4 *)((int)this + 0x1c44) = *(undefined4 *)(iVar2 + 0x1c44);
  return;
}

