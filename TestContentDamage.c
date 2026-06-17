
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::TestContentDamage(class CContentType &,float) */

void __thiscall
CMovableEntity::TestContentDamage(CMovableEntity *this,CContentType *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  CEntity *pCVar3;
  DamageType DVar4;
  float fVar5;
  Vector<float,3> *pVVar6;
  Vector<float,3> *pVVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  EDamageType local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1ac920  3804  ?TestContentDamage@CMovableEntity@@QAEXAAVCContentType@@M@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bee8;
  local_c = ExceptionList;
  if (_DAT_3622376c < *(float *)(param_1 + 0x1c)) {
    fVar1 = *(float *)(_pTimer + 0xc);
    if ((_DAT_3622376c < *(float *)(param_1 + 0x20)) &&
       (CTimer::TickQuantum + *(float *)(param_1 + 0x20) < fVar1 - *(float *)(this + 0x170))) {
      *(float *)(this + 0x170) = fVar1 + *(float *)(param_1 + 0x20);
      return;
    }
    if (*(float *)(param_1 + 0x24) < fVar1 - *(float *)(this + 0x170)) {
      if (((*(uint *)(this + 0x10) & 8) != 0) &&
         (((iVar2 = *(int *)(this + 0xfc), iVar2 == 1 || (iVar2 == 2)) || (iVar2 == 3)))) {
        local_48 = *(undefined4 *)(this + 0x3c);
        local_44 = *(undefined4 *)(this + 0x40);
        local_40 = *(undefined4 *)(this + 0x44);
        if ((float)_DAT_36223438 <=
            SQRT(*(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) +
                 *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                 *(float *)(this + 0x2ec) * *(float *)(this + 0x2ec))) {
          fVar5 = _DAT_36223384 /
                  SQRT(*(float *)(this + 0x2f4) * *(float *)(this + 0x2f4) +
                       *(float *)(this + 0x2f0) * *(float *)(this + 0x2f0) +
                       *(float *)(this + 0x2ec) * *(float *)(this + 0x2ec));
          ExceptionList = &local_c;
          *(float *)(this + 0x2ec) = fVar5 * *(float *)(this + 0x2ec);
          *(float *)(this + 0x2f0) = fVar5 * *(float *)(this + 0x2f0);
          fVar5 = fVar5 * *(float *)(this + 0x2f4);
        }
        else {
          ExceptionList = &local_c;
          *(float *)(this + 0x2ec) = *(float *)(this + 0x2ec) * _DAT_3622376c;
          *(float *)(this + 0x2f0) = *(float *)(this + 0x2f0) * _DAT_3622376c;
          fVar5 = *(float *)(this + 0x2f4) * _DAT_3622376c;
        }
        *(float *)(this + 0x2f4) = fVar5;
        local_3c = -*(float *)(this + 0x2ec);
        local_38 = -*(float *)(this + 0x2f0);
        pVVar7 = (Vector<float,3> *)&local_3c;
        local_34 = -*(float *)(this + 0x2f4);
        pVVar6 = (Vector<float,3> *)&local_48;
        fVar5 = 1.0;
        DVar4 = 0x32;
        pCVar3 = MiscDamageInflictor(this);
        CEntity::InflictDirectDamage
                  ((CEntity *)this,(CEntity *)this,pCVar3,DVar4,fVar5,pVVar6,pVVar7);
        EDamageType::EDamageType(local_30);
        local_24 = local_48;
        local_20 = local_44;
        local_18 = local_3c;
        local_1c = local_40;
        local_14 = local_38;
        local_4 = 0;
        local_28 = 0x32;
        local_10 = local_34;
        CEntity::SendEvent((CEntity *)this,(CEntityEvent *)local_30,0);
      }
      *(float *)(this + 0x170) = fVar1;
    }
  }
  ExceptionList = local_c;
  return;
}

