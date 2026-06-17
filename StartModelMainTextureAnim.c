
/* public: void __thiscall CEntity::StartModelMainTextureAnim(long) */

void __thiscall CEntity::StartModelMainTextureAnim(CEntity *this,long param_1)

{
                    /* 0x125520  3661  ?StartModelMainTextureAnim@CEntity@@QAEXJ@Z */
  CAnimObject::StartAnim((CAnimObject *)(*(int *)(this + 0x7c) + 0x24),param_1);
  return;
}

