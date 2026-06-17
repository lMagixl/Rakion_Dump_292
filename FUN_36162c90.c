
ulonglong __cdecl FUN_36162c90(uint param_1,int param_2)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  int unaff_EDI;
  ulonglong uVar6;
  
  uVar6 = FUN_361bfd6c();
  uVar5 = (uint)(uVar6 >> 0x20);
  iVar2 = (int)uVar6;
  uVar3 = (uint)*(ushort *)(iVar2 * in_EAX + unaff_EDI);
  if (uVar3 != param_1) {
    if ((int)param_1 < (int)uVar3) {
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        uVar5 = -in_EAX;
        puVar4 = (ushort *)(iVar2 * in_EAX + unaff_EDI);
        do {
          if ((int)(uint)*puVar4 <= (int)param_1) {
            return CONCAT44(uVar5,iVar2);
          }
          iVar2 = iVar2 + -1;
          puVar4 = (ushort *)((int)puVar4 + uVar5);
        } while (-1 < iVar2);
      }
    }
    else {
      iVar2 = iVar2 + 1;
      if (iVar2 < param_2) {
        puVar4 = (ushort *)(iVar2 * in_EAX + unaff_EDI);
        while( true ) {
          uVar1 = *puVar4;
          uVar3 = (uint)uVar1;
          if (uVar3 == param_1) {
            return (ulonglong)CONCAT24(uVar1,iVar2);
          }
          if ((int)param_1 <= (int)uVar3) break;
          iVar2 = iVar2 + 1;
          puVar4 = (ushort *)((int)puVar4 + in_EAX);
          if (param_2 <= iVar2) {
            return (ulonglong)uVar3 << 0x20;
          }
        }
        return (ulonglong)CONCAT24(uVar1,iVar2 + -1);
      }
    }
    uVar6 = (ulonglong)uVar5 << 0x20;
  }
  return uVar6;
}

