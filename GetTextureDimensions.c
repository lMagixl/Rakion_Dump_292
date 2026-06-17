
/* public: void __thiscall CModelData::GetTextureDimensions(long &,long &) */

void __thiscall CModelData::GetTextureDimensions(CModelData *this,long *param_1,long *param_2)

{
                    /* 0xb4840  2158  ?GetTextureDimensions@CModelData@@QAEXAAJ0@Z */
  *param_1 = *(long *)(this + 0xcd8);
  *param_2 = *(long *)(this + 0xcdc);
  return;
}

