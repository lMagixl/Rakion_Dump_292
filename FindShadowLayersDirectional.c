
/* public: void __thiscall CLightSource::FindShadowLayersDirectional(int) */

void __thiscall CLightSource::FindShadowLayersDirectional(CLightSource *this,int param_1)

{
  CShadowMap *this_00;
  uint uVar1;
  bool bVar2;
  int iVar3;
  CBrushPolygon *pCVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  CBrushShadowLayer *this_01;
  void *this_02;
  int iVar8;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1489e0  1645  ?FindShadowLayersDirectional@CLightSource@@QAEXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219a9d;
  local_c = ExceptionList;
  piVar5 = *(int **)this;
  ExceptionList = &local_c;
  while (piVar7 = piVar5, piVar5 = (int *)*piVar7, piVar5 != (int *)0x0) {
    this_00 = (CShadowMap *)piVar7[2];
    if ((param_1 == 0) || ((*(uint *)(this_00 + -8) & 0x100) != 0)) {
      uVar1 = *(uint *)(this_00 + -8);
      if (((uVar1 & 0x1010000) == 0) ||
         ((((uVar1 & 0x400000) != 0 && ((uVar1 & 0x8020) == 0)) || ((~(uVar1 >> 0xe) & 1) == 0)))) {
        CShadowMap::Invalidate(this_00,*(uint *)(this + 0x1c) & 0x80);
        this_01 = (CBrushShadowLayer *)(piVar7 + -3);
        if (this_01 != (CBrushShadowLayer *)0x0) {
          CBrushShadowLayer::~CBrushShadowLayer(this_01);
          operator_delete(this_01);
        }
      }
      else {
        *(uint *)(this_00 + -8) = uVar1 | 0x2000000;
        UpdateLayer(this,(CBrushShadowLayer *)(piVar7 + -3));
      }
    }
  }
  this_02 = (void *)(*(int *)(*(int *)(this + 0xc) + 0xa8) + 0x15c);
  local_24 = 0;
  local_4 = 0;
  iVar3 = FUN_360caf20((int)this_02);
  if (0 < iVar3) {
    do {
      iVar3 = FUN_360cafb0(this_02,local_24);
      if (*(int *)(iVar3 + 4) == 4) {
        iVar3 = FUN_360cafb0(this_02,local_24);
        piVar5 = *(int **)(*(int *)(iVar3 + 0x7c) + 0x674);
        while (*piVar5 != 0) {
          piVar7 = piVar5 + -6;
          iVar6 = 0;
          iVar3 = FUN_36043600((int)piVar7);
          if (0 < iVar3) {
            do {
              iVar3 = FUN_36043710(piVar7,iVar6);
              iVar8 = 0;
              local_4 = CONCAT31(local_4._1_3_,2);
              if (0 < *(int *)(iVar3 + 0x18)) {
                do {
                  pCVar4 = (CBrushPolygon *)(iVar8 * 0x1d0 + *(int *)(iVar3 + 0x1c));
                  if ((((param_1 == 0) || ((*(uint *)(pCVar4 + 200) & 0x100) != 0)) &&
                      (uVar1 = *(uint *)(pCVar4 + 200), (uVar1 & 0x2000000) == 0)) &&
                     ((uVar1 & 0x1010000) != 0)) {
                    if (((uVar1 & 0x400000) == 0) || ((uVar1 & 0x8020) != 0)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if ((!bVar2) && ((~(uVar1 >> 0xe) & 1) != 0)) {
                      AddLayer(this,pCVar4);
                    }
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(iVar3 + 0x18));
              }
              iVar6 = iVar6 + 1;
              iVar3 = FUN_36043600((int)piVar7);
            } while (iVar6 < iVar3);
          }
          piVar5 = (int *)*piVar5;
          local_4 = local_4 & 0xffffff00;
        }
      }
      local_24 = local_24 + 1;
      iVar3 = FUN_360caf20((int)this_02);
    } while (local_24 < iVar3);
  }
  for (piVar5 = *(int **)this; *piVar5 != 0; piVar5 = (int *)*piVar5) {
    *(uint *)(piVar5[2] + -8) = *(uint *)(piVar5[2] + -8) & 0xfdffffff;
  }
  ExceptionList = local_c;
  return;
}

