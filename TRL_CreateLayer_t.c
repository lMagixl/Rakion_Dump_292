
/* WARNING: Removing unreachable block (ram,0x3617abd3) */
/* WARNING: Removing unreachable block (ram,0x3617abd7) */
/* long __cdecl TRL_CreateLayer_t(class CTerrain *,class CTFileName const &) */

long __cdecl TRL_CreateLayer_t(CTerrain *param_1,CTFileName *param_2)

{
  int *this;
  int iVar1;
  CTerrain *pCVar2;
  int iVar3;
  CTerrain *pCVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar4 = param_1;
                    /* 0x17aab0  3720  ?TRL_CreateLayer_t@@YAJPAVCTerrain@@ABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a9ca;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x2c);
  this = (int *)(iVar1 + 0x108);
  ExceptionList = &local_c;
  iVar5 = FUN_36172d20(this);
  pCVar2 = *(CTerrain **)(iVar1 + 0x10c);
  iVar3 = *this;
  local_4 = 0;
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  *this = 0;
  FUN_3617aed0(this,iVar5 + 1);
  iVar8 = 0;
  param_1 = pCVar2;
  if (0 < iVar5) {
    do {
      FUN_36179be0((byte *)pCVar4,iVar8,(undefined4 *)param_1);
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 0x94;
    } while (iVar8 < iVar5);
  }
  if ((iVar3 != 0) && (pCVar2 != (CTerrain *)0x0)) {
    _eh_vector_destructor_iterator_(pCVar2,0x94,*(int *)(pCVar2 + -4),CTerrainLayer::~CTerrainLayer)
    ;
    operator_delete__(pCVar2 + -4);
  }
  iVar3 = *(int *)(iVar5 * 0x94 + *(int *)(iVar1 + 0x10c));
  pvVar6 = AllocMemory(*(int *)(iVar1 + 0x1c) * *(int *)(iVar1 + 0x18));
  *(void **)(iVar3 + 0x30) = pvVar6;
  uVar7 = FUN_36176bb0();
  *(undefined4 *)(iVar3 + 0x38) = uVar7;
  TRL_SetLayerTexture_t(pCVar4,iVar5,param_2);
  TRL_ApplyLayerMatrix(pCVar4,iVar5);
  ExceptionList = local_c;
  return iVar5;
}

