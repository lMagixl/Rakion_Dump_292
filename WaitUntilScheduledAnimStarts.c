
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CMovableModelEntity::WaitUntilScheduledAnimStarts(class CEntityEvent const
   &) */

int __thiscall
CMovableModelEntity::WaitUntilScheduledAnimStarts(CMovableModelEntity *this,CEntityEvent *param_1)

{
  float fVar1;
  CEntityEvent *pCVar2;
  bool bVar3;
  long lVar4;
  EInternal local_1c [8];
  EBegin local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1b48d0  3943
                       ?WaitUntilScheduledAnimStarts@CMovableModelEntity@@QAEHABVCEntityEvent@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c115;
  local_c = ExceptionList;
  fVar1 = *(float *)(*(int *)(this + 0x7c) + 4) - *(float *)(_pTimer + 0xc);
  bVar3 = _DAT_3622376c < fVar1;
  if (bVar3) {
    ExceptionList = &local_c;
    CRationalEntity::SetTimerAfter((CRationalEntity *)this,CTimer::TickQuantum + fVar1);
    pCVar2 = (CEntityEvent *)EBegin::EBegin(local_14);
    lVar4 = 0x20002;
  }
  else {
    ExceptionList = &local_c;
    pCVar2 = (CEntityEvent *)EInternal::EInternal(local_1c);
    lVar4 = 0x20004;
  }
  local_4 = (uint)bVar3;
  CRationalEntity::Jump((CRationalEntity *)this,0x20001,lVar4,0,pCVar2);
  ExceptionList = local_c;
  return 1;
}

