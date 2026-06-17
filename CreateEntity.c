
/* public: class CEntity * __thiscall CEntity::CreateEntity(class CPlacement3D const &,long,unsigned
   long,int) */

CEntity * __thiscall
CEntity::CreateEntity(CEntity *this,CPlacement3D *param_1,long param_2,ulong param_3,int param_4)

{
  CEntityComponent *pCVar1;
  CEntity *pCVar2;
  
                    /* 0x125fe0  1416  ?CreateEntity@CEntity@@QAEPAV1@ABVCPlacement3D@@JKH@Z */
  pCVar1 = CEntityClass::ComponentForTypeAndID(*(CEntityClass **)(this + 0x78),3,param_2);
  pCVar2 = CWorld::CreateEntity
                     (*(CWorld **)(this + 0xa8),param_1,*(CEntityClass **)(pCVar1 + 0x14),param_3,
                      param_4);
  return pCVar2;
}

