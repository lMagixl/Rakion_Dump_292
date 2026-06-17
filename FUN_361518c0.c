
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_361518c0(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_EBX;
  int unaff_EDI;
  ushort auStack_24 [16];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar2 = 0;
  iVar1 = 1;
  do {
    uVar2 = (*(short *)(param_2 + -2 + iVar1 * 2) + uVar2) * 2;
    auStack_24[iVar1] = uVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = 0;
  if (-1 < unaff_EBX) {
    do {
      uVar3 = (uint)*(ushort *)(unaff_EDI + 2 + iVar1 * 4);
      if (uVar3 != 0) {
        uVar2 = auStack_24[uVar3];
        auStack_24[uVar3] = uVar2 + 1;
        uVar3 = FUN_361516b0((uint)uVar2,uVar3);
        *(short *)(unaff_EDI + iVar1 * 4) = (short)uVar3;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= unaff_EBX);
  }
  return;
}

