
int __thiscall FUN_36149d30(void *this,uint param_1)

{
  uint in_EAX;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ~(((param_1 & 0xff00) + param_1 * 0x10000) * 0x100 + (param_1 >> 0x10 & 0xff) * 0x100 +
           (param_1 >> 0x18));
  for (; (in_EAX != 0 && (((uint)this & 3) != 0)); this = (void *)((int)this + 1)) {
    uVar2 = uVar2 << 8 ^ *(uint *)(&DAT_36239bf0 + (uVar2 >> 0x18 ^ (uint)*(byte *)this) * 4);
    in_EAX = in_EAX - 1;
  }
  pbVar1 = (byte *)((int)this + -4);
  if (0x1f < in_EAX) {
    uVar3 = in_EAX >> 5;
    do {
      uVar2 = uVar2 ^ *(uint *)(pbVar1 + 4);
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4) ^ *(uint *)(pbVar1 + 8);
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4) ^ *(uint *)(pbVar1 + 0xc);
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4) ^ *(uint *)(pbVar1 + 0x10);
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4) ^ *(uint *)(pbVar1 + 0x14);
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4) ^ *(uint *)(pbVar1 + 0x18);
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4) ^ *(uint *)(pbVar1 + 0x1c);
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4) ^ *(uint *)(pbVar1 + 0x20);
      pbVar1 = pbVar1 + 0x20;
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4);
      in_EAX = in_EAX - 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (3 < in_EAX) {
    uVar3 = in_EAX >> 2;
    do {
      uVar2 = uVar2 ^ *(uint *)(pbVar1 + 4);
      pbVar1 = pbVar1 + 4;
      uVar2 = *(uint *)(&DAT_3623a3f0 + (uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_36239ff0 + (uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_3623a7f0 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_36239bf0 + (uVar2 & 0xff) * 4);
      in_EAX = in_EAX - 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  pbVar1 = pbVar1 + 4;
  for (; in_EAX != 0; in_EAX = in_EAX - 1) {
    uVar2 = uVar2 << 8 ^ *(uint *)(&DAT_36239bf0 + (uVar2 >> 0x18 ^ (uint)*pbVar1) * 4);
    pbVar1 = pbVar1 + 1;
  }
  uVar2 = ~uVar2;
  return ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (uVar2 >> 0x10 & 0xff) * 0x100 +
         (uVar2 >> 0x18);
}

