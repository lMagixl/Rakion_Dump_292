
void __thiscall FUN_3601fda0(void *this,CTStream *param_1)

{
  uint uVar1;
  CTStream *pCVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_11;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ed03;
  local_c = ExceptionList;
  local_d = DAT_36223fd4;
  local_11 = DAT_36223fd0;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_11);
  *(undefined4 *)((int)this + 0x14) = **(undefined4 **)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar8 = *(int *)((int)this + 0x14);
  piVar3 = (int *)thunk_FUN_361bf99c(iVar8 * 0x2c + 4);
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (piVar3 != (int *)0x0) {
    piVar7 = piVar3 + 1;
    *piVar3 = iVar8;
    _eh_vector_constructor_iterator_(piVar7,0x2c,iVar8,FUN_3601f4c0,FUN_3601f4d0);
  }
  *(int **)((int)this + 0x18) = piVar7;
  iVar8 = 0;
  local_4 = 0xffffffff;
  param_1 = (CTStream *)0x0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      puVar9 = *(undefined4 **)(pCVar2 + 0x14);
      puVar10 = (undefined4 *)(*(int *)((int)this + 0x18) + iVar8);
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar5 = *(int *)(pCVar2 + 0x14);
      *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(*(int *)((int)this + 0x18) + 0x20 + iVar8) = *(undefined4 *)(iVar5 + 0x20);
      iVar5 = *(int *)(pCVar2 + 0x14);
      *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
      *(undefined4 *)(*(int *)((int)this + 0x18) + 0x24 + iVar8) = *(undefined4 *)(iVar5 + 4);
      *(int *)(pCVar2 + 0x14) = *(int *)(pCVar2 + 0x14) + 4;
      pvVar4 = AllocMemory(*(int *)(*(int *)((int)this + 0x18) + 0x24 + iVar8) << 2);
      *(void **)(*(int *)((int)this + 0x18) + 0x28 + iVar8) = pvVar4;
      uVar1 = *(uint *)(*(int *)((int)this + 0x18) + 0x24 + iVar8);
      puVar9 = *(undefined4 **)(pCVar2 + 0x14);
      puVar10 = *(undefined4 **)(*(int *)((int)this + 0x18) + 0x28 + iVar8);
      for (uVar6 = uVar1 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(uint *)(pCVar2 + 0x14) = *(int *)(pCVar2 + 0x14) + uVar1 * 4;
      param_1 = param_1 + 1;
      iVar8 = iVar8 + 0x2c;
    } while ((int)param_1 < *(int *)((int)this + 0x14));
  }
  ExceptionList = local_c;
  return;
}

