
void FUN_36029a30(void)

{
  int iVar1;
  SHORT SVar2;
  int in_EAX;
  int vKey;
  CInputDevice *unaff_EBX;
  uint uVar3;
  
  if (in_EAX == 0) {
    CInputDevice::ClearControlsValue(unaff_EBX);
    uVar3 = 0;
    do {
      iVar1 = *(int *)((int)&DAT_362a1b90 + uVar3);
      vKey = *(int *)((int)&DAT_362a1b94 + uVar3);
      if (DAT_362a1b48 == 0) {
        if (-1 < vKey) {
          if (vKey == 0xa0) {
            vKey = 0x10;
          }
          else if (vKey == 0xa2) {
            vKey = 0x11;
          }
          else if (vKey == 0xa4) {
            vKey = 0x12;
          }
          SVar2 = GetAsyncKeyState(vKey);
          if (SVar2 < 0) {
            *(undefined4 *)(*(int *)(unaff_EBX + 0x18) + 4 + iVar1 * 0x18) = 0x3f800000;
          }
        }
      }
      else if (*(char *)((int)&DAT_362b9408 + iVar1) != '\0') {
        *(undefined4 *)(*(int *)(unaff_EBX + 0x18) + 4 + iVar1 * 0x18) = 0x3f800000;
      }
      uVar3 = uVar3 + 0x18;
    } while (uVar3 < 0xa68);
  }
  return;
}

