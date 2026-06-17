
void FUN_3606e0a0(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX & 0x70;
  if (DAT_362bfa24 != uVar1) {
    if (uVar1 == 0) {
      (*DAT_362c462c)();
      DAT_362bfa24 = uVar1;
      return;
    }
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x19,0x17);
    DAT_362bfa24 = uVar1;
  }
  return;
}

