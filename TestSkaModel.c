
/* public: void __thiscall CCastRay::TestSkaModel(class CEntity *) */

void __thiscall CCastRay::TestSkaModel(CCastRay *this,CEntity *param_1)

{
  CEntity CVar1;
  CModelInstance *pCVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  
                    /* 0xdda30  3811  ?TestSkaModel@CCastRay@@QAEXPAVCEntity@@@Z */
  if ((*(uint *)(param_1 + 0x10) & 0x200000) != 0) {
    return;
  }
  if (((*(int *)(this + 0x5c) != 0) && (*(int *)(this + 0x28) != 0)) &&
     (iVar4 = IsDerivedFromClass(param_1,s_I_MovableEntity_362327f2 + 2), iVar4 != 0)) {
    iVar4 = IsDerivedFromClass(param_1,s_Player_36232804);
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
      bVar3 = FUN_360de700(iVar4 + 0x1ac + (uint)(byte)param_1[0x264] * 0x37c);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        return;
      }
    }
    if (param_1[0x264] == *(CEntity *)(*(int *)(this + 0x28) + 0x264)) {
      return;
    }
    iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    if (*(char *)(iVar4 + 0x1a3) != '\x02') {
      CVar1 = param_1[0x264];
      if (((byte)CVar1 < 10) && (*(byte *)(*(int *)(this + 0x28) + 0x264) < 10)) {
        return;
      }
      if (((9 < (byte)CVar1) && ((byte)CVar1 < 0x14)) &&
         ((9 < *(byte *)(*(int *)(this + 0x28) + 0x264) &&
          (*(byte *)(*(int *)(this + 0x28) + 0x264) < 0x14)))) {
        return;
      }
    }
  }
  iVar4 = *(int *)(this + 0x6c);
  pCVar2 = *(CModelInstance **)(param_1 + 0x7c);
  if ((iVar4 == 1) || (iVar4 == 0)) {
    TestSkaModelSimple(this,param_1,pCVar2);
  }
  else {
    if (iVar4 == 2) {
      TestSkaModelCollisionBox(this,param_1,pCVar2);
      return;
    }
    if (iVar4 == 3) {
      TestSkaModelCollisionSphere(this,param_1,pCVar2);
      return;
    }
    if ((iVar4 == 4) || (iVar4 == 5)) {
      TestSkaModelFull(this,param_1,pCVar2);
      return;
    }
  }
  return;
}

