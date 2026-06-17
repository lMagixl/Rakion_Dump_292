
undefined4 * __thiscall FUN_36043eb0(void *this,void *param_1)

{
  int iVar1;
  CBrushSector *this_00;
  CBrushSector *pCVar2;
  int iVar3;
  
  FUN_36043c40(this);
  iVar1 = FUN_36043600((int)param_1);
  if (iVar1 != 0) {
    this_00 = (CBrushSector *)FUN_36043bf0(this,iVar1);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        pCVar2 = (CBrushSector *)FUN_36043710(param_1,iVar3);
        CBrushSector::operator=(this_00,pCVar2);
        iVar3 = iVar3 + 1;
        this_00 = this_00 + 0xc0;
      } while (iVar3 < iVar1);
    }
  }
  return this;
}

