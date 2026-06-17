
undefined4 * __thiscall FUN_36102d10(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 4);
  iVar2 = 0x21;
  do {
    FUN_361035d0(puVar1);
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x1c);
  return this;
}

