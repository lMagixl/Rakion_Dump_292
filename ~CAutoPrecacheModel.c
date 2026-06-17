
/* public: __thiscall CAutoPrecacheModel::~CAutoPrecacheModel(void) */

void __thiscall CAutoPrecacheModel::~CAutoPrecacheModel(CAutoPrecacheModel *this)

{
                    /* 0x125a40  388  ??1CAutoPrecacheModel@@QAE@XZ */
  if (*(CModelData **)this != (CModelData *)0x0) {
    CStock_CModelData::Release(_pModelStock,*(CModelData **)this);
  }
  return;
}

