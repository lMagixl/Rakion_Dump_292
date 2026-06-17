
/* public: virtual void __thiscall CSimpleProjection3D::PreClip(class Vector<float,3> const &,class
   Vector<float,3> &)const  */

void __thiscall
CSimpleProjection3D::PreClip
          (CSimpleProjection3D *this,Vector<float,3> *param_1,Vector<float,3> *param_2)

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
  
                    /* 0x5c3b0  2792  ?PreClip@CSimpleProjection3D@@UBEXABV?$Vector@M$02@@AAV2@@Z */
  fVar1 = *(float *)(this + 0xbc);
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(this + 0xc0);
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(this + 0xc4);
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(this + 200);
  fVar8 = *(float *)param_1;
  fVar9 = *(float *)(this + 0xcc);
  fVar10 = *(float *)(param_1 + 4);
  fVar11 = *(float *)(this + 0xd0);
  fVar12 = *(float *)(param_1 + 8);
  fVar13 = *(float *)(this + 0x120);
  fVar14 = *(float *)(this + 0x124);
  *(float *)param_2 =
       *(float *)(this + 0xb0) * *(float *)param_1 +
       *(float *)(this + 0xb8) * *(float *)(param_1 + 8) +
       *(float *)(this + 0xb4) * *(float *)(param_1 + 4) + *(float *)(this + 0x11c);
  *(float *)(param_2 + 4) = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar13;
  *(float *)(param_2 + 8) = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8 + fVar14;
  return;
}

