
void __fastcall FUN_36116de0(void *param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  
  if (((DAT_362fcbb8 == 0) && (DAT_362fcbb0 == 0)) && (DAT_362fcbf8 != 4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  piVar1 = *(int **)((int)param_1 + 0xe40);
  while (piVar3 = piVar1, piVar1 = (int *)*piVar3, piVar1 != (int *)0x0) {
    if ((*(byte *)(piVar3 + -0x10) & 0x20) == 0) {
      if (*(int *)(*(int *)(piVar3[-0x13] + 0x14) + 0x66c) == 0) {
        if (bVar2) {
          FUN_36116b00(param_1,piVar3 + -0x21);
        }
      }
      else if (DAT_362fcb90 != 0) {
        FUN_36116c00(param_1,piVar3 + -0x21);
      }
    }
  }
  return;
}

