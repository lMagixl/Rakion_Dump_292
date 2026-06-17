
/* public: void __thiscall CMovableEntity::GetPitchDirection(float,class Vector<float,3> &) */

void __thiscall
CMovableEntity::GetPitchDirection(CMovableEntity *this,float param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x1ac7c0  2037  ?GetPitchDirection@CMovableEntity@@QAEXMAAV?$Vector@M$02@@@Z
                        */
  fVar1 = *(float *)(this + 0x58);
  fVar2 = *(float *)(this + 100);
  fVar3 = *(float *)(this + 0x70);
  fVar4 = *(float *)(this + 0x5c);
  fVar5 = *(float *)(this + 0x68);
  fVar6 = *(float *)(this + 0x74);
  fVar7 = Sin(param_1);
  fVar8 = Cos(param_1);
  *(float *)param_2 = -fVar4 * fVar8 + fVar1 * fVar7;
  *(float *)(param_2 + 4) = -fVar5 * fVar8 + fVar2 * fVar7;
  *(float *)(param_2 + 8) = -fVar6 * fVar8 + fVar3 * fVar7;
  return;
}

