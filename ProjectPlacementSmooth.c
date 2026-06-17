
/* public: void __thiscall CSimpleProjection3D::ProjectPlacementSmooth(class CPlacement3D const
   &,class CPlacement3D &)const  */

void __thiscall
CSimpleProjection3D::ProjectPlacementSmooth
          (CSimpleProjection3D *this,CPlacement3D *param_1,CPlacement3D *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  Matrix<float,3,3> *pMVar5;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  Matrix<float,3,3> local_24 [36];
  
                    /* 0x5c7c0  2866
                       ?ProjectPlacementSmooth@CSimpleProjection3D@@QBEXABVCPlacement3D@@AAV2@@Z */
  local_54 = *(float *)param_1 * *(float *)(this + 0xb0) +
             *(float *)(this + 0xb8) * *(float *)(param_1 + 8) +
             *(float *)(this + 0xb4) * *(float *)(param_1 + 4);
  local_50 = *(float *)(this + 0xc4) * *(float *)(param_1 + 8) +
             *(float *)(this + 0xc0) * *(float *)(param_1 + 4) +
             *(float *)(this + 0xbc) * *(float *)param_1;
  local_4c = *(float *)(this + 0xd0) * *(float *)(param_1 + 8) +
             *(float *)(this + 0xcc) * *(float *)(param_1 + 4) +
             *(float *)(this + 200) * *(float *)param_1;
  fVar1 = *(float *)(this + 0x120);
  fVar2 = *(float *)(this + 0x124);
  *(float *)param_2 = local_54 + *(float *)(this + 0x11c);
  *(float *)(param_2 + 4) = local_50 + fVar1;
  *(float *)(param_2 + 8) = local_4c + fVar2;
  MakeRotationMatrixFast((Matrix<float,3,3> *)&local_78,(Vector<float,3> *)(param_1 + 0xc));
  local_48[0] = local_78 * *(float *)(this + 0xb0) +
                local_60 * *(float *)(this + 0xb8) + local_6c * *(float *)(this + 0xb4);
  local_48[1] = local_5c * *(float *)(this + 0xb8) +
                local_68 * *(float *)(this + 0xb4) + local_74 * *(float *)(this + 0xb0);
  local_48[2] = local_58 * *(float *)(this + 0xb8) +
                local_64 * *(float *)(this + 0xb4) + local_70 * *(float *)(this + 0xb0);
  local_48[3] = local_6c * *(float *)(this + 0xc0) +
                local_78 * *(float *)(this + 0xbc) + local_60 * *(float *)(this + 0xc4);
  local_38 = local_5c * *(float *)(this + 0xc4) +
             local_68 * *(float *)(this + 0xc0) + local_74 * *(float *)(this + 0xbc);
  local_34 = local_58 * *(float *)(this + 0xc4) +
             local_64 * *(float *)(this + 0xc0) + local_70 * *(float *)(this + 0xbc);
  local_30 = local_6c * *(float *)(this + 0xcc) +
             local_78 * *(float *)(this + 200) + local_60 * *(float *)(this + 0xd0);
  local_2c = local_5c * *(float *)(this + 0xd0) +
             local_68 * *(float *)(this + 0xcc) + local_74 * *(float *)(this + 200);
  local_28 = local_58 * *(float *)(this + 0xd0) +
             local_64 * *(float *)(this + 0xcc) + local_70 * *(float *)(this + 200);
  pfVar4 = local_48;
  pMVar5 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(float *)pMVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pMVar5 = pMVar5 + 4;
  }
  DecomposeRotationMatrixNoSnap((Vector<float,3> *)(param_2 + 0xc),local_24);
  return;
}

