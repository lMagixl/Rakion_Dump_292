
undefined4 * __thiscall FUN_36056150(void *this,void *param_1)

{
  int iVar1;
  CObjectPolygon *this_00;
  CObjectPolygon *pCVar2;
  int iVar3;
  
  FUN_360560c0(this);
  iVar1 = FUN_3604a760((int)param_1);
  if (iVar1 != 0) {
    this_00 = (CObjectPolygon *)FUN_3604d100(this,iVar1);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        pCVar2 = (CObjectPolygon *)FUN_3604a750(param_1,iVar3);
        CObjectPolygon::operator=(this_00,pCVar2);
        iVar3 = iVar3 + 1;
        this_00 = this_00 + 0xd0;
      } while (iVar3 < iVar1);
    }
  }
  return this;
}

