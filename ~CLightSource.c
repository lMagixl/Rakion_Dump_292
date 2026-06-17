
/* public: __thiscall CLightSource::~CLightSource(void) */

void __thiscall CLightSource::~CLightSource(CLightSource *this)

{
                    /* 0x149780  433  ??1CLightSource@@QAE@XZ */
  DiscardShadowLayers(this);
  if ((-1 < (char)this[0x1c]) && (*(int *)(this + 0xc) != 0)) {
    UpdateTerrains(this);
  }
  FUN_36115a50((int)this);
  return;
}

