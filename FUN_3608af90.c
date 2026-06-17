
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3608af90(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (DAT_362c5624 != in_EAX) {
    iVar2 = (((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f)) + -1) * 0xc;
    uVar4 = *(uint *)(&DAT_362a42e0 + iVar2);
    uVar3 = *(uint *)(&DAT_362a42e8 + iVar2);
    uVar5 = *(uint *)(&DAT_362a42e4 + iVar2);
    if ((int)in_EAX < 0) {
      iVar2 = uVar5 + uVar4;
      uVar5 = -uVar5;
      uVar4 = -uVar4;
      uVar3 = uVar3 + iVar2 * 8;
    }
    uVar1 = uVar5 + uVar4;
    DAT_362c5624 = in_EAX;
    ceil((double)(_DAT_36228800 / (float)(int)(uVar3 + uVar1 * 4)));
    uVar6 = FUN_361bfd6c();
    _DAT_362c5628 = (uint)uVar6 & 0xffff;
    _DAT_362c562c = _DAT_362c5628 << 0x10 | _DAT_362c5628;
    _DAT_362c5628 = _DAT_362c5628 << 0x10 | _DAT_362c5628;
    uVar4 = uVar4 & 0xffff;
    DAT_362c5658._4_4_ = uVar4 << 0x10 | uVar4;
    DAT_362c5658._0_4_ = uVar4 << 0x10 | uVar4;
    uVar4 = uVar5 & 0xffff;
    DAT_362c5650._4_4_ = uVar4 << 0x10 | uVar4;
    DAT_362c5650._0_4_ = uVar4 << 0x10 | uVar4;
    uVar4 = uVar3 & 0xffff;
    DAT_362c5648._4_4_ = uVar4 << 0x10 | uVar4;
    DAT_362c5648._0_4_ = uVar4 << 0x10 | uVar4;
    uVar4 = uVar1 & 0xffff;
    DAT_362c5640._4_4_ = uVar4 << 0x10 | uVar4;
    DAT_362c5640._0_4_ = uVar4 << 0x10 | uVar4;
    uVar4 = uVar3 + uVar5 & 0xffff;
    DAT_362c5638._4_4_ = uVar4 << 0x10 | uVar4;
    DAT_362c5638._0_4_ = uVar4 << 0x10 | uVar4;
    uVar3 = uVar3 + uVar5 + uVar1 & 0xffff;
    DAT_362c5630._4_4_ = uVar3 << 0x10 | uVar3;
    DAT_362c5630._0_4_ = uVar3 << 0x10 | uVar3;
  }
  return;
}

