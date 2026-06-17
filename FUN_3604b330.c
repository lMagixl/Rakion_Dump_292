
undefined4 * __thiscall FUN_3604b330(void *this,void *param_1)

{
  int iVar1;
  CObjectSector *this_00;
  CObjectSector *pCVar2;
  int iVar3;
  
  FUN_3604b2a0(this);
  iVar1 = FUN_3604a7d0((int)param_1);
  if (iVar1 != 0) {
    this_00 = (CObjectSector *)FUN_3604b080(this,iVar1);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        pCVar2 = (CObjectSector *)FUN_3604a790(param_1,iVar3);
        CObjectSector::operator=(this_00,pCVar2);
        iVar3 = iVar3 + 1;
        this_00 = this_00 + 0x90;
      } while (iVar3 < iVar1);
    }
  }
  return this;
}

