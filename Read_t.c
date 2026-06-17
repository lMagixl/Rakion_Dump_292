
/* public: virtual void __thiscall CPlayerEntity::Read_t(class CTStream *,int) */

void __thiscall CPlayerEntity::Read_t(CPlayerEntity *this,CTStream *param_1,int param_2)

{
  CTStream *pCVar1;
  CPlayerEntity *pCVar2;
  
                    /* 0x1b6fa0  3034  ?Read_t@CPlayerEntity@@UAEXPAVCTStream@@H@Z */
  CMovableModelEntity::Read_t((CMovableModelEntity *)this,param_1,param_2);
  pCVar2 = this + 0x3ac;
  pCVar1 = ::operator>>(param_1,(CPlayerCharacter *)(this + 0x368));
  ::operator>>(pCVar1,(CPlacement3D *)pCVar2);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(this + 0x3ac);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(this + 0x3b0);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(this + 0x3b4);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(this + 0x3b8);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(this + 0x3bc);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(this + 0x3c0);
  return;
}

