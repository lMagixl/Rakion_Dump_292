
/* void __cdecl TR_ExportHeightMap_t(class CTerrain *,class CTFileName const &,int) */

void __cdecl TR_ExportHeightMap_t(CTerrain *param_1,CTFileName *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x175560  3753  ?TR_ExportHeightMap_t@@YAXPAVCTerrain@@ABVCTFileName@@H@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a818;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x2c);
  ExceptionList = &local_c;
  if (*piVar1 == 0) {
    ExceptionList = &local_c;
    ThrowF_t(s_Terrain_has_no_height_map_to_exp_3623d0dc);
  }
  iVar2 = piVar1[7];
  iVar3 = piVar1[6];
  iVar8 = iVar2 * iVar3;
  CImageInfo::CImageInfo((CImageInfo *)&local_1c);
  local_4 = 0;
  local_14 = 0x20;
  local_1c = iVar3;
  local_18 = iVar2;
  local_10 = AllocMemory((int)(iVar8 * 0x20 + (iVar8 * 0x20 >> 0x1f & 7U)) >> 3);
  uVar5 = (int)(local_14 * iVar8 + (local_14 * iVar8 >> 0x1f & 7U)) >> 3;
  puVar4 = local_10;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  puVar7 = (undefined2 *)*piVar1;
  if (param_3 == 0) {
    puVar4 = local_10;
    if (0 < iVar8) {
      do {
        *(undefined1 *)puVar4 = *(undefined1 *)((int)puVar7 + 1);
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    puVar4 = local_10;
    if (0 < iVar8) {
      do {
        *(undefined2 *)puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  CImageInfo::SaveTGA_t((CImageInfo *)&local_1c,param_2);
  CImageInfo::Clear((CImageInfo *)&local_1c);
  local_4 = 0xffffffff;
  CImageInfo::~CImageInfo((CImageInfo *)&local_1c);
  ExceptionList = local_c;
  return;
}

