
/* public: long __thiscall CModelObject::SurfacesCt(long) */

long __thiscall CModelObject::SurfacesCt(CModelObject *this,long param_1)

{
  CModelData *pCVar1;
  long lVar2;
  
                    /* 0xb5b80  3704  ?SurfacesCt@CModelObject@@QAEJJ@Z */
  pCVar1 = GetData(this);
  lVar2 = FUN_3600c0e0((undefined4 *)(pCVar1 + param_1 * 0x60 + 0xf8));
  return lVar2;
}

