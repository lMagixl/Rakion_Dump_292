
/* public: void __thiscall CPlacement3D::Rotate_TrackBall(class Vector<float,3> const &) */

void __thiscall CPlacement3D::Rotate_TrackBall(CPlacement3D *this,Vector<float,3> *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_6c [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x56890  3182  ?Rotate_TrackBall@CPlacement3D@@QAEXABV?$Vector@M$02@@@Z */
  MakeRotationMatrix((Matrix<float,3,3> *)&local_48,param_1);
  MakeRotationMatrix((Matrix<float,3,3> *)local_6c,(Vector<float,3> *)(this + 0xc));
  local_24[0] = local_6c[0] * local_48 + local_6c[3] * local_44 + local_54 * local_40;
  local_24[1] = local_6c[1] * local_48 + local_5c * local_44 + local_50 * local_40;
  local_24[2] = local_6c[2] * local_48 + local_58 * local_44 + local_4c * local_40;
  local_24[3] = local_3c * local_6c[0] + local_38 * local_6c[3] + local_34 * local_54;
  local_14 = local_3c * local_6c[1] + local_38 * local_5c + local_34 * local_50;
  local_10 = local_3c * local_6c[2] + local_38 * local_58 + local_34 * local_4c;
  local_c = local_30 * local_6c[0] + local_2c * local_6c[3] + local_28 * local_54;
  local_8 = local_30 * local_6c[1] + local_2c * local_5c + local_28 * local_50;
  local_4 = local_30 * local_6c[2] + local_2c * local_58 + local_28 * local_4c;
  pfVar2 = local_24;
  pfVar3 = local_6c;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  DecomposeRotationMatrix((Vector<float,3> *)(this + 0xc),(Matrix<float,3,3> *)local_6c);
  return;
}

