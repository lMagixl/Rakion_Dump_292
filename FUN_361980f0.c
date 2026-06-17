
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_361980f0(undefined1 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte local_1561;
  CHAR local_1554 [12];
  CHAR local_1548 [44];
  CHAR local_151c [2];
  undefined2 uStack_151a;
  CHAR aCStack_1518 [13];
  char acStack_150b [3];
  undefined4 auStack_1508 [1345];
  undefined4 local_4;
  
  bVar2 = param_1[1];
  uVar3 = param_1[2];
  local_4 = DAT_362abd90;
  uVar4 = *param_1;
  lstrcpyA(local_1548,param_1 + 3);
  iVar6 = lstrlenA(local_1548);
  lstrcpyA(local_1554,param_1 + (iVar6 + 4U & 0xffff));
  iVar7 = lstrlenA(local_1554);
  uVar8 = iVar6 + 5 + iVar7;
  local_1561 = 0;
  if (bVar2 != 0) {
    do {
      iVar7 = (uint)local_1561 * 0x24;
      local_151c[iVar7] = param_1[uVar8 & 0xffff];
      *(undefined2 *)(aCStack_1518 + iVar7 + -2) = *(undefined2 *)(param_1 + (uVar8 + 1 & 0xffff));
      lstrcpyA(aCStack_1518 + iVar7,param_1 + (uVar8 + 3 & 0xffff));
      iVar6 = lstrlenA(aCStack_1518 + iVar7);
      uVar1 = uVar8 + 4 + iVar6;
      acStack_150b[iVar7] = param_1[uVar1 & 0xffff];
      acStack_150b[iVar7 + 1] = param_1[uVar1 + 1 & 0xffff];
      cVar5 = acStack_150b[iVar7];
      uVar8 = uVar1 + 6;
      auStack_1508[(uint)local_1561 * 9] = *(undefined4 *)(param_1 + (uVar1 + 2 & 0xffff));
      if (cVar5 == '\0') {
        bVar2 = bVar2 - 1;
      }
      else {
        local_1561 = local_1561 + 1;
      }
    } while (local_1561 < bVar2);
  }
  (**(code **)(*DAT_3637fb00 + 0x1c0))(uVar4,bVar2,uVar3,local_1548,local_1554,local_151c);
  return;
}

