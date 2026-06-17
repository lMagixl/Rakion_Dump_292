
/* public: class CCollisionCapsule * __thiscall CPonytail::GetCollisionCapsule(long) */

CCollisionCapsule * __thiscall CPonytail::GetCollisionCapsule(CPonytail *this,long param_1)

{
  CCollisionCapsule *pCVar1;
  
                    /* 0x190960  1785  ?GetCollisionCapsule@CPonytail@@QAEPAVCCollisionCapsule@@J@Z
                        */
  pCVar1 = (CCollisionCapsule *)FUN_36190650(this + 0x98,param_1);
  return pCVar1;
}

