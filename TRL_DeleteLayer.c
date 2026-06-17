
/* void __cdecl TRL_DeleteLayer(class CTerrain *,long,int) */

void __cdecl TRL_DeleteLayer(CTerrain *param_1,long param_2,int param_3)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x17ac10  3721  ?TRL_DeleteLayer@@YAXPAVCTerrain@@JH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a9dc;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x2c);
  this = (int *)(iVar3 + 0x108);
  ExceptionList = &local_c;
  iVar1 = FUN_36172d20(this);
  local_14 = *this;
  puVar2 = *(undefined4 **)(iVar3 + 0x10c);
  local_4 = 0;
  *(undefined4 *)(iVar3 + 0x10c) = 0;
  *this = 0;
  FUN_3617aed0(this,iVar1 + -1);
  iVar4 = 0;
  iVar3 = 0;
  local_18 = puVar2;
  if (0 < iVar1) {
    do {
      if (iVar3 != param_2) {
        FUN_36179be0((byte *)param_1,iVar4,local_18);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      local_18 = local_18 + 0x25;
    } while (iVar3 < iVar1);
  }
  if (local_14 != 0) {
    if (puVar2 != (undefined4 *)0x0) {
      _eh_vector_destructor_iterator_(puVar2,0x94,puVar2[-1],CTerrainLayer::~CTerrainLayer);
      operator_delete__(puVar2 + -1);
    }
    puVar2 = (undefined4 *)0x0;
    local_14 = 0;
  }
  if (param_3 == 0) {
    FUN_361768e0((int)param_1);
  }
  local_4 = 0xffffffff;
  if ((local_14 != 0) && (puVar2 != (undefined4 *)0x0)) {
    _eh_vector_destructor_iterator_(puVar2,0x94,puVar2[-1],CTerrainLayer::~CTerrainLayer);
    operator_delete__(puVar2 + -1);
  }
  ExceptionList = local_c;
  return;
}

