
void __thiscall FUN_360b2da0(void *this,void *param_1)

{
  void *this_00;
  CObjectSector *this_01;
  void *this_02;
  CObjectSector *this_03;
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  CObjectMaterial *pCVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_90;
  long local_8c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213d76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_03 = (CObjectSector *)FUN_3604b080(param_1,1);
  this_00 = (void *)((int)this + 0x28);
  iVar1 = FUN_360b0fc0((int)this_00);
  FUN_3604c210(this_03,iVar1);
  iVar7 = 0;
  iVar1 = FUN_360b0fc0((int)this_00);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360b3ab0(this_00,iVar7);
      local_b4 = (double)*(float *)(iVar1 + 0xc);
      local_ac = (double)*(float *)(iVar1 + 0x10);
      local_a4 = (double)*(float *)(iVar1 + 0x14);
      local_90 = 0;
      puVar2 = (undefined4 *)FUN_3604a710(this_03,iVar7);
      puVar8 = &local_b4;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *(undefined4 *)puVar8;
        puVar8 = (undefined8 *)((int)puVar8 + 4);
        puVar2 = puVar2 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar1 = FUN_360b0fc0((int)this_00);
    } while (iVar7 < iVar1);
  }
  this_01 = this_03 + 0x28;
  iVar1 = FUN_360b3a90((int)this);
  FUN_3604c2b0(this_01,iVar1);
  iVar7 = 0;
  iVar10 = 0;
  local_4 = 0;
  iVar1 = FUN_360b3a90((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604f3f0(this_01,iVar10);
      puVar2 = (undefined4 *)FUN_360b3a80(this,iVar7);
      pcVar3 = StringDuplicate((char *)*puVar2);
      StringFree(*(char **)(iVar1 + 8));
      *(char **)(iVar1 + 8) = pcVar3;
      iVar1 = FUN_3604f3f0(this_01,iVar10);
      iVar4 = FUN_360b3a80(this,iVar7);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar4 + 4);
      iVar10 = iVar10 + 1;
      iVar7 = iVar7 + 1;
      iVar1 = FUN_360b3a90((int)this);
    } while (iVar7 < iVar1);
  }
  this_02 = (void *)((int)this + 0x14);
  iVar7 = 0;
  local_4 = 1;
  iVar1 = FUN_360b3d10((int)this_02);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_360b3aa0(this_02,iVar7);
      piVar9 = (int *)*puVar2;
      lVar11 = 0;
      do {
        if (0x1f < lVar11) break;
        iVar1 = thunk_FUN_360b3dc0(this_00,piVar9[2]);
        local_8c[lVar11] = iVar1;
        piVar9 = (int *)*piVar9;
        lVar11 = lVar11 + 1;
        piVar5 = (int *)FUN_360b3aa0(this_02,iVar7);
      } while (piVar9 != (int *)*piVar5);
      iVar10 = 0;
      uVar12 = 0;
      iVar1 = FUN_360b3aa0(this_02,iVar7);
      pCVar6 = (CObjectMaterial *)FUN_3604f3f0(this_03 + 0x28,*(int *)(iVar1 + 4));
      CObjectSector::CreatePolygon(this_03,lVar11,local_8c,pCVar6,uVar12,iVar10);
      iVar7 = iVar7 + 1;
      iVar1 = FUN_360b3d10((int)this_02);
    } while (iVar7 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

