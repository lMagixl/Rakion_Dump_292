
/* public: void __thiscall CEntity::PlaySoundA(class CSoundObject &,class CTFileName const &,long)
    */

void __thiscall
CEntity::PlaySoundA(CEntity *this,CSoundObject *param_1,CTFileName *param_2,long param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x125d20  2770  ?PlaySoundA@CEntity@@QAEXAAVCSoundObject@@ABVCTFileName@@J@Z
                        */
  puStack_c = &LAB_3621888b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  CSoundObject::Play_t(param_1,param_2,param_3);
  ExceptionList = local_10;
  return;
}

