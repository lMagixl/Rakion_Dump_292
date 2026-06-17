
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36191b60(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  ushort local_1010;
  ushort local_100e [2049];
  undefined4 local_c;
  
  uVar3 = param_2 + 2;
  local_c = DAT_362abd90;
  uVar5 = (ushort)uVar3;
  puVar6 = local_100e;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 2;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar6 = (ushort *)((int)puVar6 + 1);
  }
  local_1010 = uVar5;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36362a50);
  uVar1 = (ushort)DAT_36363a88;
  if ((ushort)DAT_36363a88 < (ushort)DAT_36363a8c) {
    if ((int)(uVar3 & 0xffff) < (int)((uint)(ushort)DAT_36363a8c - (DAT_36363a88 & 0xffff))) {
      puVar6 = &local_1010;
      puVar7 = (undefined4 *)((int)&DAT_36363a90 + (DAT_36363a88 & 0xffff));
      for (uVar2 = (uVar3 & 0xffff) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *(undefined4 *)puVar6;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 1;
      }
      DAT_36363a88 = CONCAT22(DAT_36363a88._2_2_,uVar1 + uVar5);
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar7 = (char)*puVar6;
        puVar6 = (ushort *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      goto LAB_36191c93;
    }
  }
  else {
    uVar2 = 0xa000 - DAT_36363a88;
    puVar7 = (undefined4 *)((int)&DAT_36363a90 + (DAT_36363a88 & 0xffff));
    if (uVar5 <= (ushort)uVar2) {
      puVar6 = &local_1010;
      for (uVar2 = (uVar3 & 0xffff) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *(undefined4 *)puVar6;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 1;
      }
      uVar1 = uVar1 + uVar5;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar7 = (char)*puVar6;
        puVar6 = (ushort *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      DAT_36363a88 = CONCAT22(DAT_36363a88._2_2_,uVar1);
      if (0x9fff < uVar1) {
        DAT_36363a88 = (uint)DAT_36363a88._2_2_ << 0x10;
      }
      goto LAB_36191c93;
    }
    puVar6 = &local_1010;
    for (uVar4 = (uVar2 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *(undefined4 *)puVar6;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 1;
    }
    uVar3 = uVar3 - uVar2;
    bVar9 = (ushort)uVar3 < (ushort)DAT_36363a8c;
    for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar7 = (char)*puVar6;
      puVar6 = (ushort *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    if (bVar9) {
      puVar7 = (undefined4 *)((int)&local_1010 + (uVar2 & 0xffff));
      puVar8 = &DAT_36363a90;
      for (uVar4 = (uVar3 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      DAT_36363a88 = CONCAT22(DAT_36363a88._2_2_,(ushort)uVar3);
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      goto LAB_36191c93;
    }
  }
  IScavengerBrokerNet::Disconnect(DAT_3636fa98);
LAB_36191c93:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36362a50);
  return;
}

