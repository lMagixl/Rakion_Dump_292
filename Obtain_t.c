
/* public: void __thiscall CEntityComponent::Obtain_t(void) */

void __thiscall CEntityComponent::Obtain_t(CEntityComponent *this)

{
  CModelInstanceSerial *this_00;
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CEntityComponent *pCVar5;
  undefined4 uVar6;
  
                    /* 0x132d90  2698  ?Obtain_t@CEntityComponent@@QAEXXZ */
  if (*(int *)(this + 0x14) != 0) {
    AddToCRCTable(this);
    return;
  }
  switch(*(undefined4 *)this) {
  case 1:
    if ((DAT_362c5460 == 0) || (pCVar5 = (CEntityComponent *)DAT_362fd540, ((byte)this[8] & 2) == 0)
       ) {
      pCVar5 = this + 0xc;
    }
    this_00 = (CModelInstanceSerial *)
              CStock_CTextureData::Obtain_t(_pTextureStock,(CTFileName *)pCVar5);
    *(CModelInstanceSerial **)(this + 0x14) = this_00;
    break;
  case 2:
    if ((DAT_362c5460 == 0) || (pCVar5 = (CEntityComponent *)DAT_362fd53c, ((byte)this[8] & 2) == 0)
       ) {
      pCVar5 = this + 0xc;
    }
    this_00 = (CModelInstanceSerial *)CStock_CModelData::Obtain_t(_pModelStock,(CTFileName *)pCVar5)
    ;
    *(CModelInstanceSerial **)(this + 0x14) = this_00;
    break;
  case 3:
    this_00 = (CModelInstanceSerial *)
              CStock_CEntityClass::Obtain_t(_pEntityClassStock,(CTFileName *)(this + 0xc));
    goto LAB_36132e4b;
  case 4:
    this_00 = (CModelInstanceSerial *)
              CStock_CSoundData::Obtain_t(_pSoundStock,(CTFileName *)(this + 0xc));
LAB_36132e4b:
    *(CModelInstanceSerial **)(this + 0x14) = this_00;
    break;
  case 5:
    if ((DAT_362c5460 == 0) || (pCVar5 = (CEntityComponent *)DAT_362fd544, ((byte)this[8] & 2) == 0)
       ) {
      pCVar5 = this + 0xc;
    }
    this_00 = CStock_CModelInstance::Obtain_t(_pModelInstanceStock,(CTFileName *)pCVar5);
    *(CModelInstanceSerial **)(this + 0x14) = this_00;
    break;
  default:
    uVar6 = *(undefined4 *)(this + 4);
    uVar4 = *(undefined4 *)(this + 0xc);
    pcVar2 = Translate(s_ETRSComponent___s___d__is_of_unk_362385d0,4);
    ThrowF_t(pcVar2,uVar4,uVar6);
    goto LAB_36132e5a;
  }
  lVar1 = CSerial::GetUsedCount((CSerial *)this_00);
  if (lVar1 < 2) {
LAB_36132e5a:
    if (_precache_bNowPrecaching == 0) {
      uVar6 = *(undefined4 *)(this + 0x10);
      uVar4 = *(undefined4 *)(this + 0xc);
      uVar3 = *(undefined4 *)(this + 4);
      pcVar2 = Translate(s_ETRSNot_precached___0x_08X___s__362385fc,4);
      CPrintF(pcVar2,uVar3,uVar4,uVar6);
    }
  }
  AddToCRCTable(this);
  return;
}

