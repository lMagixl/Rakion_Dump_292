
/* public: void __thiscall CEntity::DeleteSelf(void) */

void __thiscall CEntity::DeleteSelf(CEntity *this)

{
                    /* 0x124690  1471  ?DeleteSelf@CEntity@@QAEXXZ */
  if (((byte)this[0x10] & 4) == 0) {
    CPrintF(s_I______ERROR__Deleting_undestroy_36237aa2 + 2);
    (**(code **)(*(int *)this + 0x58))(0);
  }
  (**(code **)(*(int *)this + 0x50))(1);
  return;
}

