
/* public: void __thiscall CModelInstance::DeleteAllChildren(int) */

void __thiscall CModelInstance::DeleteAllChildren(CModelInstance *this,int param_1)

{
  int iVar1;
  CModelInstance *this_00;
  int iVar2;
  
                    /* 0x15f280  1459  ?DeleteAllChildren@CModelInstance@@QAEXH@Z */
  iVar1 = FUN_36036010((int)(this + 0x4c));
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      this_00 = (CModelInstance *)FUN_36036020(this + 0x4c,iVar2);
      if (param_1 != 0) {
        RemoveAllChildren(this_00,param_1);
      }
      DeleteChild(this,this_00);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

