
/* public: void __thiscall CEntity::InitAsTerrain(void) */

void __thiscall CEntity::InitAsTerrain(CEntity *this)

{
  int *piVar1;
  long lVar2;
  char *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12b0e0  2302  ?InitAsTerrain@CEntity@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218a80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = 0xb;
  if (*(int *)(this + 0x7c) == 0) {
    piVar1 = FUN_360cca20((void *)(*(int *)(*(int *)(this + 0xa8) + 0x38) + 0x14),1);
    *(int **)(this + 0x7c) = piVar1;
    piVar1[10] = (int)this;
    local_54 = (char *)0x43800000;
    local_50 = 0x42480000;
    local_4c = 0x43800000;
    TR_SetHeightMapSize(*(CTerrain **)(this + 0x7c),0x101,0x101);
    TR_FillHeightMap(*(CTerrain **)(this + 0x7c),0);
    TR_SetTerrainSize(*(undefined4 *)(this + 0x7c),local_54,local_50,local_4c);
    TR_FillEdgeMap(*(CTerrain **)(this + 0x7c),0xff);
    local_54 = (char *)0x43800000;
    local_50 = 0x42480000;
    local_4c = 0x43800000;
    TR_SetTerrainSize(*(undefined4 *)(this + 0x7c),0x43800000,0x42480000,0x43800000);
    local_54 = StringDuplicate(s_EFNMTextures_Editor_Default_tex_36237bdc + 4);
    local_50 = 0;
    local_4 = 0;
    lVar2 = TRL_CreateLayer_t(*(CTerrain **)(this + 0x7c),(CTFileName *)&local_54);
    local_4 = 0xffffffff;
    StringFree(local_54);
    TRL_FillLayerData(*(CTerrain **)(this + 0x7c),lVar2,0xff);
    TR_GetMatrixFromEntity(local_3c,*(CTerrain **)(this + 0x7c));
    local_54 = (char *)0x7f61b1e6;
    local_48 = 0xff61b1e6;
    local_50 = 0x7f61b1e6;
    local_44 = 0xff61b1e6;
    local_4c = 0x7f61b1e6;
    local_40 = 0xff61b1e6;
    TR_UpdateShadowMap(*(undefined4 *)(this + 0x7c),local_3c,0x7f61b1e6,0x7f61b1e6,0x7f61b1e6,
                       0xff61b1e6,0xff61b1e6,0xff61b1e6,1);
    TR_SetTopMapSize(*(CTerrain **)(this + 0x7c),0x400,0x400);
  }
  UpdateSpatialRange(this);
  ExceptionList = local_c;
  return;
}

