
/* void __cdecl TRL_ReadLayerData_t(class CTerrain *,long,class CTStream *) */

void __cdecl TRL_ReadLayerData_t(CTerrain *param_1,long param_2,CTStream *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0x17a760  3729  ?TRL_ReadLayerData_t@@YAXPAVCTerrain@@JPAVCTStream@@@Z */
  local_1 = DAT_3623d22c;
  local_5 = DAT_3623d228;
  CTStream::ExpectID_t(param_3,(CChunkID *)&local_5);
  iVar2 = **(int **)(param_3 + 0x14);
  *(int **)(param_3 + 0x14) = *(int **)(param_3 + 0x14) + 1;
  if (iVar2 == 0xc) {
    FUN_3617a4b0(param_1,param_2);
    return;
  }
  uVar3 = 0xc;
  pcVar1 = Translate(s_ETRSThe_terrain_layer_version_on_3623d230,4);
  ThrowF_t(pcVar1,iVar2,uVar3);
  return;
}

