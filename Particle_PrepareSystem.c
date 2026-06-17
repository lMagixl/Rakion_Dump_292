
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_PrepareSystem(class CDrawPort *,class CAnyProjection3D &) */

void __cdecl Particle_PrepareSystem(CDrawPort *param_1,CAnyProjection3D *param_2)

{
                    /* 0x6b960  2750
                       ?Particle_PrepareSystem@@YAXPAVCDrawPort@@AAVCAnyProjection3D@@@Z */
  DAT_362bf9c4 = *(int *)(param_2 + 0x658);
  _DAT_362bf9ac = -*(float *)(DAT_362bf9c4 + 0x4c);
  DAT_362bf984 = param_1;
  _DAT_362bf9c0 = 0x3f800000;
  DAT_362bf9cc = CDrawPort::GetID(param_1);
  CDrawPort::SetProjection(param_1,param_2);
  if (*(CAnyProjection3D **)(param_2 + 0x658) == param_2 + 0x30c) {
    _DAT_362bf9c0 = *(undefined4 *)(*(CAnyProjection3D **)(param_2 + 0x658) + 0x18c);
  }
  (*DAT_362c45f8)();
  (*DAT_362c4654)(0x3d);
  (*DAT_362c4608)();
  (*DAT_362c4680)(0x51,0x51);
  DAT_362c54e0 = 0;
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  _DAT_362c5520 = 0;
  _DAT_362c5530 = 0;
  _DAT_362c5540 = 0;
  DAT_362c5560 = 0;
  return;
}

