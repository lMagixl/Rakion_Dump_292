
/* void __cdecl FinishTranslationTable(void) */

void __cdecl FinishTranslationTable(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
                    /* 0x45470  1652  ?FinishTranslationTable@@YAXXZ */
  iVar1 = FUN_36045290(0x362bf308);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_36045350(&DAT_362bf308,iVar3);
      FUN_360e4d50(&DAT_362bf2f4,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  CInput::SetControlNames(_pInput);
  return;
}

