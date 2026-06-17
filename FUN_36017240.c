
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_36017240(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_98 [32];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620e140;
  local_10 = ExceptionList;
  iVar7 = *(int *)((int)this + 4);
  local_14 = &stack0xffffff58;
  local_18 = DAT_362abd90;
  puVar3 = local_98;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((int)this + 0xc) - iVar7 >> 7;
  }
  uVar8 = CONCAT44(iVar7,iVar6);
  if (param_2 != 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar7 >> 7;
    }
    ExceptionList = &local_10;
    if (0x1ffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar8 = FUN_36009f20();
    }
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar2 = (uint)uVar8;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar7 >> 7;
    }
    if (uVar2 < iVar6 + param_2) {
      if (0x1ffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar7 >> 7;
      }
      if (uVar2 < iVar6 + param_2) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 8) - iVar7 >> 7;
        }
        uVar2 = iVar7 + param_2;
      }
      puVar3 = (undefined4 *)FUN_361bf99c(uVar2 * 0x80);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_36010900(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_360141c0(puVar4,param_2,local_98);
      FUN_36010900(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 0x20);
      pvVar1 = *(void **)((int)this + 4);
      if (pvVar1 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - (int)pvVar1 >> 7;
      }
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar2 * 0x20;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar7) * 0x20;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar3 = *(undefined4 **)((int)this + 8);
      if ((uint)((int)puVar3 - (int)param_1 >> 7) < param_2) {
        FUN_36010900(param_1,puVar3,param_1 + param_2 * 0x20);
        local_8 = 2;
        FUN_360170e0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 7),local_98);
        iVar7 = *(int *)((int)this + 8) + param_2 * 0x80;
        *(int *)((int)this + 8) = iVar7;
        FUN_3600b3d0(param_1,(undefined4 *)(iVar7 + param_2 * -0x80),local_98);
      }
      else {
        uVar5 = FUN_36010900(puVar3 + param_2 * -0x20,puVar3,puVar3);
        *(undefined4 *)((int)this + 8) = uVar5;
        FUN_3600fd40(param_1,puVar3 + param_2 * -0x20,puVar3);
        FUN_3600b3d0(param_1,param_1 + param_2 * 0x20,local_98);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

