
/* public: __thiscall CEntityComponent::~CEntityComponent(void) */

void __thiscall CEntityComponent::~CEntityComponent(CEntityComponent *this)

{
                    /* 0x74b0  416  ??1CEntityComponent@@QAE@XZ */
  StringFree(*(char **)(this + 0xc));
  return;
}

