
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198e10(LPCSTR param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CHAR local_218 [164];
  CHAR local_174 [164];
  CHAR local_d0 [204];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  lstrcpyA(local_174,param_1);
  iVar2 = lstrlenA(local_174);
  lstrcpyA(local_218,param_1 + (iVar2 + 1U & 0xffff));
  iVar3 = lstrlenA(local_218);
  uVar1 = iVar2 + 2 + iVar3;
  lstrcpyA(local_d0,param_1 + (uVar1 & 0xffff));
  iVar2 = lstrlenA(local_d0);
  uVar1 = uVar1 + 1 + iVar2;
  (**(code **)(*DAT_3637fb00 + 0x25c))
            (local_174,local_218,local_d0,param_1[uVar1 & 0xffff],param_1[uVar1 + 1 & 0xffff],
             *(undefined2 *)(param_1 + (uVar1 + 2 & 0xffff)),param_1[uVar1 + 4 & 0xffff],
             param_1[uVar1 + 5 & 0xffff]);
  return;
}

