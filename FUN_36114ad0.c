
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36114ad0(CDrawPort *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong unaff_EBX;
  ulonglong uVar5;
  ulong in_stack_00000018;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = FUN_361bfd6c();
  lVar1 = (long)uVar5;
  uVar5 = FUN_361bfd6c();
  lVar2 = (long)uVar5;
  lVar4 = lVar2;
  lVar6 = lVar1;
  uVar7 = in_stack_00000018;
  uVar8 = unaff_EBX;
  uVar5 = FUN_361bfd6c();
  lVar3 = (long)uVar5;
  uVar5 = FUN_361bfd6c();
  CDrawPort::DrawLine(param_1,(long)uVar5,lVar3,lVar4,lVar6,uVar7,uVar8);
  lVar4 = lVar2;
  lVar6 = lVar1;
  uVar7 = in_stack_00000018;
  uVar8 = unaff_EBX;
  uVar5 = FUN_361bfd6c();
  lVar3 = (long)uVar5;
  uVar5 = FUN_361bfd6c();
  CDrawPort::DrawLine(param_1,(long)uVar5,lVar3,lVar4,lVar6,uVar7,uVar8);
  uVar5 = FUN_361bfd6c();
  lVar4 = (long)uVar5;
  uVar5 = FUN_361bfd6c();
  CDrawPort::DrawLine(param_1,(long)uVar5,lVar4,lVar2,lVar1,in_stack_00000018,unaff_EBX);
  return;
}

