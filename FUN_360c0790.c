
void FUN_360c0790(void)

{
  ushort *unaff_ESI;
  
  if (DAT_362cce78 == 0) {
    if (DAT_362c5408 != 0) {
      if (DAT_362cba5c != 0) {
        return;
      }
      FUN_360c05d0(unaff_ESI);
      return;
    }
  }
  else {
    DAT_362c5408 = 0;
  }
  *(int *)(_pGfx + 0xb38) = *(int *)(_pGfx + 0xb38) + (int)unaff_ESI;
  (*DAT_362c46a4)();
  if (DAT_362cce78 == 0) {
    if (DAT_362c5404 == 0) {
      return;
    }
    (*DAT_362c46a8)(0xffff00de);
    (*DAT_362c4678)(0x5c);
    (*DAT_362c46a4)();
    (*DAT_362c4678)(0x5b);
                    /* WARNING: Could not recover jumptable at 0x360c080f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c46ac)();
    return;
  }
  DAT_362c5404 = 0;
  return;
}

