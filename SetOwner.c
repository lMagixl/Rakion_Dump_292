
/* public: void __thiscall CSoundObject::SetOwner(class CEntity *) */

void __thiscall CSoundObject::SetOwner(CSoundObject *this,CEntity *param_1)

{
                    /* 0x329e0  3542  ?SetOwner@CSoundObject@@QAEXPAVCEntity@@@Z */
  *(CEntity **)(this + 0xc) = param_1;
  return;
}

