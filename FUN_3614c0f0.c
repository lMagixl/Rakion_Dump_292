
int FUN_3614c0f0(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_3614ba60();
  uVar2 = FUN_3614ba60();
  uVar3 = FUN_3614ba60();
  uVar4 = FUN_3614ba60();
  if (uVar4 == 0xffffffff) {
    *(undefined4 *)(in_EAX + 0x38) = 0xfffffffd;
  }
  return uVar4 * 0x1000000 + uVar1 + uVar2 * 0x100 + uVar3 * 0x10000;
}

