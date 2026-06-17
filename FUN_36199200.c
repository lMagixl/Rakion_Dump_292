
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36199200(undefined2 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  CHAR local_160 [20];
  CHAR local_14c [164];
  CHAR local_a8 [164];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar8 = *param_1;
  lstrcpyA(local_160,(LPCSTR)(param_1 + 1));
  uVar10 = lstrlenA(local_160);
  uVar10 = uVar10 & 0xff;
  uVar9 = *(undefined2 *)(uVar10 + 3 + (int)param_1);
  uVar1 = *(undefined1 *)(uVar10 + 5 + (int)param_1);
  uVar2 = *(undefined1 *)(uVar10 + 6 + (int)param_1);
  uVar3 = *(undefined1 *)(uVar10 + 7 + (int)param_1);
  uVar4 = *(undefined1 *)(uVar10 + 8 + (int)param_1);
  uVar5 = *(undefined1 *)(uVar10 + 9 + (int)param_1);
  uVar6 = *(undefined1 *)(uVar10 + 10 + (int)param_1);
  uVar7 = *(undefined1 *)(uVar10 + 0xb + (int)param_1);
  lstrcpyA(local_a8,(LPCSTR)(uVar10 + 0xc + (int)param_1));
  uVar11 = lstrlenA(local_a8);
  lstrcpyA(local_14c,(LPCSTR)(uVar10 + 0xd + (uVar11 & 0xff) + (int)param_1));
  lstrlenA(local_14c);
  (**(code **)(*DAT_3637fb00 + 0x290))
            (uVar8,uVar9,local_160,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,local_a8,local_14c);
  return;
}

