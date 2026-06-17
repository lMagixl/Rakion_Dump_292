
void __fastcall FUN_36027d90(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)param_1 + 4);
  if (uVar1 == 0x202) {
    DAT_362b94c8 = 0;
    return;
  }
  if ((uVar1 == 0x201) || (uVar1 == 0x203)) {
    DAT_362b94c8 = 1;
  }
  else {
    if (uVar1 == 0x205) {
      DAT_362b94c9 = 0;
      return;
    }
    if ((uVar1 == 0x204) || (uVar1 == 0x206)) {
      DAT_362b94c9 = 1;
      return;
    }
    if (uVar1 == 0x208) {
      DAT_362b94ca = 0;
      return;
    }
    if ((uVar1 == 0x207) || (uVar1 == 0x209)) {
      DAT_362b94ca = 1;
      return;
    }
    if (uVar1 == DAT_362a1b74) {
      DAT_362b94cb = 1;
      return;
    }
    if (uVar1 == DAT_362a1b78) {
      DAT_362b94cb = 0;
      return;
    }
    if (uVar1 == DAT_362a1b7c) {
      DAT_362b94cc = 1;
      return;
    }
    if (uVar1 == DAT_362a1b80) {
      DAT_362b94cc = 0;
      return;
    }
    if ((uVar1 == 0x101) || (uVar1 == 0x105)) {
      FUN_36027d20(param_1,0);
      return;
    }
    if ((uVar1 == 0x100) || (uVar1 == 0x104)) {
      FUN_36027d20(param_1,1);
      return;
    }
    if ((DAT_362ba330 != 0) && (0xffff < uVar1)) {
      CPrintF(s__08x__d__36224ac8,*(undefined4 *)((int)param_1 + 4),
              *(undefined4 *)((int)param_1 + 4));
      return;
    }
  }
  return;
}

