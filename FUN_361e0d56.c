
void __cdecl FUN_361e0d56(int *param_1)

{
  int *piVar1;
  
  if (param_1[0x37] == 0) {
    FUN_361de341(param_1,s_NULL_row_buffer_3624b43c);
  }
  if ((*(byte *)((int)param_1 + 0x61) & 0x10) != 0) {
    if ((char)param_1[0x3e] == '\x03') {
      FUN_361e02d2((uint *)(param_1 + 0x3c),param_1[0x37] + 1,param_1[0x41],param_1[0x57],
                   (uint)*(ushort *)((int)param_1 + 0x10a));
    }
    else {
      if (*(short *)((int)param_1 + 0x10a) == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = param_1 + 0x58;
      }
      FUN_361e04da(param_1 + 0x3c,param_1[0x37] + 1,(int)piVar1);
    }
  }
  if (((*(byte *)((int)param_1 + 0x61) & 0x20) != 0) && (*(char *)((int)param_1 + 0x116) != '\x03'))
  {
    FUN_361dff84(param_1 + 0x3c,(byte *)(param_1[0x37] + 1),param_1[0x4e],param_1[0x51],
                 (byte)param_1[0x4b]);
  }
  if ((*(byte *)((int)param_1 + 0x61) & 4) != 0) {
    FUN_361dfca8(param_1 + 0x3c,(undefined1 *)(param_1[0x37] + 1));
  }
  if ((*(byte *)(param_1 + 0x18) & 0x40) != 0) {
    FUN_361e082c(param_1 + 0x3c,(byte *)(param_1[0x37] + 1),param_1[0x5d],param_1[0x5e]);
    if (param_1[0x3d] == 0) {
      FUN_361de341(param_1,s_>png_do_dither_returned_rowbytes_3624b417 + 1);
    }
  }
  if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
    FUN_361dfb31((byte *)(param_1 + 0x3c),(byte *)(param_1[0x37] + 1),(byte *)((int)param_1 + 0x155)
                );
  }
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    FUN_361dfa21(param_1 + 0x3c,param_1[0x37] + 1);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    FUN_361df142(param_1 + 0x3c,(undefined1 *)(param_1[0x37] + 1));
  }
  if ((*(byte *)((int)param_1 + 0x61) & 0x80) != 0) {
    FUN_361dfcec((uint *)(param_1 + 0x3c),param_1[0x37] + 1,(uint)*(ushort *)((int)param_1 + 0x11e),
                 (byte)param_1[0x17]);
  }
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    FUN_361df115(param_1 + 0x3c,(undefined1 *)(param_1[0x37] + 1));
  }
  return;
}

