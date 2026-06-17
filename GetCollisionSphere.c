
/* public: class CCollisionSphere * __thiscall CPonytail::GetCollisionSphere(long) */

CCollisionSphere * __thiscall CPonytail::GetCollisionSphere(CPonytail *this,long param_1)

{
  CCollisionSphere *pCVar1;
  
                    /* 0x190970  1788  ?GetCollisionSphere@CPonytail@@QAEPAVCCollisionSphere@@J@Z */
  pCVar1 = (CCollisionSphere *)FUN_361906e0(this + 0xac,param_1);
  return pCVar1;
}

