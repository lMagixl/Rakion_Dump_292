
/* public: void __thiscall CSoundObject::Play_t(class CTFileName const &,unsigned long) */

void __thiscall CSoundObject::Play_t(CSoundObject *this,CTFileName *param_1,ulong param_2)

{
  CSoundData *pCVar1;
  
                    /* 0xa3830  2772  ?Play_t@CSoundObject@@QAEXABVCTFileName@@K@Z */
  pCVar1 = CStock_CSoundData::Obtain_t(_pSoundStock,param_1);
  Play(this,pCVar1,param_2);
  CStock_CSoundData::Release(_pSoundStock,pCVar1);
  return;
}

