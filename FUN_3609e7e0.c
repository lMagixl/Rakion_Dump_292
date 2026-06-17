
void FUN_3609e7e0(void)

{
  int iVar1;
  char *pcVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x48) != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x50);
    if (iVar1 != 0x2b11) {
      if (iVar1 == 0x5622) {
        *(undefined4 *)(unaff_ESI + 0x48) = 2;
        return;
      }
      if (iVar1 != 0xac44) {
        pcVar2 = Translate(s_I_ETRSUnknown_sound_format_3622f2ea + 2,4);
        FatalError(pcVar2);
        *(undefined4 *)(unaff_ESI + 0x48) = 4;
        return;
      }
      *(undefined4 *)(unaff_ESI + 0x48) = 3;
      return;
    }
    *(undefined4 *)(unaff_ESI + 0x48) = 1;
  }
  return;
}

