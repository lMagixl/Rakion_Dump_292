
void __thiscall FUN_36027d20(void *this,undefined1 param_1)

{
  uint uVar1;
  
  if (DAT_362a1b48 == 2) {
    uVar1 = (&DAT_362b9b08)[*(ushort *)((int)this + 0xe) & 0x1ff];
  }
  else {
    if (DAT_362a1b48 != 1) {
      return;
    }
    uVar1 = *(uint *)((int)this + 8) & 0xff;
    if (uVar1 == 0x10) {
      uVar1 = 0xa0;
    }
    else if (uVar1 == 0x11) {
      uVar1 = 0xa2;
    }
    else if (uVar1 == 0x12) {
      uVar1 = 0xa4;
    }
    uVar1 = (&DAT_362b9708)[uVar1];
  }
  if ((-1 < (int)uVar1) && (uVar1 < 0x100)) {
    *(undefined1 *)((int)&DAT_362b9408 + uVar1) = param_1;
  }
  return;
}

