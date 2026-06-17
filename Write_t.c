
/* public: virtual void __thiscall CPlayerEntity::Write_t(class CTStream *,int) */

void __thiscall CPlayerEntity::Write_t(CPlayerEntity *this,CTStream *param_1,int param_2)

{
  CTStream *pCVar1;
  CPlayerEntity *pCVar2;
  
                    /* 0x1b7010  4031  ?Write_t@CPlayerEntity@@UAEXPAVCTStream@@H@Z */
  CMovableModelEntity::Write_t((CMovableModelEntity *)this,param_1,param_2);
  pCVar2 = this + 0x3ac;
  pCVar1 = ::operator<<(param_1,(CPlayerCharacter *)(this + 0x368));
  ::operator<<(pCVar1,(CPlacement3D *)pCVar2);
  return;
}

