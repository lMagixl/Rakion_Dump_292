
void __thiscall FUN_360e06d0(void *this,CTStream *param_1)

{
  int iVar1;
  CTStream *this_00;
  CTStream *pCVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  CTStream *pCVar6;
  int local_8;
  undefined1 local_4;
  
  this_00 = param_1;
  FUN_360e05d0(this);
  iVar3 = *(int *)(param_1 + 0x14);
  piVar4 = (int *)(iVar3 + 8);
  *(int **)(param_1 + 0x14) = piVar4;
  iVar1 = *piVar4;
  *(int *)(param_1 + 0x14) = iVar3 + 0xc;
  FUN_360dfb90(this,iVar1);
  if (0 < iVar1) {
    param_1 = (CTStream *)0x0;
    local_8 = iVar1;
    do {
      pCVar2 = param_1 + *(int *)((int)this + 4);
      puVar5 = *(undefined4 **)(this_00 + 0x14);
      pCVar6 = pCVar2;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pCVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        pCVar6 = pCVar6 + 4;
      }
      iVar3 = *(int *)(this_00 + 0x14);
      *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(pCVar2 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
      iVar3 = *(int *)(this_00 + 0x14);
      piVar4 = (int *)(iVar3 + 4);
      *(int **)(this_00 + 0x14) = piVar4;
      iVar1 = *piVar4;
      *(int *)(this_00 + 0x14) = iVar3 + 8;
      if (iVar1 == -1) {
        *(undefined4 *)(pCVar2 + 0x24) = 0;
      }
      else {
        *(int *)(pCVar2 + 0x24) = iVar1 * 0x30 + *(int *)((int)this + 4);
      }
      iVar3 = **(int **)(this_00 + 0x14);
      *(int **)(this_00 + 0x14) = *(int **)(this_00 + 0x14) + 1;
      if (iVar3 == -1) {
        *(undefined4 *)(pCVar2 + 0x28) = 0;
      }
      else {
        *(int *)(pCVar2 + 0x28) = iVar3 * 0x30 + *(int *)((int)this + 4);
      }
      *(undefined4 *)(pCVar2 + 0x2c) = **(undefined4 **)(this_00 + 0x14);
      param_1 = param_1 + 0x30;
      local_8 = local_8 + -1;
      *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
    } while (local_8 != 0);
  }
  local_8 = DAT_3623282c;
  local_4 = DAT_36232830;
  CTStream::ExpectID_t(this_00,(CChunkID *)&local_8);
  iVar3 = FUN_360deeb0(this);
  if (iVar3 < 1) {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
  return;
}

