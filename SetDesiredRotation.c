
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::SetDesiredRotation(class Vector<float,3> const &) */

void __thiscall CMovableEntity::SetDesiredRotation(CMovableEntity *this,Vector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
                    /* 0x1aae80  3440  ?SetDesiredRotation@CMovableEntity@@QAEXABV?$Vector@M$02@@@Z
                        */
  fVar1 = *(float *)(this + 300);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(this + 0x130);
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(this + 0x134);
  fVar6 = *(float *)(param_1 + 8);
  if (*(int *)(_pNetwork + 0x14) != 0) {
    iVar7 = (**(code **)(*(int *)this + 0x90))();
    if (iVar7 != 0) {
      iVar7 = (**(code **)(*(int *)this + 0x70))();
      if ((iVar7 == 0) &&
         (_DAT_362a6050 <= ABS(fVar1 - fVar2) + ABS(fVar5 - fVar6) + ABS(fVar3 - fVar4))) {
        CEntityMessage::WritePlacementNotify
                  ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(this + 0x1c),'\x01');
        CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
      }
    }
  }
  *(undefined4 *)(this + 300) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 8);
  AddToMovers(this);
  return;
}

