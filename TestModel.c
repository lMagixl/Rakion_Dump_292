
/* public: void __thiscall CCastRay::TestModel(class CEntity *) */

void __thiscall CCastRay::TestModel(CCastRay *this,CEntity *param_1)

{
  int iVar1;
  CModelObject *pCVar2;
  
                    /* 0xdcbc0  3807  ?TestModel@CCastRay@@QAEXPAVCEntity@@@Z */
  if ((*(uint *)(param_1 + 0x10) & 0x200000) == 0) {
    pCVar2 = DAT_362fcbf4;
    if ((*(int *)(param_1 + 4) != 4) && (*(int *)(param_1 + 4) != 8)) {
      pCVar2 = *(CModelObject **)(param_1 + 0x7c);
    }
    if (pCVar2 != (CModelObject *)0x0) {
      iVar1 = *(int *)(this + 0x6c);
      if ((iVar1 == 1) || (iVar1 == 0)) {
        TestModelSimple(this,param_1,pCVar2);
      }
      else {
        if ((iVar1 == 2) || (iVar1 == 3)) {
          TestModelCollisionBox(this,param_1);
          return;
        }
        if ((iVar1 == 4) || (iVar1 == 5)) {
          TestModelFull(this,param_1,pCVar2);
          return;
        }
      }
    }
  }
  return;
}

