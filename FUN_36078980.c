
int __cdecl FUN_36078980(undefined4 param_1)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_ESI;
  undefined1 auStack_28 [23];
  char cStack_11;
  
  if (in_EAX == 0) {
    in_EAX = (uint)*(byte *)(unaff_ESI + 9);
  }
  puVar4 = &DAT_362a3fdc;
  if ((int)in_EAX < 0x15) {
    puVar4 = &DAT_362a3fbc;
  }
  else if ((int)in_EAX < 0x1c) {
    puVar4 = &DAT_362a3f9c;
  }
  iVar3 = 0;
  do {
    *(undefined *)(unaff_ESI + 0x17) = puVar4[iVar3 * 8];
    *(undefined *)(unaff_ESI + 0x18) = puVar4[iVar3 * 8 + 4];
    iVar1 = (*DAT_362c4454)(param_1);
    if (iVar1 != 0) {
      iVar2 = (*DAT_362c4458)(param_1,iVar1,0x28,auStack_28);
      if (iVar2 == 0) {
        return 0;
      }
      if (cStack_11 == *(char *)(unaff_ESI + 0x17)) {
        return iVar1;
      }
    }
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return 0;
    }
  } while( true );
}

