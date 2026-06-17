
/* public: void __thiscall CSimpleProjection3D_DOUBLE::ProjectPlacement(class CPlacement3D const
   &,class CPlacement3D &)const  */

void __thiscall
CSimpleProjection3D_DOUBLE::ProjectPlacement
          (CSimpleProjection3D_DOUBLE *this,CPlacement3D *param_1,CPlacement3D *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  double *pdVar13;
  Matrix<double,3,3> *pMVar14;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  Matrix<double,3,3> local_50 [76];
  
                    /* 0x5d650  2865
                       ?ProjectPlacement@CSimpleProjection3D_DOUBLE@@QBEXABVCPlacement3D@@AAV2@@Z */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  dVar4 = *(double *)(this + 0x68);
  dVar5 = *(double *)(this + 0x60);
  dVar6 = *(double *)(this + 0x58);
  dVar7 = *(double *)(this + 0x80);
  dVar8 = *(double *)(this + 0x78);
  dVar9 = *(double *)(this + 0x70);
  dVar10 = *(double *)(this + 0xd8);
  dVar11 = *(double *)(this + 0xe0);
  *(float *)param_2 =
       (float)((double)(fVar1 * (float)*(double *)(this + 0x40) +
                       fVar2 * (float)*(double *)(this + 0x48) +
                       fVar3 * (float)*(double *)(this + 0x50)) + *(double *)(this + 0xd0));
  *(float *)(param_2 + 4) =
       (float)((double)(fVar1 * (float)dVar6 + fVar2 * (float)dVar5 + fVar3 * (float)dVar4) + dVar10
              );
  *(float *)(param_2 + 8) =
       (float)((double)(fVar1 * (float)dVar9 + fVar2 * (float)dVar8 + fVar3 * (float)dVar7) + dVar11
              );
  operator^=((Matrix<double,3,3> *)&local_e0,(Vector<float,3> *)(param_1 + 0xc));
  local_98 = local_e0 * *(double *)(this + 0x40) +
             local_b0 * *(double *)(this + 0x50) + local_c8 * *(double *)(this + 0x48);
  local_90 = local_d8 * *(double *)(this + 0x40) +
             local_a8 * *(double *)(this + 0x50) + local_c0 * *(double *)(this + 0x48);
  local_88 = local_d0 * *(double *)(this + 0x40) +
             local_a0 * *(double *)(this + 0x50) + local_b8 * *(double *)(this + 0x48);
  local_80 = local_b0 * *(double *)(this + 0x68) +
             local_c8 * *(double *)(this + 0x60) + local_e0 * *(double *)(this + 0x58);
  local_78 = local_a8 * *(double *)(this + 0x68) +
             local_c0 * *(double *)(this + 0x60) + local_d8 * *(double *)(this + 0x58);
  local_70 = local_a0 * *(double *)(this + 0x68) +
             local_b8 * *(double *)(this + 0x60) + local_d0 * *(double *)(this + 0x58);
  local_68 = local_b0 * *(double *)(this + 0x80) +
             local_c8 * *(double *)(this + 0x78) + local_e0 * *(double *)(this + 0x70);
  local_60 = local_a8 * *(double *)(this + 0x80) +
             local_c0 * *(double *)(this + 0x78) + local_d8 * *(double *)(this + 0x70);
  local_58 = local_a0 * *(double *)(this + 0x80) +
             local_b8 * *(double *)(this + 0x78) + local_d0 * *(double *)(this + 0x70);
  pdVar13 = &local_98;
  pMVar14 = local_50;
  for (iVar12 = 0x12; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(undefined4 *)pMVar14 = *(undefined4 *)pdVar13;
    pdVar13 = (double *)((int)pdVar13 + 4);
    pMVar14 = pMVar14 + 4;
  }
  operator^=((Vector<float,3> *)(param_2 + 0xc),local_50);
  return;
}

