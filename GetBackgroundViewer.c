
/* public: class CEntity * __thiscall CWorld::GetBackgroundViewer(void) */

CEntity * __thiscall CWorld::GetBackgroundViewer(CWorld *this)

{
  CEntity *pCVar1;
  CEntity *this_00;
  
                    /* 0xc82c0  1719  ?GetBackgroundViewer@CWorld@@QAEPAVCEntity@@XZ */
  this_00 = *(CEntity **)(this + 0x9c);
  if ((this_00 != (CEntity *)0x0) && (((byte)this_00[0x10] & 4) != 0)) {
    if (this_00 != (CEntity *)0x0) {
      pCVar1 = this_00 + 0x18;
      *(int *)pCVar1 = *(int *)pCVar1 + -1;
      if (*(int *)pCVar1 == 0) {
        CEntity::DeleteSelf(this_00);
      }
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  return *(CEntity **)(this + 0x9c);
}

