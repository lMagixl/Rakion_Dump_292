
/* public: virtual class CEntityEvent * __thiscall EDeath::MakeCopy(void) */

CEntityEvent * __thiscall EDeath::MakeCopy(EDeath *this)

{
  CEntityEvent *pCVar1;
  
                    /* 0x1aa240  2591  ?MakeCopy@EDeath@@UAEPAVCEntityEvent@@XZ */
  pCVar1 = (CEntityEvent *)FUN_361bf99c(0x34);
  if (pCVar1 != (CEntityEvent *)0x0) {
    *(undefined ***)pCVar1 = &CEntityEvent::_vftable_;
    *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(this + 4);
    *(undefined ***)pCVar1 = &_vftable_;
    EDamage::EDamage((EDamage *)(pCVar1 + 8),(EDamage *)(this + 8));
    return pCVar1;
  }
  return (CEntityEvent *)0x0;
}

