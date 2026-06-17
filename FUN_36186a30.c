
void __thiscall FUN_36186a30(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621ac80;
  local_10 = ExceptionList;
  iVar7 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar7 >> 2;
  }
  uVar8 = CONCAT44(iVar7,iVar2);
  if (param_2 != 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar7 >> 2;
    }
    ExceptionList = &local_10;
    if (0x3fffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar8 = FUN_36185570();
    }
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar7 >> 2;
    }
    if (uVar3 < iVar2 + param_2) {
      if (0x3fffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar7 >> 2;
      }
      if (uVar3 < iVar2 + param_2) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 8) - iVar7 >> 2;
        }
        uVar3 = iVar7 + param_2;
      }
      puVar4 = (undefined4 *)FUN_361bf99c(uVar3 * 4);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_36185ce0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_36185fd0(puVar5,param_2,&param_3);
      FUN_36185ce0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2);
      pvVar1 = *(void **)((int)this + 4);
      if (pvVar1 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - (int)pvVar1 >> 2;
      }
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar3;
      *(undefined4 **)((int)this + 8) = puVar4 + param_2 + iVar7;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      FUN_36185ce0(param_1,puVar4,param_1 + param_2);
      local_8 = 2;
      FUN_36186820(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar7 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar7;
      FUN_361856f0(param_1,(undefined4 *)(iVar7 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_36185ce0(puVar4 + -param_2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_36185bf0((int)param_1,(int)(puVar4 + -param_2),puVar4);
    FUN_361856f0(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}

