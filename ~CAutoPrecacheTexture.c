
/* public: __thiscall CAutoPrecacheTexture::~CAutoPrecacheTexture(void) */

void __thiscall CAutoPrecacheTexture::~CAutoPrecacheTexture(CAutoPrecacheTexture *this)

{
                    /* 0x125b00  390  ??1CAutoPrecacheTexture@@QAE@XZ */
  if (*(CTextureData **)this != (CTextureData *)0x0) {
    CStock_CTextureData::Release(_pTextureStock,*(CTextureData **)this);
  }
  return;
}

