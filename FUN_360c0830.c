
void FUN_360c0830(void)

{
  int in_EAX;
  
  if ((in_EAX == 1) || ((DAT_362cba58 != 0 && ((in_EAX == 0 || (in_EAX == 4)))))) {
    gfxSetBlendType(0xcb);
  }
  else {
    switch(in_EAX) {
    case 0:
      gfxSetBlendType(0xc9);
      return;
    case 3:
      gfxSetBlendType(0xce);
      return;
    case 4:
      gfxSetBlendType(0xca);
      return;
    case 5:
      gfxSetBlendType(0xd0);
      return;
    }
  }
  return;
}

