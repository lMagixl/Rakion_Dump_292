
void __thiscall FUN_3601f8c0(void *this,CTStream *param_1)

{
  int iVar1;
  uint uVar2;
  CTStream *pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_5;
  undefined1 local_1;
  
  pCVar3 = param_1;
  local_1 = DAT_36223fac;
  local_5 = DAT_36223fa8;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_5);
  **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar6 = 0;
  param_1 = (CTStream *)0x0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      puVar7 = (undefined4 *)(*(int *)((int)this + 0x18) + iVar6);
      puVar8 = *(undefined4 **)(pCVar3 + 0x14);
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar4 = *(int *)(pCVar3 + 0x14);
      *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar6 + 0x20 + *(int *)((int)this + 0x18));
      iVar4 = *(int *)(pCVar3 + 0x14);
      *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar6 + 0x24 + *(int *)((int)this + 0x18));
      iVar1 = *(int *)(pCVar3 + 0x14);
      *(undefined4 **)(pCVar3 + 0x14) = (undefined4 *)(iVar1 + 4);
      iVar4 = iVar6 + *(int *)((int)this + 0x18);
      uVar2 = *(uint *)(iVar4 + 0x24);
      puVar7 = *(undefined4 **)(iVar4 + 0x28);
      puVar8 = (undefined4 *)(iVar1 + 4);
      for (uVar5 = uVar2 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(pCVar3 + 0x14) = *(int *)(pCVar3 + 0x14) + uVar2 * 4;
      param_1 = param_1 + 1;
      iVar6 = iVar6 + 0x2c;
    } while ((int)param_1 < *(int *)((int)this + 0x14));
  }
  return;
}

