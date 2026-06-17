
/* public: float __thiscall CAnimObject::GetCurrentAnimLength(void)const  */

float __thiscall CAnimObject::GetCurrentAnimLength(CAnimObject *this)

{
  float fVar1;
  
                    /* 0x1ff80  1810  ?GetCurrentAnimLength@CAnimObject@@QBEMXZ */
  fVar1 = GetAnimLength(this,*(long *)(this + 8));
  return fVar1;
}

