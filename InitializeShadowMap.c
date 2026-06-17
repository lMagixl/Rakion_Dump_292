
/* public: void __thiscall CBrushPolygon::InitializeShadowMap(void) */

void __thiscall CBrushPolygon::InitializeShadowMap(CBrushPolygon *this)

{
  CBrushPolygon CVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int local_68;
  int local_64;
  int local_58;
  int local_50;
  int local_4c;
  Vector<float,3> local_48 [4];
  int local_44;
  Vector<float,3> local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x141720  2339  ?InitializeShadowMap@CBrushPolygon@@QAEXXZ */
  puStack_10 = &LAB_36219998;
  local_14 = ExceptionList;
  local_30 = 0x3f800000;
  ExceptionList = &local_14;
  *(undefined4 *)(this + 0x170) = 0x3f800000;
  local_2c = 0;
  *(undefined4 *)(this + 0x174) = 0;
  local_28 = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0x3f800000;
  local_20 = 0;
  *(undefined4 *)(this + 0x180) = 0;
  local_1c = 0;
  *(undefined4 *)(this + 0x184) = 0;
  iVar6 = 0x7fffffff;
  iVar8 = -0x80000000;
  iVar4 = 0x7fffffff;
  local_24 = -0x80000000;
  local_58 = 0;
  local_c = 0;
  iVar5 = iVar8;
  if (0 < *(int *)(this + 4)) {
    do {
      CBrushPolygonEdge::GetVertexCoordinatesRelative
                ((CBrushPolygonEdge *)(*(int *)(this + 8) + local_58 * 8),local_48,local_3c);
      CMappingDefinition::GetTextureCoordinates
                ((CMappingDefinition *)(this + 0x170),(CMappingVectors *)(**(int **)this + 0x10),
                 local_48,(Vector<long,2> *)&local_50);
      if (local_50 < iVar6) {
        iVar6 = local_50;
      }
      iVar8 = local_50;
      if (local_50 <= iVar5) {
        iVar8 = iVar5;
      }
      if (local_4c < iVar4) {
        iVar4 = local_4c;
      }
      iVar7 = local_4c;
      if (local_4c <= local_24) {
        iVar7 = local_24;
      }
      local_58 = local_58 + 1;
      iVar5 = iVar8;
      local_24 = iVar7;
    } while (local_58 < *(int *)(this + 4));
  }
  iVar8 = iVar8 - iVar6;
  CVar1 = this[0x18d];
  local_44 = local_24 - iVar4;
  local_c = 0xffffffff;
  bVar3 = (byte)((char)CVar1 + 9);
  local_68 = local_44;
  local_64 = iVar8;
  if ((*(uint *)(this + 200) & 0x40000) != 0) {
    local_68 = 2 << (bVar3 & 0x1f);
    local_64 = local_68 + iVar8;
    local_68 = local_68 + local_44;
  }
  local_50 = iVar6;
  local_4c = iVar4;
  ceil((double)((float)local_64 * 1.0));
  uVar10 = FUN_361bfd6c();
  iVar5 = (1 << ((byte)uVar10 & 0x1f)) >> (bVar3 & 0x1f);
  ceil((double)((float)local_68 * 1.0));
  uVar10 = FUN_361bfd6c();
  local_68 = (1 << ((byte)uVar10 & 0x1f)) >> (bVar3 & 0x1f);
  lVar2 = ClampTextureSize(0x10000,*(long *)(_pGfx + 0xad4),iVar5,local_68);
  iVar5 = iVar5 >> ((byte)lVar2 & 0x1f);
  if (iVar5 < 1) {
    iVar5 = 1;
  }
  local_68 = local_68 >> ((byte)lVar2 & 0x1f);
  if (local_68 < 1) {
    local_68 = 1;
  }
  iVar7 = (char)CVar1 + 9 + lVar2;
  bVar3 = (byte)iVar7;
  if ((*(uint *)(this + 200) & 0x40000) != 0) {
    iVar4 = 1 << (bVar3 & 0x1f);
    iVar6 = local_50 - iVar4;
    iVar4 = local_4c - iVar4;
  }
  iVar9 = (iVar8 >> (bVar3 & 0x1f)) + 3;
  iVar8 = iVar5;
  if (iVar9 <= iVar5) {
    iVar8 = iVar9;
  }
  *(int *)(this + 0x120) = iVar8;
  iVar8 = (local_44 >> (bVar3 & 0x1f)) + 3;
  if (local_68 < iVar8) {
    iVar8 = local_68;
  }
  *(int *)(this + 0x124) = iVar8;
  CShadowMap::Initialize
            ((CShadowMap *)(this + 0xd0),iVar7,-iVar6,-iVar4,iVar5 << (bVar3 & 0x1f),
             local_68 << (bVar3 & 0x1f));
  if (*(void **)(this + 0x16c) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x16c));
    *(undefined4 *)(this + 0x16c) = 0;
  }
  DiscardShadingInfos(this);
  ExceptionList = local_14;
  return;
}

