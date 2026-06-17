
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CLiveEntity::ReceiveDamage(class CEntity *,enum
   DamageType,float,class Vector<float,3> const &,class Vector<float,3> const &) */

void __thiscall
CLiveEntity::ReceiveDamage
          (CLiveEntity *this,CEntity *param_1,DamageType param_2,float param_3,
          Vector<float,3> *param_4,Vector<float,3> *param_5)

{
  int iVar1;
  undefined **local_6c [2];
  CEntity *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  DamageType local_44;
  EDeath local_40 [8];
  EDamage local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12dd70  3061
                       ?ReceiveDamage@CLiveEntity@@UAEXPAVCEntity@@W4DamageType@@MABV?$Vector@M$02@@2@Z
                        */
  puStack_8 = &LAB_36218c2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (this != (CLiveEntity *)0x0) {
    ExceptionList = &local_c;
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  }
  local_4 = 0;
  *(float *)(this + 0x100) = *(float *)(this + 0x100) - param_3;
  EDamage::EDamage((EDamage *)local_6c);
  local_4._0_1_ = 1;
  if (param_1 != (CEntity *)0x0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  if ((local_64 != (CEntity *)0x0) &&
     (iVar1 = *(int *)(local_64 + 0x18), *(int *)(local_64 + 0x18) = iVar1 + -1, iVar1 + -1 == 0)) {
    CEntity::DeleteSelf(local_64);
  }
  local_60 = *(undefined4 *)param_5;
  local_5c = *(undefined4 *)(param_5 + 4);
  local_58 = *(undefined4 *)(param_5 + 8);
  local_54 = *(undefined4 *)param_4;
  local_50 = *(undefined4 *)(param_4 + 4);
  local_4c = *(undefined4 *)(param_4 + 8);
  local_64 = param_1;
  local_48 = param_3;
  local_44 = param_2;
  CEntity::SendEvent((CEntity *)this,(CEntityEvent *)local_6c,0);
  if (*(float *)(this + 0x100) < _DAT_3622376c != (*(float *)(this + 0x100) == _DAT_3622376c)) {
    EDeath::EDeath(local_40);
    local_4._0_1_ = 2;
    EDamage::operator=(local_38,(EDamage *)local_6c);
    CEntity::SendEvent((CEntity *)this,(CEntityEvent *)local_40,0);
    local_4._0_1_ = 1;
    EDeath::~EDeath(local_40);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if ((local_64 != (CEntity *)0x0) &&
     (iVar1 = *(int *)(local_64 + 0x18), *(int *)(local_64 + 0x18) = iVar1 + -1, iVar1 + -1 == 0)) {
    CEntity::DeleteSelf(local_64);
  }
  local_6c[0] = &CEntityEvent::_vftable_;
  iVar1 = *(int *)(this + 0x18);
  local_4 = 0xffffffff;
  *(int *)(this + 0x18) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    CEntity::DeleteSelf((CEntity *)this);
  }
  ExceptionList = local_c;
  return;
}

