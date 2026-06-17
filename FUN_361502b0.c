
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl FUN_361502b0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  bool bVar9;
  int iVar10;
  char *pcVar11;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_4;
  
  DAT_363884a8 = *param_2;
  local_4 = DAT_362abd90;
  bVar3 = false;
  local_14 = DAT_362a6a84;
  uVar4 = DAT_362a6a80;
  while( true ) {
    param_1 = param_1 + -1;
    param_2 = param_2 + 1;
    if (param_1 < 1) break;
    pbVar2 = (byte *)*param_2;
    pbVar8 = &DAT_362a6a88;
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_36150334:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_36150339;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_36150334;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_36150339:
    if (iVar6 == 0) {
      bVar3 = true;
    }
    else {
      pbVar8 = &DAT_362a6a8c;
      pbVar5 = pbVar2;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_36150375:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_3615037a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_36150375;
        pbVar5 = pbVar5 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_3615037a:
      local_18._0_3_ = (undefined3)uVar4;
      if (iVar6 == 0) {
        local_18 = CONCAT13(0x66,(undefined3)local_18);
        uVar4 = local_18;
      }
      else {
        pbVar8 = &DAT_362a6a90;
        pbVar5 = pbVar2;
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_361503b4:
            iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_361503b9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_361503b4;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_361503b9:
        if (iVar6 == 0) {
          local_18 = CONCAT13(0x68,(undefined3)local_18);
          uVar4 = local_18;
        }
        else {
          pbVar8 = &DAT_362a6a94;
          pbVar5 = pbVar2;
          do {
            bVar1 = *pbVar5;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_361503f4:
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_361503f9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_361503f4;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_361503f9:
          if (iVar6 == 0) {
            local_18 = CONCAT13(0x52,(undefined3)local_18);
            uVar4 = local_18;
          }
          else {
            if ((((*pbVar2 != 0x2d) || (bVar1 = pbVar2[1], (char)bVar1 < '1')) ||
                ('9' < (char)bVar1)) || (pbVar2[2] != 0)) break;
            local_18._3_1_ = (undefined1)((uint)uVar4 >> 0x18);
            local_18._0_3_ = CONCAT12(bVar1,(short)uVar4);
            uVar4 = local_18;
          }
        }
      }
    }
  }
  local_18 = uVar4;
  if (param_1 != 0) {
    do {
      if (bVar3) {
        FUN_36150160((char *)*param_2);
      }
      else {
        FUN_36150070((char *)*param_2,(char *)&local_18);
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    return 0;
  }
  iVar10 = 0x8000;
  iVar6 = _fileno((FILE *)_iob_exref);
  _setmode(iVar6,iVar10);
  iVar10 = 0x8000;
  iVar6 = _fileno((FILE *)(_iob_exref + 0x20));
  _setmode(iVar6,iVar10);
  if (!bVar3) {
    pcVar11 = (char *)&local_18;
    iVar6 = _fileno((FILE *)(_iob_exref + 0x20));
    piVar7 = FUN_3614c570(iVar6,pcVar11);
    if (piVar7 == (int *)0x0) {
      FUN_3614fe80(s_can_t_gzdopen_stdout_362a6ab0);
    }
    FUN_3614feb0((FILE *)_iob_exref,piVar7);
    return 0;
  }
  pcVar11 = &DAT_362a6a98;
  iVar6 = _fileno((FILE *)_iob_exref);
  piVar7 = FUN_3614c570(iVar6,pcVar11);
  if (piVar7 == (int *)0x0) {
    FUN_3614fe80(s_can_t_gzdopen_stdin_362a6a9c);
  }
  FUN_3614ffa0(piVar7,(FILE *)(_iob_exref + 0x20));
  return 0;
}

