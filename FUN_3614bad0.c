
void FUN_3614bad0(void)

{
  char *pcVar1;
  undefined4 *in_EAX;
  int *piVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = in_EAX[1];
  if (uVar6 < 2) {
    if (uVar6 != 0) {
      *(undefined1 *)in_EAX[0x11] = *(undefined1 *)*in_EAX;
    }
    piVar2 = _errno();
    *piVar2 = 0;
    sVar3 = fread((void *)(in_EAX[0x11] + uVar6),1,0x4000 >> ((byte)uVar6 & 0x1f),
                  (FILE *)in_EAX[0x10]);
    if ((sVar3 == 0) && ((*(byte *)(in_EAX[0x10] + 0xc) & 0x20) != 0)) {
      in_EAX[0xe] = 0xffffffff;
    }
    uVar6 = in_EAX[1] + sVar3;
    in_EAX[1] = uVar6;
    *in_EAX = in_EAX[0x11];
    if (uVar6 < 2) {
      in_EAX[0x16] = uVar6;
      return;
    }
  }
  pcVar1 = (char *)*in_EAX;
  if ((*pcVar1 != '\x1f') || (pcVar1[1] != -0x75)) {
    in_EAX[0x16] = 1;
    return;
  }
  in_EAX[1] = in_EAX[1] + -2;
  *in_EAX = pcVar1 + 2;
  uVar6 = FUN_3614ba60();
  uVar4 = FUN_3614ba60();
  if ((uVar6 != 8) || ((uVar4 & 0xe0) != 0)) {
    in_EAX[0xe] = 0xfffffffd;
    return;
  }
  iVar7 = 6;
  do {
    FUN_3614ba60();
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if ((uVar4 & 4) != 0) {
    uVar6 = FUN_3614ba60();
    uVar5 = FUN_3614ba60();
    iVar7 = uVar6 + uVar5 * 0x100;
    do {
      if (iVar7 == 0) break;
      uVar6 = FUN_3614ba60();
      iVar7 = iVar7 + -1;
    } while (uVar6 != 0xffffffff);
  }
  if ((uVar4 & 8) != 0) {
    do {
      uVar6 = FUN_3614ba60();
      if (uVar6 == 0) break;
    } while (uVar6 != 0xffffffff);
  }
  if ((uVar4 & 0x10) != 0) {
    do {
      uVar6 = FUN_3614ba60();
      if (uVar6 == 0) break;
    } while (uVar6 != 0xffffffff);
  }
  if ((uVar4 & 2) != 0) {
    iVar7 = 2;
    do {
      FUN_3614ba60();
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  in_EAX[0xe] = -(uint)(in_EAX[0xf] != 0) & 0xfffffffd;
  return;
}

