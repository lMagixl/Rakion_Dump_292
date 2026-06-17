
/* public: void __thiscall CEntity::GetEntityPointRatio(class Vector<float,3> const &,class
   Vector<float,3> &,int) */

void __thiscall
CEntity::GetEntityPointRatio
          (CEntity *this,Vector<float,3> *param_1,Vector<float,3> *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  CBrushMip *pCVar10;
  undefined4 uVar11;
  int unaff_retaddr;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [3];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float *pfStack_8;
  float *pfStack_4;
  
                    /* 0x1282b0  1857  ?GetEntityPointRatio@CEntity@@QAEXABV?$Vector@M$02@@AAV2@H@Z
                        */
  iVar3 = *(int *)(this + 4);
  if ((((iVar3 == 3) || (iVar3 == 5)) || (iVar3 == 9)) || (iVar3 == 10)) {
    if (iVar3 != 4) {
      iVar3 = *(int *)this;
      local_54 = 3e+38;
      local_48 = -3e+38;
      local_50 = 3e+38;
      local_44 = -3e+38;
      local_4c = 3e+38;
      local_40[0] = 0xff61b1e6;
      uVar11 = (**(code **)(iVar3 + 0xf4))(&local_54);
      (**(code **)(iVar3 + 0xf8))(uVar11);
      local_6c = local_54 - fStack_60;
      local_68 = local_50 - fStack_5c;
      local_64 = (local_4c - fStack_58) * pfStack_8[2];
      fStack_60 = fStack_60 + local_6c * *pfStack_8;
      fStack_5c = fStack_5c + local_68 * pfStack_8[1];
      local_7c = fStack_58 + local_64;
      if (unaff_retaddr != 0) {
        local_78 = fStack_60;
        local_74 = fStack_5c;
        local_70 = local_7c;
        (**(code **)(*(int *)this + 100))(&local_48);
        MakeRotationMatrixFast((Matrix<float,3,3> *)&fStack_34,(Vector<float,3> *)local_40);
        *pfStack_8 = local_4c +
                     (float)&local_7c * fStack_34 + fStack_60 * fStack_30 + fStack_5c * fStack_2c;
        pfStack_8[1] = local_48 +
                       fStack_28 * (float)&local_7c + fStack_24 * fStack_60 + fStack_20 * fStack_5c;
        pfStack_8[2] = local_44 +
                       fStack_1c * (float)&local_7c + fStack_18 * fStack_60 + fStack_14 * fStack_5c;
        return;
      }
      fVar1 = *(float *)(this + 0x68);
      fVar2 = *(float *)(this + 100);
      fVar4 = *(float *)(this + 0x60);
      fVar5 = *(float *)(this + 0x74);
      fVar6 = *(float *)(this + 0x70);
      fVar7 = *(float *)(this + 0x6c);
      fVar8 = *(float *)(this + 0x40);
      fVar9 = *(float *)(this + 0x44);
      *pfStack_4 = *(float *)(this + 0x3c) +
                   fStack_60 * *(float *)(this + 0x54) +
                   fStack_5c * *(float *)(this + 0x58) + local_7c * *(float *)(this + 0x5c);
      pfStack_4[1] = fVar8 + fStack_60 * fVar4 + fStack_5c * fVar2 + local_7c * fVar1;
      pfStack_4[2] = fVar9 + fStack_60 * fVar7 + fStack_5c * fVar6 + local_7c * fVar5;
      return;
    }
  }
  else if (iVar3 != 4) {
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x44);
    return;
  }
  pCVar10 = CBrush3D::GetFirstMip(*(CBrush3D **)(this + 0x7c));
  fVar4 = *(float *)(pCVar10 + 0x28);
  fVar5 = *(float *)(pCVar10 + 0x2c);
  fVar6 = *(float *)(pCVar10 + 0x34);
  fVar7 = *(float *)(pCVar10 + 0x38);
  fVar8 = *(float *)(pCVar10 + 0x28);
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar9 = *(float *)(pCVar10 + 0x2c);
  *(float *)param_2 =
       *(float *)(pCVar10 + 0x24) +
       (*(float *)(pCVar10 + 0x30) - *(float *)(pCVar10 + 0x24)) * *(float *)param_1;
  *(float *)(param_2 + 4) = fVar8 + (fVar6 - fVar4) * fVar1;
  *(float *)(param_2 + 8) = fVar9 + (fVar7 - fVar5) * fVar2;
  return;
}

