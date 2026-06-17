
undefined4 * __thiscall FUN_36003cc0(void *this,int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 4);
  }
  *(undefined4 *)((int)this + 4) = *puVar1;
  *(undefined ***)this = &CSerial::_vftable_;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0xc));
  *(char **)((int)this + 0xc) = pcVar2;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &PTR_LAB_3622320c;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}

