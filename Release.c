
/* public: void __thiscall CEntityComponent::Release(void) */

void __thiscall CEntityComponent::Release(CEntityComponent *this)

{
  CTextureData *pCVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x1328a0  3083  ?Release@CEntityComponent@@QAEXXZ */
  pCVar1 = *(CTextureData **)(this + 0x14);
  if (pCVar1 != (CTextureData *)0x0) {
    switch(*(undefined4 *)this) {
    case 1:
      CStock_CTextureData::Release(_pTextureStock,pCVar1);
      *(undefined4 *)(this + 0x14) = 0;
      return;
    case 2:
      CStock_CModelData::Release(_pModelStock,(CModelData *)pCVar1);
      *(undefined4 *)(this + 0x14) = 0;
      return;
    case 3:
      CStock_CEntityClass::Release(_pEntityClassStock,(CEntityClass *)pCVar1);
      *(undefined4 *)(this + 0x14) = 0;
      return;
    case 4:
      CStock_CSoundData::Release(_pSoundStock,(CSoundData *)pCVar1);
      *(undefined4 *)(this + 0x14) = 0;
      return;
    case 5:
      CStock_CModelInstance::Release(_pModelInstanceStock,(CModelInstanceSerial *)pCVar1);
      *(undefined4 *)(this + 0x14) = 0;
      return;
    default:
      uVar4 = *(undefined4 *)(this + 4);
      uVar3 = *(undefined4 *)(this + 0xc);
      pcVar2 = Translate(s_ETRSComponent___s___d__is_of_unk_36238624,4);
      ThrowF_t(pcVar2,uVar3,uVar4);
      *(undefined4 *)(this + 0x14) = 0;
    }
  }
  return;
}

