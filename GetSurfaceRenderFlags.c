
/* public: void __thiscall CModelObject::GetSurfaceRenderFlags(long,long,enum SurfaceShadingType
   &,enum SurfaceTranslucencyType &,unsigned long &) */

void __thiscall
CModelObject::GetSurfaceRenderFlags
          (CModelObject *this,long param_1,long param_2,SurfaceShadingType *param_3,
          SurfaceTranslucencyType *param_4,ulong *param_5)

{
  CModelData *pCVar1;
  int iVar2;
  
                    /* 0xb5760  2147
                       ?GetSurfaceRenderFlags@CModelObject@@QAEXJJAAW4SurfaceShadingType@@AAW4SurfaceTranslucencyType@@AAK@Z
                        */
  pCVar1 = GetData(this);
  if (param_1 < *(int *)(pCVar1 + 0x54)) {
    iVar2 = FUN_3600c0e0((undefined4 *)(pCVar1 + param_1 * 0x60 + 0xf8));
    if (param_2 < iVar2) {
      iVar2 = param_2 * 0x70 + *(int *)(pCVar1 + param_1 * 0x60 + 0xfc);
      *param_3 = *(SurfaceShadingType *)
                  (param_2 * 0x70 + 0x4c + *(int *)(pCVar1 + param_1 * 0x60 + 0xfc));
      *param_4 = *(SurfaceTranslucencyType *)(iVar2 + 0x50);
      *param_5 = *(ulong *)(iVar2 + 0x48);
    }
  }
  return;
}

