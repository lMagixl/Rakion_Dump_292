
void __thiscall FUN_360e0ec0(void *this,CTStream *param_1)

{
  CTStream *pCVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  CTStream *this_00;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_5;
  undefined1 local_1;
  
  this_00 = param_1;
  FUN_360e0de0(this);
  iVar7 = *(int *)(param_1 + 0x14);
  piVar6 = (int *)(iVar7 + 8);
  *(int **)(param_1 + 0x14) = piVar6;
  pCVar1 = (CTStream *)*piVar6;
  *(int *)(param_1 + 0x14) = iVar7 + 0xc;
  FUN_360dfd00(this,(int)pCVar1);
  if (0 < (int)pCVar1) {
    iVar7 = 0;
    param_1 = pCVar1;
    do {
      puVar2 = *(undefined4 **)(this_00 + 0x14);
      puVar5 = (undefined4 *)(*(int *)((int)this + 4) + iVar7);
      *puVar5 = *puVar2;
      puVar5[1] = puVar2[1];
      puVar5[2] = puVar2[2];
      puVar5[3] = puVar2[3];
      iVar3 = *(int *)(this_00 + 0x14);
      *(undefined4 **)(this_00 + 0x14) = (undefined4 *)(iVar3 + 0x10);
      puVar5[4] = *(undefined4 *)(iVar3 + 0x10);
      iVar3 = *(int *)(this_00 + 0x14);
      piVar6 = (int *)(iVar3 + 4);
      *(int **)(this_00 + 0x14) = piVar6;
      iVar4 = *piVar6;
      *(int *)(this_00 + 0x14) = iVar3 + 8;
      if (iVar4 == -1) {
        puVar5[5] = 0;
      }
      else {
        puVar5[5] = iVar4 * 0x20 + *(int *)((int)this + 4);
      }
      iVar3 = **(int **)(this_00 + 0x14);
      *(int **)(this_00 + 0x14) = *(int **)(this_00 + 0x14) + 1;
      if (iVar3 == -1) {
        puVar5[6] = 0;
      }
      else {
        puVar5[6] = iVar3 * 0x20 + *(int *)((int)this + 4);
      }
      puVar5[7] = **(undefined4 **)(this_00 + 0x14);
      iVar7 = iVar7 + 0x20;
      param_1 = param_1 + -1;
      *(int *)(this_00 + 0x14) = *(int *)(this_00 + 0x14) + 4;
    } while (param_1 != (CTStream *)0x0);
  }
  local_1 = DAT_36232840;
  local_5 = DAT_3623283c;
  CTStream::ExpectID_t(this_00,(CChunkID *)&local_5);
  iVar7 = FUN_360df120(this);
  if (iVar7 < 1) {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
  return;
}

