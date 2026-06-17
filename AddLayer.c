
/* public: void __thiscall CLightSource::AddLayer(class CBrushPolygon &) */

void __thiscall CLightSource::AddLayer(CLightSource *this,CBrushPolygon *param_1)

{
  CBrushShadowLayer *this_00;
  CBrushShadowLayer *pCVar1;
  CLightRectangle local_28 [8];
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x148240  986  ?AddLayer@CLightSource@@QAEXAAVCBrushPolygon@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219a7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CBrushShadowMap::FindLightRectangle((CBrushShadowMap *)(param_1 + 0xd0),this,local_28);
  pCVar1 = (CBrushShadowLayer *)0x0;
  if ((local_20 != 0) && (local_1c != 0)) {
    this_00 = (CBrushShadowLayer *)FUN_361bf99c(0x38);
    local_4 = 0;
    if (this_00 != (CBrushShadowLayer *)0x0) {
      pCVar1 = (CBrushShadowLayer *)CBrushShadowLayer::CBrushShadowLayer(this_00);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(pCVar1 + 0x34) = 0x12345678;
    *(CLightSource **)(pCVar1 + 0x18) = this;
    CListHead::AddTail((CListHead *)this,(CListNode *)(pCVar1 + 0xc));
    *(CBrushShadowMap **)(pCVar1 + 0x14) = (CBrushShadowMap *)(param_1 + 0xd0);
    if (((byte)this[0x1c] & 8) == 0) {
      CListHead::AddHead((CListHead *)(param_1 + 0x160),(CListNode *)(pCVar1 + 4));
    }
    else {
      CListHead::AddTail((CListHead *)(param_1 + 0x160),(CListNode *)(pCVar1 + 4));
    }
    *(undefined4 *)(pCVar1 + 0x30) = 0;
    *(undefined4 *)pCVar1 = 0;
    SetLayerParameters(this,pCVar1,param_1,local_28);
  }
  ExceptionList = local_c;
  return;
}

