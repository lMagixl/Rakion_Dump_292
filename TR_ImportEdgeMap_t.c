
/* void __cdecl TR_ImportEdgeMap_t(class CTerrain *,class CTFileName const &) */

void __cdecl TR_ImportEdgeMap_t(CTerrain *param_1,CTFileName *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x175670  3773  ?TR_ImportEdgeMap_t@@YAXPAVCTerrain@@ABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a82a;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x2c);
  ExceptionList = &local_c;
  CImageInfo::CImageInfo((CImageInfo *)&local_1c);
  local_4 = 0;
  CImageInfo::LoadAnyGfxFormat_t((CImageInfo *)&local_1c,param_2);
  iVar2 = local_18 * local_1c;
  if (local_1c + 1 != *(int *)(iVar1 + 0x18)) {
    ThrowF_t(s_Edge_map_width_must_match_terrai_3623d100);
  }
  if (local_18 + 1 != *(int *)(iVar1 + 0x1c)) {
    ThrowF_t(s_Edge_map_height_must_match_terra_3623d138);
  }
  puVar3 = *(undefined1 **)(iVar1 + 8);
  if (0 < iVar2) {
    do {
      *puVar3 = *local_10;
      puVar3 = puVar3 + 1;
      local_10 = local_10 + ((int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_361731d0((byte *)param_1,1);
  local_4 = 0xffffffff;
  CImageInfo::~CImageInfo((CImageInfo *)&local_1c);
  ExceptionList = local_c;
  return;
}

