
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361950d0(undefined2 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ushort *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  ushort local_3010;
  uint local_300e [1023];
  undefined2 local_2010;
  ushort local_200e;
  undefined4 local_200c [1023];
  uint local_1010 [1025];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  if (_bWorldEditorApp != 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
  local_2010 = *param_1;
  local_200e = -(ushort)(param_3 != 0) & (ushort)_DAT_36381b28;
  puVar10 = (undefined4 *)(param_1 + 1);
  puVar11 = local_200c;
  for (uVar3 = param_2 - 2U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar3 = param_2 - 2U & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  if (param_3 == 1) {
    uVar1 = (ushort)_DAT_36381b28 + 3;
    _DAT_36381b28 = CONCAT22(DAT_36381b28_2,uVar1);
    if (65000 < uVar1) {
      _DAT_36381b28 = (uint)DAT_36381b28_2 << 0x10;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
  uVar5 = (param_2 + 1U) / 0xc + 1;
  uVar6 = uVar5 * 0x10;
  uVar3 = uVar6 & 0xffff;
  FUN_361949a0(DAT_36372ae8,(undefined4 *)&local_2010,(uVar5 & 0xffff) * 0xc,local_1010,uVar3);
  uVar6 = uVar6 + 2;
  uVar1 = (ushort)uVar6;
  local_3010 = uVar1;
  puVar7 = local_1010;
  puVar9 = local_300e;
  for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)puVar9 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
  uVar2 = (ushort)DAT_36373af0;
  if ((ushort)DAT_36373af0 < DAT_36373af4) {
    if ((int)(uVar6 & 0xffff) < (int)((uint)DAT_36373af4 - (DAT_36373af0 & 0xffff))) {
      puVar8 = &local_3010;
      puVar10 = (undefined4 *)((int)&DAT_36373af8 + (DAT_36373af0 & 0xffff));
      for (uVar3 = (uVar6 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *(undefined4 *)puVar8;
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 1;
      }
      DAT_36373af0 = CONCAT22(DAT_36373af0._2_2_,uVar2 + uVar1);
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar10 = (char)*puVar8;
        puVar8 = (ushort *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      goto LAB_361952d3;
    }
  }
  else {
    uVar3 = 0xa000 - DAT_36373af0;
    puVar10 = (undefined4 *)((int)&DAT_36373af8 + (DAT_36373af0 & 0xffff));
    if (uVar1 <= (ushort)uVar3) {
      puVar8 = &local_3010;
      for (uVar3 = (uVar6 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *(undefined4 *)puVar8;
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 1;
      }
      uVar2 = uVar2 + uVar1;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar10 = (char)*puVar8;
        puVar8 = (ushort *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      DAT_36373af0 = CONCAT22(DAT_36373af0._2_2_,uVar2);
      if (0x9fff < uVar2) {
        DAT_36373af0 = (uint)DAT_36373af0._2_2_ << 0x10;
      }
      goto LAB_361952d3;
    }
    puVar8 = &local_3010;
    for (uVar5 = (uVar3 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *(undefined4 *)puVar8;
      puVar8 = puVar8 + 2;
      puVar10 = puVar10 + 1;
    }
    uVar6 = uVar6 - uVar3;
    bVar12 = (ushort)uVar6 < DAT_36373af4;
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar10 = (char)*puVar8;
      puVar8 = (ushort *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    if (bVar12) {
      puVar10 = (undefined4 *)((int)&local_3010 + (uVar3 & 0xffff));
      puVar11 = &DAT_36373af8;
      for (uVar5 = (uVar6 & 0xffff) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      DAT_36373af0 = CONCAT22(DAT_36373af0._2_2_,(ushort)uVar6);
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      goto LAB_361952d3;
    }
  }
  (**(code **)(*DAT_3637fb00 + 0x14))();
LAB_361952d3:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
  return;
}

