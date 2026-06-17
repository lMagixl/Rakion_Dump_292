
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::ClientCacheNearPolygons(void) */

void __thiscall CMovableEntity::ClientCacheNearPolygons(CMovableEntity *this)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c [3];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [16];
  uint uStack_1d8;
  int iStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  CNetworkLibrary *pCStack_d4;
  
                    /* 0x1ad600  1318  ?ClientCacheNearPolygons@CMovableEntity@@QAEXXZ */
  local_224 = 3e+38;
  local_218 = -3e+38;
  local_220 = 3e+38;
  local_214 = -3e+38;
  local_21c = 3e+38;
  local_210 = -3e+38;
  if (*(CCollisionInfo **)(this + 0x84) != (CCollisionInfo *)0x0) {
    local_20c[0] = 0.0;
    local_20c[1] = 0.0;
    local_20c[2] = 0.0;
    CCollisionInfo::MakeBoxAtPlacement
              (*(CCollisionInfo **)(this + 0x84),(Vector<float,3> *)local_20c,
               (Matrix<float,3,3> *)(this + 0x54),(AABBox<float,3> *)&local_224);
    iVar2 = (**(code **)(*(int *)this + 0xa4))();
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x1c) & 0x40) == 0)) {
      local_20c[0] = 0.0;
      local_20c[1] = 0.0;
      local_20c[2] = 0.0;
      pfVar3 = (float *)FUN_3605cc10(auStack_200,local_20c,*(float *)(iVar2 + 0x24));
      FUN_360b1850(&local_224,pfVar3);
    }
    FUN_361b3da0(&local_224,_DAT_362a60bc - _DAT_36223384);
    local_224 = local_224 + *(float *)(this + 0x3c);
    local_220 = local_220 + *(float *)(this + 0x40);
    local_21c = local_21c + *(float *)(this + 0x44);
    local_218 = local_218 + *(float *)(this + 0x3c);
    local_214 = local_214 + *(float *)(this + 0x40);
    local_210 = local_210 + *(float *)(this + 0x44);
    *(float *)(this + 0x1d4) = local_224;
    *(float *)(this + 0x1d8) = local_220;
    *(float *)(this + 0x1dc) = local_21c;
    *(float *)(this + 0x1e0) = local_218;
    *(float *)(this + 0x1e4) = local_214;
    *(float *)(this + 0x1e8) = local_210;
    FUN_360cdd50(auStack_1e8,this);
    uVar1 = *(uint *)(this + 0xc);
    uStack_1d8 = uVar1 >> 10 & 0x3ff;
    iStack_1d4 = (uVar1 & 0x3ff) << 10;
    pCStack_d4 = _pNetwork + 0x11e4;
    uStack_1d0 = uVar1 >> 0x14 & 0x3ff;
    iStack_1cc = (uVar1 & 0x3ff) << 0x14;
    FUN_360ceae0((int)auStack_1e8);
  }
  return;
}

