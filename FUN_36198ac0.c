
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36198ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_4c [7];
  undefined4 local_30 [11];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar1 = *param_1;
  puVar4 = local_4c;
  puVar3 = param_1;
  for (iVar2 = 7; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  puVar3 = param_1 + 8;
  puVar4 = local_30;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  (**(code **)(*DAT_3637fb00 + 0x228))(uVar1,local_4c,local_30);
  return;
}

