
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36199500(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 local_410 [257];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  uVar1 = *param_1;
  puVar3 = param_1 + 1;
  puVar4 = local_410;
  for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *(undefined4 *)puVar3;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar4 = (char)*puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  (**(code **)(*DAT_3637fb00 + 0x2ac))
            (CONCAT22((short)((uint)DAT_362abd90 >> 0x10),uVar1),local_410);
  return;
}

