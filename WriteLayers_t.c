
/* public: virtual void __thiscall CBrushShadowMap::WriteLayers_t(class CTStream *) */

void __thiscall CBrushShadowMap::WriteLayers_t(CBrushShadowMap *this,CTStream *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0x140a90  3971  ?WriteLayers_t@CBrushShadowMap@@UAEXPAVCTStream@@@Z */
  local_1 = DAT_36238af8;
  local_5 = DAT_36238af4;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_5);
  **(undefined4 **)(param_1 + 0x14) = 1;
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(this + 0x50);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(this + 0x54);
  iVar2 = *(int *)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = (int *)(iVar2 + 4);
  iVar7 = 0;
  piVar3 = *(int **)(this + 0x90);
  while (piVar4 = (int *)*piVar3, piVar4 != (int *)0x0) {
    piVar1 = piVar3 + 5;
    piVar3 = piVar4;
    if ((*(byte *)(*piVar1 + 0x1c) & 0x20) == 0) {
      iVar7 = iVar7 + 1;
    }
  }
  *(int *)(iVar2 + 4) = iVar7;
  piVar4 = (int *)(*(int *)(param_1 + 0x14) + 4);
  *(int **)(param_1 + 0x14) = piVar4;
  for (piVar3 = *(int **)(this + 0x90); *piVar3 != 0; piVar3 = (int *)*piVar3) {
    if ((*(byte *)(piVar3[5] + 0x1c) & 0x20) == 0) {
      *piVar4 = piVar3[-1];
      piVar4 = (int *)(*(int *)(param_1 + 0x14) + 4);
      *(int **)(param_1 + 0x14) = piVar4;
      if (piVar3[0xb] == 0) {
        *piVar4 = 0;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
      }
      else {
        *piVar4 = piVar3[10];
        iVar2 = *(int *)(param_1 + 0x14);
        *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
        uVar5 = (int)(piVar3[10] + 7 + (piVar3[10] + 7 >> 0x1f & 7U)) >> 3;
        puVar8 = (undefined4 *)piVar3[0xb];
        puVar9 = (undefined4 *)(iVar2 + 4);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar5;
      }
      **(int **)(param_1 + 0x14) = piVar3[6];
      iVar2 = *(int *)(param_1 + 0x14);
      *(int **)(param_1 + 0x14) = (int *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = piVar3[7];
      iVar2 = *(int *)(param_1 + 0x14);
      *(int **)(param_1 + 0x14) = (int *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = piVar3[8];
      iVar2 = *(int *)(param_1 + 0x14);
      *(int **)(param_1 + 0x14) = (int *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = piVar3[9];
      piVar4 = (int *)(*(int *)(param_1 + 0x14) + 4);
      *(int **)(param_1 + 0x14) = piVar4;
    }
  }
  return;
}

