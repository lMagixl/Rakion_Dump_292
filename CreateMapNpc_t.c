
/* public: class CEntity * __thiscall CWorld::CreateMapNpc_t(class CPlacement3D const &,class
   CTFileName const &,unsigned long,int) */

CEntity * __thiscall
CWorld::CreateMapNpc_t
          (CWorld *this,CPlacement3D *param_1,CTFileName *param_2,ulong param_3,int param_4)

{
  CEntityClass *pCVar1;
  CEntity *pCVar2;
  
                    /* 0xca8f0  1420
                       ?CreateMapNpc_t@CWorld@@QAEPAVCEntity@@ABVCPlacement3D@@ABVCTFileName@@KH@Z
                        */
  pCVar1 = CStock_CEntityClass::Obtain_t(_pEntityClassStock,param_2);
  pCVar2 = CreateMapNpc(this,param_1,pCVar1,param_3,param_4);
  CStock_CEntityClass::Release(_pEntityClassStock,pCVar1);
  return pCVar2;
}

