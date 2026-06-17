
/* void __cdecl TRS_SetTerrainPlacement(class CPlacement3D const &) */

void __cdecl TRS_SetTerrainPlacement(CPlacement3D *param_1)

{
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x183190  3740  ?TRS_SetTerrainPlacement@@YAXABVCPlacement3D@@@Z */
  MakeRotationMatrixFast((Matrix<float,3,3> *)&local_54,(Vector<float,3> *)(param_1 + 0xc));
  local_30 = local_54;
  local_24 = *(undefined4 *)param_1;
  local_2c = local_50;
  local_28 = local_4c;
  local_18 = local_40;
  local_20 = local_48;
  local_14 = *(undefined4 *)(param_1 + 4);
  local_1c = local_44;
  local_c = local_38;
  local_10 = local_3c;
  local_4 = *(undefined4 *)(param_1 + 8);
  local_8 = local_34;
  TRS_SetTerrainPlacement(&local_30);
  return;
}

