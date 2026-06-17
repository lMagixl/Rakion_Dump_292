
/* public: void __thiscall CBrushVertex::SetAbsolutePosition(class Vector<double,3> const &) */

void __thiscall CBrushVertex::SetAbsolutePosition(CBrushVertex *this,Vector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  undefined4 uStack_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
                    /* 0x13a380  3389  ?SetAbsolutePosition@CBrushVertex@@QAEXABV?$Vector@N$02@@@Z
                        */
  iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x40) + 0x38) + 0x14) + 0x668);
  if (iVar9 != 0) {
    dVar1 = (double)((float)*(double *)param_1 - *(float *)(iVar9 + 0x3c));
    dVar2 = (double)((float)*(double *)(param_1 + 8) - *(float *)(iVar9 + 0x40));
    dVar3 = *(double *)(param_1 + 0x10) - (double)*(float *)(iVar9 + 0x44);
    local_98 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x60),*(undefined4 *)(iVar9 + 0x54));
    local_90 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x58),*(undefined4 *)(iVar9 + 0x6c));
    local_88 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x70),*(undefined4 *)(iVar9 + 100));
    local_80 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x68),*(undefined4 *)(iVar9 + 0x5c));
    local_78 = (double)CONCAT44(local_78._4_4_,*(undefined4 *)(iVar9 + 0x74));
    pfVar10 = (float *)&local_98;
    pfVar11 = local_50;
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    local_98 = (double)local_50[0];
    local_90 = (double)local_50[1];
    local_88 = (double)local_50[2];
    local_80 = (double)local_50[3];
    local_78 = (double)local_40;
    local_70 = (double)fStack_3c;
    local_68 = (double)local_38;
    local_60 = (double)fStack_34;
    local_58 = (double)local_30;
    pfVar10 = (float *)&local_98;
    pfVar11 = local_50;
    for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    dVar4 = dVar1 * (double)CONCAT44(local_50[1],local_50[0]) +
            dVar2 * (double)CONCAT44(local_50[3],local_50[2]) +
            dVar3 * (double)CONCAT44(fStack_3c,local_40);
    dVar5 = (double)CONCAT44(fStack_34,local_38) * dVar1 +
            (double)CONCAT44(uStack_2c,local_30) * dVar2 + local_28 * dVar3;
    dVar3 = local_20 * dVar1 + local_18 * dVar2 + local_10 * dVar3;
    *(double *)(this + 0x20) = dVar4;
    *(double *)(this + 0x28) = dVar5;
    *(double *)(this + 0x30) = dVar3;
    dVar1 = *(double *)(param_1 + 8);
    dVar2 = *(double *)(param_1 + 0x10);
    *(float *)(this + 4) = (float)*(double *)param_1;
    fVar6 = (float)dVar4;
    *(float *)(this + 8) = (float)dVar1;
    fVar7 = (float)dVar5;
    *(float *)(this + 0xc) = (float)dVar2;
    fVar8 = (float)dVar3;
    pfVar10 = *(float **)this;
    *(float *)(this + 0x10) = fVar6;
    *(float *)(this + 0x14) = fVar7;
    *(float *)(this + 0x18) = fVar8;
    if (pfVar10 != (float *)0x0) {
      *pfVar10 = fVar6;
      pfVar10[1] = fVar7;
      pfVar10[2] = fVar8;
    }
  }
  return;
}

