
/* long __cdecl TRL_SetLayerIndex(class CTerrain *,long,long) */

long __cdecl TRL_SetLayerIndex(CTerrain *param_1,long param_2,long param_3)

{
  int *this;
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x17ad40  3730  ?TRL_SetLayerIndex@@YAJPAVCTerrain@@JJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a9ee;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x2c);
  this = (int *)(iVar3 + 0x108);
  ExceptionList = &local_c;
  iVar1 = FUN_36172d20(this);
  if ((-1 < param_2) && (param_2 < iVar1)) {
    if ((param_2 == 0) && (iVar1 == 1)) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_2 != param_3) {
      local_10 = *(undefined4 **)(iVar3 + 0x10c);
      local_14 = *this;
      local_4 = 0;
      *(undefined4 *)(iVar3 + 0x10c) = 0;
      *this = 0;
      FUN_3617aed0(this,iVar1);
      iVar3 = 0;
      puVar4 = local_10;
      if (0 < iVar1) {
        do {
          lVar2 = iVar3;
          if ((((param_2 <= iVar3) || (param_3 <= iVar3)) &&
              ((iVar3 <= param_2 || (iVar3 <= param_3)))) &&
             ((lVar2 = param_3, iVar3 != param_2 && (lVar2 = iVar3 + -1, param_3 <= param_2)))) {
            lVar2 = iVar3 + 1;
          }
          FUN_36179be0((byte *)param_1,lVar2,puVar4);
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 0x25;
        } while (iVar3 < iVar1);
      }
      if (local_14 != 0) {
        if (local_10 != (undefined4 *)0x0) {
          _eh_vector_destructor_iterator_(local_10,0x94,local_10[-1],CTerrainLayer::~CTerrainLayer);
          operator_delete__(local_10 + -1);
        }
        local_14 = 0;
        local_10 = (undefined4 *)0x0;
      }
      FUN_361768e0((int)param_1);
      local_4 = 0xffffffff;
      if ((local_14 != 0) && (local_10 != (undefined4 *)0x0)) {
        _eh_vector_destructor_iterator_(local_10,0x94,local_10[-1],CTerrainLayer::~CTerrainLayer);
        operator_delete__(local_10 + -1);
      }
      ExceptionList = local_c;
      return param_3;
    }
  }
  ExceptionList = local_c;
  return param_2;
}

