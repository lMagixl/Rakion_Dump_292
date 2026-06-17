
/* public: void __thiscall CBrushPolygon::SelectSimilarByColor(class CSelection<class
   CBrushPolygon,256> &) */

void __thiscall
CBrushPolygon::SelectSimilarByColor
          (CBrushPolygon *this,CSelection<class_CBrushPolygon,256> *param_1)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  CBrushPolygon *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x13bf00  3226
                       ?SelectSimilarByColor@CBrushPolygon@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362195e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(uint *)(this + 200) & 0x100) == 0) {
    ExceptionList = &local_c;
    FUN_360ccda0(param_1,(int)this);
  }
  this_00 = *(void **)(*(int *)(this + 0x1ac) + 0x38);
  iVar5 = 0;
  local_4 = 0;
  iVar2 = FUN_36043600((int)this_00);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_36043710(this_00,iVar5);
      iVar6 = 0;
      local_4._0_1_ = 1;
      if (0 < *(int *)(iVar2 + 0x18)) {
        do {
          iVar7 = iVar6 * 0x1d0;
          uVar1 = *(uint *)(*(int *)(iVar2 + 0x1c) + 200 + iVar7);
          pCVar4 = (CBrushPolygon *)(*(int *)(iVar2 + 0x1c) + iVar7);
          if (((((uVar1 & 0x400000) == 0) || ((uVar1 & 0x8020) != 0)) && ((uVar1 & 0x100) == 0)) &&
             ((*(int *)(pCVar4 + 0xc4) == *(int *)(this + 0xc4) &&
              (iVar3 = TouchesInAnySector(this,pCVar4), iVar3 != 0)))) {
            SelectSimilarByColor((CBrushPolygon *)(*(int *)(iVar2 + 0x1c) + iVar7),param_1);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar2 + 0x18));
      }
      iVar5 = iVar5 + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      iVar2 = FUN_36043600((int)this_00);
    } while (iVar5 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

