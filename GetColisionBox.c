
/* public: struct ColisionBox & __thiscall CModelInstance::GetColisionBox(long) */

ColisionBox * __thiscall CModelInstance::GetColisionBox(CModelInstance *this,long param_1)

{
                    /* 0x15c7e0  1766  ?GetColisionBox@CModelInstance@@QAEAAUColisionBox@@J@Z */
  return (ColisionBox *)(param_1 * 0x20 + *(int *)(this + 0x20));
}

