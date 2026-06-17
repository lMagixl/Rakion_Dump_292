
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::TestTerrain(class CEntity *) */

void __thiscall CCastRay::TestTerrain(CCastRay *this,CEntity *param_1)

{
  float fVar1;
  
                    /* 0xdbe50  3821  ?TestTerrain@CCastRay@@QAEXPAVCEntity@@@Z */
  if ((((*(uint *)(param_1 + 0x10) & 0x200000) == 0) &&
      (fVar1 = TR_TestRayCastHit(*(undefined4 *)(param_1 + 0x7c),param_1 + 0x54,param_1 + 0x3c,
                                 *(undefined4 *)(this + 0x2c),*(undefined4 *)(this + 0x30),
                                 *(undefined4 *)(this + 0x34),*(undefined4 *)(this + 0x38),
                                 *(undefined4 *)(this + 0x3c),*(undefined4 *)(this + 0x40),
                                 *(undefined4 *)(this + 0x94),*(undefined4 *)(this + 0x78)),
      fVar1 < *(float *)(this + 0x94))) && (_DAT_3622376c < fVar1)) {
    *(float *)(this + 0x94) = fVar1;
    *(CEntity **)(this + 0x84) = param_1;
    *(undefined4 *)(this + 0xa8) = 0;
    *(undefined4 *)(this + 0xa4) = 0;
    return;
  }
  return;
}

