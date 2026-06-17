
/* public: __thiscall CAutoPrecacheSound::~CAutoPrecacheSound(void) */

void __thiscall CAutoPrecacheSound::~CAutoPrecacheSound(CAutoPrecacheSound *this)

{
                    /* 0x1258c0  389  ??1CAutoPrecacheSound@@QAE@XZ */
  if (*(CSoundData **)this != (CSoundData *)0x0) {
    CStock_CSoundData::Release(_pSoundStock,*(CSoundData **)this);
  }
  return;
}

