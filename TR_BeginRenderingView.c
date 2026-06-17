
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TR_BeginRenderingView(class CAnyProjection3D &,class CDrawPort *) */

void __cdecl TR_BeginRenderingView(CAnyProjection3D *param_1,CDrawPort *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* 0x17e170  3744
                       ?TR_BeginRenderingView@@YAXAAVCAnyProjection3D@@PAVCDrawPort@@@Z */
  iVar1 = *(int *)(param_1 + 0x658);
  DAT_36300c54 = param_2;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  (**(code **)**(undefined4 **)(param_1 + 0x658))();
  CAnyProjection3D::operator=((CAnyProjection3D *)&DAT_36300da8,param_1);
  CDrawPort::SetProjection(DAT_36300c54,(CAnyProjection3D *)&DAT_36300da8);
  fVar2 = -*(float *)(DAT_36301400 + 0x40);
  fVar3 = -*(float *)(DAT_36301400 + 0x44);
  fVar4 = -*(float *)(DAT_36301400 + 0x48);
  _DAT_36300c94 =
       fVar2 * *(float *)(DAT_36301400 + 0xf8) +
       fVar4 * *(float *)(DAT_36301400 + 0x100) + fVar3 * *(float *)(DAT_36301400 + 0xfc);
  _DAT_36300ca4 =
       fVar4 * *(float *)(DAT_36301400 + 0x10c) +
       fVar3 * *(float *)(DAT_36301400 + 0x108) + fVar2 * *(float *)(DAT_36301400 + 0x104);
  _DAT_36300c88 = *(undefined4 *)(DAT_36301400 + 0xf8);
  _DAT_36300cb4 =
       fVar4 * *(float *)(DAT_36301400 + 0x118) +
       fVar3 * *(float *)(DAT_36301400 + 0x114) + fVar2 * *(float *)(DAT_36301400 + 0x110);
  _DAT_36300c8c = *(undefined4 *)(DAT_36301400 + 0xfc);
  _DAT_36300c90 = *(undefined4 *)(DAT_36301400 + 0x100);
  _DAT_36300c98 = *(undefined4 *)(DAT_36301400 + 0x104);
  _DAT_36300c9c = *(undefined4 *)(DAT_36301400 + 0x108);
  _DAT_36300ca0 = *(undefined4 *)(DAT_36301400 + 0x10c);
  _DAT_36300ca8 = *(undefined4 *)(DAT_36301400 + 0x110);
  _DAT_36300cac = *(undefined4 *)(DAT_36301400 + 0x114);
  _DAT_36300cb0 = *(undefined4 *)(DAT_36301400 + 0x118);
  DAT_36300d78 = TR_AreHardwareShadersAvailable();
  return;
}

