
/* public: void __thiscall CEntity::GetEntityPointFixed(class Vector<float,3> const &,class
   Vector<float,3> &) */

void __thiscall
CEntity::GetEntityPointFixed(CEntity *this,Vector<float,3> *param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
                    /* 0x1286e0  1856  ?GetEntityPointFixed@CEntity@@QAEXABV?$Vector@M$02@@AAV2@@Z
                        */
  fVar1 = *(float *)(this + 0x60);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(this + 100);
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(this + 0x68);
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(this + 0x6c);
  fVar8 = *(float *)param_1;
  fVar9 = *(float *)(this + 0x70);
  fVar10 = *(float *)(param_1 + 4);
  fVar11 = *(float *)(this + 0x74);
  fVar12 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(this + 0x40);
  fVar14 = *(float *)(this + 0x44);
  *(float *)param_2 =
       *(float *)(this + 0x3c) +
       *(float *)(this + 0x54) * *(float *)param_1 +
       *(float *)(this + 0x5c) * *(float *)(param_1 + 8) +
       *(float *)(this + 0x58) * *(float *)(param_1 + 4);
  *(float *)(param_2 + 4) = fVar13 + fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  *(float *)(param_2 + 8) = fVar14 + fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  return;
}

