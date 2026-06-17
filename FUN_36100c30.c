
undefined4 __thiscall FUN_36100c30(void *this,undefined4 param_1)

{
  if (599 < *(ushort *)((int)this + 0x1c3c)) {
    return 1;
  }
  *(undefined4 *)((int)this + *(int *)((int)this + 0x1c44) * 0xc + 0x1c) = param_1;
  *(undefined4 *)((int)this + *(int *)((int)this + 0x1c44) * 0xc + 0x20) =
       *(undefined4 *)((int)this + 8);
  *(undefined1 *)((int)this + (*(int *)((int)this + 0x1c44) + 3) * 0xc) = 0;
  *(undefined2 *)((int)this + *(int *)((int)this + 0x1c44) * 0xc + 0x26) = 0;
  *(short *)((int)this + 0x1c3c) = *(short *)((int)this + 0x1c3c) + 1;
  *(int *)((int)this + 0x1c44) = (*(int *)((int)this + 0x1c44) + 1) % 600;
  return 0;
}

