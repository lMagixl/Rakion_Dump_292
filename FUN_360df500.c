
void __thiscall FUN_360df500(void *this,CTStream *param_1)

{
  CTStream *this_00;
  int iVar1;
  int iVar2;
  CTStream *pCVar3;
  CTStream *pCVar4;
  undefined4 *puVar5;
  int local_8;
  undefined1 local_4;
  
  this_00 = param_1;
  local_8 = FUN_360deeb0(this);
  **(undefined4 **)(param_1 + 0x14) = 1;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = (int *)(iVar2 + 4);
  *(int *)(iVar2 + 4) = local_8 * 0x30 + 4;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = (int *)(iVar2 + 4);
  *(int *)(iVar2 + 4) = local_8;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  *(undefined4 **)(param_1 + 0x14) = puVar5;
  if (0 < local_8) {
    param_1 = (CTStream *)0x0;
    do {
      pCVar3 = param_1 + *(int *)((int)this + 4);
      pCVar4 = pCVar3;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *(undefined4 *)pCVar4;
        pCVar4 = pCVar4 + 4;
        puVar5 = puVar5 + 1;
      }
      iVar2 = *(int *)(this_00 + 0x14);
      *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(pCVar3 + 0x20);
      iVar2 = *(int *)(this_00 + 0x14);
      *(int **)(this_00 + 0x14) = (int *)(iVar2 + 4);
      if (*(int *)(pCVar3 + 0x24) == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_360deec0(this,*(int *)(pCVar3 + 0x24));
      }
      *(int *)(iVar2 + 4) = iVar1;
      iVar2 = *(int *)(this_00 + 0x14);
      *(int **)(this_00 + 0x14) = (int *)(iVar2 + 4);
      if (*(int *)(pCVar3 + 0x28) == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_360deec0(this,*(int *)(pCVar3 + 0x28));
      }
      *(int *)(iVar2 + 4) = iVar1;
      iVar2 = *(int *)(this_00 + 0x14);
      *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(pCVar3 + 0x2c);
      puVar5 = (undefined4 *)(*(int *)(this_00 + 0x14) + 4);
      param_1 = param_1 + 0x30;
      local_8 = local_8 + -1;
      *(undefined4 **)(this_00 + 0x14) = puVar5;
    } while (local_8 != 0);
  }
  local_8 = DAT_36232834;
  local_4 = DAT_36232838;
  CTStream::WriteID_t(this_00,(CChunkID *)&local_8);
  return;
}

