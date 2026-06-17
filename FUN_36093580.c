
undefined4 __thiscall FUN_36093580(void *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  iVar3 = 0;
  if (0 < (int)this) {
    do {
      uVar1 = *(uint *)(param_1 + iVar3 * 4);
      uVar5 = uVar5 + (uVar1 & 0xff);
      uVar6 = uVar6 + (((uVar1 & 0xff00) << 8) >> 0x10);
      uVar4 = uVar4 + ((uVar1 & 0xff0000) >> 0x10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)this);
  }
  uVar2 = 0;
  if ((((0x7c < uVar5 / (uint)this) && (uVar5 / (uint)this < 0x83)) && (0x7c < uVar6 / (uint)this))
     && (((uVar6 / (uint)this < 0x83 && (0x7c < uVar4 / (uint)this)) && (uVar4 / (uint)this < 0x83))
        )) {
    uVar2 = 1;
  }
  return uVar2;
}

