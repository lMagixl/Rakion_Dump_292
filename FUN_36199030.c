
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36199030(undefined1 *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_410 [257];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  uVar1 = *param_1;
  uVar2 = *(ushort *)(param_1 + 1);
  if (uVar2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 3);
    puVar5 = local_410;
    for (uVar3 = (uint)(uVar2 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  (**(code **)(*DAT_3637fb00 + 0x284))
            (uVar1,CONCAT22((short)((uint)DAT_362abd90 >> 0x10),uVar2),local_410);
  return;
}

