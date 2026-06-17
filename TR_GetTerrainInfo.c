
/* class CTString __cdecl TR_GetTerrainInfo(class CTerrain const *) */

CTerrain * __cdecl TR_GetTerrainInfo(CTerrain *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  CTString *pCVar3;
  CTString *this;
  CTString *this_00;
  CTString *this_01;
  CTString *this_02;
  CTString *this_03;
  CTString *this_04;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x17af90  3768  ?TR_GetTerrainInfo@@YA?AVCTString@@PBVCTerrain@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621aa61;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  local_18 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  puVar1 = (undefined4 *)
           CTString::CTString((CTString *)&local_14,(long)&local_14,(char *)0x0,
                              s_I_Qtns____d_3623d2aa + 2,DAT_36300d7c);
  local_4._0_1_ = 2;
  pcVar2 = StringDuplicate((char *)*puVar1);
  StringFree(local_18);
  local_4._0_1_ = 1;
  local_18 = pcVar2;
  StringFree(local_14);
  pCVar3 = (CTString *)
           CTString::CTString(this,(long)&local_14,(char *)0x0,s_Tris____d_3623d2b8,DAT_36300d84);
  local_4._0_1_ = 3;
  CTString::operator+=((CTString *)&local_18,pCVar3);
  local_4._0_1_ = 1;
  StringFree(local_14);
  pCVar3 = (CTString *)
           CTString::CTString(this_00,(long)&local_14,(char *)0x0,s_Vtxs____d_3623d2c4,DAT_36300d80)
  ;
  local_4._0_1_ = 4;
  CTString::operator+=((CTString *)&local_18,pCVar3);
  local_4._0_1_ = 1;
  StringFree(local_14);
  pCVar3 = (CTString *)
           CTString::CTString(this_01,(long)&local_14,(char *)0x0,s_Tiles_edge_tested____d_3623d2d0,
                              DAT_36300d94);
  local_4._0_1_ = 5;
  CTString::operator+=((CTString *)&local_18,pCVar3);
  local_4._0_1_ = 1;
  StringFree(local_14);
  pCVar3 = (CTString *)
           CTString::CTString(this_02,(long)&local_14,(char *)0x0,
                              s_Tiles_edge_rejected____d_3623d2e8,DAT_36300d98);
  local_4._0_1_ = 6;
  CTString::operator+=((CTString *)&local_18,pCVar3);
  local_4._0_1_ = 1;
  StringFree(local_14);
  pCVar3 = (CTString *)
           CTString::CTString(this_03,(long)&local_14,(char *)0x0,s_Tile_layers_skiped____d_3623d304
                              ,DAT_36300d9c);
  local_4._0_1_ = 7;
  CTString::operator+=((CTString *)&local_18,pCVar3);
  local_4._0_1_ = 1;
  StringFree(local_14);
  pCVar3 = (CTString *)
           CTString::CTString(this_04,(long)&local_14,(char *)0x0,s_GeometryBuilds____d_3623d320,
                              DAT_36300d88);
  local_4._0_1_ = 8;
  CTString::operator+=((CTString *)&local_18,pCVar3);
  local_4._0_1_ = 1;
  StringFree(local_14);
  pCVar3 = (CTString *)
           CTString::CTString((CTString *)&local_14,(long)&local_14,(char *)0x0,
                              s_Geometry_NB_TT_____d__d____g_3623d338,DAT_36300d90,DAT_36300d8c,
                              (double)DAT_36300d90 / (double)DAT_36300d8c);
  local_4._0_1_ = 9;
  CTString::operator+=((CTString *)&local_18,pCVar3);
  local_4._0_1_ = 1;
  StringFree(local_14);
  pcVar2 = StringDuplicate(local_18);
  *(char **)param_1 = pcVar2;
  local_10 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_18);
  ExceptionList = local_c;
  return param_1;
}

