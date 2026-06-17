
/* public: double __thiscall CEntity::GetSoundLength(class CTFileName const &) */

double __thiscall CEntity::GetSoundLength(CEntity *this,CTFileName *param_1)

{
  CSoundData *this_00;
  double dVar1;
  
                    /* 0x125d00  2129  ?GetSoundLength@CEntity@@QAENABVCTFileName@@@Z */
  this_00 = CStock_CSoundData::Obtain_t(_pSoundStock,param_1);
  dVar1 = CSoundData::GetSecondsLength(this_00);
  return dVar1;
}

