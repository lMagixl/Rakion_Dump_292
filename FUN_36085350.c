
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36085350(void)

{
  _DAT_362a41d0 = 1;
  _DAT_362c54b0 = 1;
  _DAT_362c5494 = (uint)(1 < *(int *)(_pGfx + 0xaec));
  _DAT_362c549c = (uint)(_DAT_3622376c < *(float *)(_pGfx + 0xae8));
  _DAT_362c54a0 = (uint)(1 < *(int *)(_pGfx + 0xadc));
  _DAT_362c54ac = (uint)(0 < *(int *)(_pGfx + 0xaf0));
  _DAT_362c5490 = (uint)(((byte)_pGfx[0xa54] & 8) != 0);
  _DAT_362c5498 = (uint)(((byte)_pGfx[0xa54] & 4) != 0);
  _DAT_362c54a4 = (uint)(((byte)_pGfx[0xa54] & 0x10) != 0);
  _DAT_362c54a8 = (uint)(((byte)_pGfx[0xa54] & 0x20) != 0);
  if ((*(int *)(_pGfx + 0xa38) == 0) && ((*(uint *)(_pGfx + 0xa54) & 0x200000) == 0)) {
    _DAT_362c54b0 = 0;
  }
  if ((*(int *)(_pGfx + 0xa38) == 1) && ((*(uint *)(_pGfx + 0xa54) & 0x400) == 0)) {
    _DAT_362a41d0 = 0;
  }
  _DAT_362c54b4 = (uint)(*(int *)(_pGfx + 0xa38) == 0);
  _DAT_362c54b8 = (uint)(*(int *)(_pGfx + 0xa38) == 1);
  return;
}

