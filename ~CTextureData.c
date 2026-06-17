
/* public: virtual __thiscall CTextureData::~CTextureData(void) */

void __thiscall CTextureData::~CTextureData(CTextureData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x96f50  496  ??1CTextureData@@UAE@XZ */
  puStack_8 = &LAB_36212cb1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  Clear(this);
  local_4 = 0xffffffff;
  CAnimData::~CAnimData((CAnimData *)this);
  ExceptionList = local_c;
  return;
}

