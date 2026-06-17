
/* public: long __thiscall CAnimObject::GetAnimsCt(void)const  */

long __thiscall CAnimObject::GetAnimsCt(CAnimObject *this)

{
                    /* 0x20300  1709  ?GetAnimsCt@CAnimObject@@QBEJXZ */
  if (*(int *)(this + 0x14) == 0) {
    return 1;
  }
  return *(long *)(*(int *)(this + 0x14) + 0x14);
}

