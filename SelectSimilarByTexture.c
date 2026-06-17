
/* public: void __thiscall CBrushPolygon::SelectSimilarByTexture(class CSelection<class
   CBrushPolygon,256> &,long) */

void __thiscall
CBrushPolygon::SelectSimilarByTexture
          (CBrushPolygon *this,CSelection<class_CBrushPolygon,256> *param_1,long param_2)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  CBrushPolygon *pCVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x13c020  3227
                       ?SelectSimilarByTexture@CBrushPolygon@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@J@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362195fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(uint *)(this + 200) & 0x100) == 0) {
    ExceptionList = &local_c;
    FUN_360ccda0(param_1,(int)this);
  }
  this_00 = *(void **)(*(int *)(this + 0x1ac) + 0x38);
  local_1c = 0;
  local_4 = 0;
  iVar2 = FUN_36043600((int)this_00);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_36043710(this_00,local_1c);
      iVar5 = 0;
      local_4._0_1_ = 1;
      if (0 < *(int *)(iVar2 + 0x18)) {
        do {
          iVar6 = iVar5 * 0x1d0;
          uVar1 = *(uint *)(*(int *)(iVar2 + 0x1c) + 200 + iVar6);
          pCVar4 = (CBrushPolygon *)(*(int *)(iVar2 + 0x1c) + iVar6);
          if (((((uVar1 & 0x400000) == 0) || ((uVar1 & 0x8020) != 0)) && ((uVar1 & 0x100) == 0)) &&
             ((*(int *)(pCVar4 + param_2 * 0x38 + 0x30) == *(int *)(this + param_2 * 0x38 + 0x30) &&
              (iVar3 = TouchesInAnySector(this,pCVar4), iVar3 != 0)))) {
            SelectSimilarByTexture
                      ((CBrushPolygon *)(*(int *)(iVar2 + 0x1c) + iVar6),param_1,param_2);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar2 + 0x18));
      }
      local_1c = local_1c + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      iVar2 = FUN_36043600((int)this_00);
    } while (local_1c < iVar2);
  }
  ExceptionList = local_c;
  return;
}

