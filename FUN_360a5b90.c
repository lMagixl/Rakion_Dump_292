
void __thiscall FUN_360a5b90(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined ***)this = &PTR_FUN_362301d0;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR_FUN_36230528;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x1c);
  for (iVar1 = 0x708; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)((int)this + 0x1c3c) = *(undefined2 *)(param_1 + 0x1c3c);
  *(undefined4 *)((int)this + 0x1c40) = *(undefined4 *)(param_1 + 0x1c40);
  *(undefined4 *)((int)this + 0x1c44) = *(undefined4 *)(param_1 + 0x1c44);
  return;
}

