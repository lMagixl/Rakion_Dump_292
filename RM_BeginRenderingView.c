
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_BeginRenderingView(class CAnyProjection3D &,class CDrawPort *) */

void __cdecl RM_BeginRenderingView(CAnyProjection3D *param_1,CDrawPort *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CProjection3D *pCVar5;
  
                    /* 0x165340  2906
                       ?RM_BeginRenderingView@@YAXAAVCAnyProjection3D@@PAVCDrawPort@@@Z */
  pCVar5 = (CProjection3D *)0x0;
  if (*(CProjection3D **)(param_1 + 0x658) == (CProjection3D *)(param_1 + 0x30c)) {
    pCVar5 = *(CProjection3D **)(param_1 + 0x658);
  }
  _DAT_362a6bb4 = RM_GetMipAdjustmentFactor(pCVar5);
  DAT_362fe1b0 = 1;
  DAT_362fe0d0 = param_2;
  DAT_362fe0d4 = CDrawPort::GetID(param_2);
  iVar1 = *(int *)(param_1 + 0x658);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  (**(code **)**(undefined4 **)(param_1 + 0x658))();
  iVar1 = *(int *)(param_1 + 0x658);
  if (*(int *)(iVar1 + 0x7c) != 0) {
    *(float *)(iVar1 + 0xa0) = *(float *)(iVar1 + 0xa0) - _DAT_36231db8;
  }
  CAnyProjection3D::operator=((CAnyProjection3D *)&DAT_362fe2e8,param_1);
  CDrawPort::SetProjection(DAT_362fe0d0,(CAnyProjection3D *)&DAT_362fe2e8);
  fVar2 = -*(float *)(DAT_362fe940 + 0x40);
  fVar3 = -*(float *)(DAT_362fe940 + 0x44);
  fVar4 = -*(float *)(DAT_362fe940 + 0x48);
  _DAT_362fe0f4 =
       fVar2 * *(float *)(DAT_362fe940 + 0xf8) +
       fVar4 * *(float *)(DAT_362fe940 + 0x100) + fVar3 * *(float *)(DAT_362fe940 + 0xfc);
  _DAT_362fe104 =
       fVar4 * *(float *)(DAT_362fe940 + 0x10c) +
       fVar3 * *(float *)(DAT_362fe940 + 0x108) + fVar2 * *(float *)(DAT_362fe940 + 0x104);
  _DAT_362fe0e8 = *(undefined4 *)(DAT_362fe940 + 0xf8);
  _DAT_362fe114 =
       fVar4 * *(float *)(DAT_362fe940 + 0x118) +
       fVar3 * *(float *)(DAT_362fe940 + 0x114) + fVar2 * *(float *)(DAT_362fe940 + 0x110);
  _DAT_362fe0ec = *(undefined4 *)(DAT_362fe940 + 0xfc);
  _DAT_362fe0f0 = *(undefined4 *)(DAT_362fe940 + 0x100);
  _DAT_362fe0f8 = *(undefined4 *)(DAT_362fe940 + 0x104);
  _DAT_362fe0fc = *(undefined4 *)(DAT_362fe940 + 0x108);
  _DAT_362fe100 = *(undefined4 *)(DAT_362fe940 + 0x10c);
  _DAT_362fe108 = *(undefined4 *)(DAT_362fe940 + 0x110);
  _DAT_362fe10c = *(undefined4 *)(DAT_362fe940 + 0x114);
  _DAT_362fe110 = *(undefined4 *)(DAT_362fe940 + 0x118);
  DAT_362fe0c0 = GetFPUPrecision();
  SetFPUPrecision(0);
  DAT_362fe1ac = RM_AreHardwareShadersAvailable();
  return;
}

