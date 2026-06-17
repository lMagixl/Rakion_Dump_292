
/* public: virtual long __thiscall CMovableModelEntity::GetUsedMemory(void) */

long __thiscall CMovableModelEntity::GetUsedMemory(CMovableModelEntity *this)

{
  long lVar1;
  
                    /* 0x1b48b0  2181  ?GetUsedMemory@CMovableModelEntity@@UAEJXZ */
  lVar1 = CMovableEntity::GetUsedMemory((CMovableEntity *)this);
  return lVar1 + 8;
}

