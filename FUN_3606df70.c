
void FUN_3606df70(void)

{
  uint uVar1;
  uint unaff_ESI;
  
  uVar1 = unaff_ESI & 0x70;
  if (DAT_362bfa24 != uVar1) {
    if (uVar1 != 0) {
      if (uVar1 == 0x10) {
        (*DAT_362c4600)();
        (*DAT_362c4648)(0x1b,0x1c);
        DAT_362bfa24 = unaff_ESI;
        return;
      }
      if (uVar1 != 0x20) {
        (*DAT_362c4600)();
        (*DAT_362c4648)(0x19,0x17);
        DAT_362bfa24 = unaff_ESI;
        return;
      }
      (*DAT_362c4600)();
      (*DAT_362c4648)(0x15,0x15);
      DAT_362bfa24 = unaff_ESI;
      return;
    }
    (*DAT_362c462c)();
    DAT_362bfa24 = unaff_ESI;
  }
  return;
}

