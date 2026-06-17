
undefined4 __cdecl FUN_36072fc0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 *local_4;
  
  if ((in_EAX == 0) && ((unaff_EDI == 0x16 || (in_EAX = 0x10, unaff_EDI == 0x15)))) {
    in_EAX = 0x20;
  }
  local_4 = &DAT_362a3f5c;
  if (in_EAX < 0x15) {
    local_4 = (undefined4 *)&DAT_362a3f40;
  }
  else if (in_EAX < 0x1c) {
    local_4 = (undefined4 *)&DAT_362a3f24;
  }
  iVar3 = 0;
  do {
    uVar1 = local_4[iVar3];
    iVar2 = (**(code **)(**(int **)(_pGfx + 0xa58) + 0x28))(*(int **)(_pGfx + 0xa58),param_1,1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(**(int **)(_pGfx + 0xa58) + 0x30))(*(int **)(_pGfx + 0xa58),param_1,1);
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  return 0;
}

