
void __cdecl FUN_36174ed0(uint param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  
  iVar2 = FUN_361743e0((undefined4 *)(unaff_EBX + 0x100));
  iVar4 = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(unaff_EBX + 0x104) + 0x38 + iVar3;
      if ((((*(int *)(*(int *)(unaff_EBX + 0x104) + 0x38 + iVar3) <= unaff_EDI[2]) &&
           (*unaff_EDI <= *(int *)(iVar1 + 8))) && (*(int *)(iVar1 + 4) <= unaff_EDI[3])) &&
         (unaff_EDI[1] <= *(int *)(iVar1 + 0xc))) {
        FUN_36178920(unaff_EBX,iVar4,param_1);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x160;
    } while (iVar4 < iVar2);
  }
  return;
}

