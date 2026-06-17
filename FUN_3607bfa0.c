
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3607bfa0(uint param_1)

{
  int iVar1;
  int aiStack_80 [32];
  
  _DAT_362c4728 = 1;
  (*DAT_362c4680)(0x51,0x51);
  FUN_3607b9d0((undefined4 *)&DAT_362c46fc,(int *)&DAT_362c4720);
  if (DAT_362c4700 != param_1) {
    iVar1 = 0;
    do {
      aiStack_80[iVar1] = -(uint)((0x80000000U >> ((byte)iVar1 & 0x1f) & param_1) != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
    DAT_362c4700 = param_1;
    FUN_3607bbd0((int)aiStack_80,0x20,1,DAT_362c9b54,0);
  }
  return;
}

