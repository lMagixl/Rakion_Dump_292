
/* private: __thiscall CEntitiesDLL::~CEntitiesDLL(void) */

void __thiscall CEntitiesDLL::~CEntitiesDLL(CEntitiesDLL *this)

{
                    /* 0x12fd50  413  ??1CEntitiesDLL@@AAE@XZ */
  FreeLibrary(*(HMODULE *)this);
  return;
}

