
/* public: int __thiscall CEntity::IsSelected(unsigned long)const  */

int __thiscall CEntity::IsSelected(CEntity *this,ulong param_1)

{
                    /* 0x6080  2468  ?IsSelected@CEntity@@QBEHK@Z */
  return *(uint *)(this + 0x10) & param_1;
}

