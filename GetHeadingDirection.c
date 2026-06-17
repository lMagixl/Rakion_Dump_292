
/* public: void __thiscall CMovableEntity::GetHeadingDirection(float,class Vector<float,3> &) */

void __thiscall
CMovableEntity::GetHeadingDirection(CMovableEntity *this,float param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x1ac660  1908
                       ?GetHeadingDirection@CMovableEntity@@QAEXMAAV?$Vector@M$02@@@Z */
  fVar1 = *(float *)(this + 0x54);
  fVar2 = *(float *)(this + 0x60);
  fVar3 = *(float *)(this + 0x6c);
  fVar4 = *(float *)(this + 0x5c);
  fVar5 = *(float *)(this + 0x68);
  fVar6 = *(float *)(this + 0x74);
  fVar7 = Cos(param_1);
  fVar8 = Sin(param_1);
  *(float *)param_2 = -fVar1 * fVar8 - fVar4 * fVar7;
  *(float *)(param_2 + 4) = -fVar2 * fVar8 - fVar5 * fVar7;
  *(float *)(param_2 + 8) = -fVar3 * fVar8 - fVar6 * fVar7;
  return;
}

