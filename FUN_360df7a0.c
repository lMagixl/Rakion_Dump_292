
void __thiscall FUN_360df7a0(void *this,CTStream *param_1)

{
  int iVar1;
  CTStream *this_00;
  int iVar2;
  undefined4 *puVar3;
  CTStream *pCVar4;
  int local_8;
  undefined1 local_4;
  
  this_00 = param_1;
  local_8 = FUN_360df120(this);
  **(undefined4 **)(param_1 + 0x14) = 1;
  iVar1 = *(int *)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = (int *)(iVar1 + 4);
  *(int *)(iVar1 + 4) = local_8 * 0x20 + 4;
  iVar1 = *(int *)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = (int *)(iVar1 + 4);
  *(int *)(iVar1 + 4) = local_8;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  *(undefined4 **)(param_1 + 0x14) = puVar3;
  if (0 < local_8) {
    param_1 = (CTStream *)0x0;
    do {
      pCVar4 = param_1 + *(int *)((int)this + 4);
      *puVar3 = *(undefined4 *)pCVar4;
      puVar3[1] = *(undefined4 *)(pCVar4 + 4);
      puVar3[2] = *(undefined4 *)(pCVar4 + 8);
      puVar3[3] = *(undefined4 *)(pCVar4 + 0xc);
      iVar1 = *(int *)(this_00 + 0x14);
      *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(pCVar4 + 0x10);
      iVar1 = *(int *)(this_00 + 0x14);
      *(int **)(this_00 + 0x14) = (int *)(iVar1 + 4);
      if (*(int *)(pCVar4 + 0x14) == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = FUN_360df130(this,*(int *)(pCVar4 + 0x14));
      }
      *(int *)(iVar1 + 4) = iVar2;
      iVar1 = *(int *)(this_00 + 0x14);
      *(int **)(this_00 + 0x14) = (int *)(iVar1 + 4);
      if (*(int *)(pCVar4 + 0x18) == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = FUN_360df130(this,*(int *)(pCVar4 + 0x18));
      }
      *(int *)(iVar1 + 4) = iVar2;
      iVar1 = *(int *)(this_00 + 0x14);
      *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(pCVar4 + 0x1c);
      puVar3 = (undefined4 *)(*(int *)(this_00 + 0x14) + 4);
      param_1 = param_1 + 0x20;
      local_8 = local_8 + -1;
      *(undefined4 **)(this_00 + 0x14) = puVar3;
    } while (local_8 != 0);
  }
  local_4 = DAT_36232848;
  local_8 = DAT_36232844;
  CTStream::WriteID_t(this_00,(CChunkID *)&local_8);
  return;
}

