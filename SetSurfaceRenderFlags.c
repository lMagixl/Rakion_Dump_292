
/* public: void __thiscall CModelObject::SetSurfaceRenderFlags(long,long,enum
   SurfaceShadingType,enum SurfaceTranslucencyType,unsigned long) */

void __thiscall
CModelObject::SetSurfaceRenderFlags
          (CModelObject *this,long param_1,long param_2,SurfaceShadingType param_3,
          SurfaceTranslucencyType param_4,ulong param_5)

{
  CModelData *pCVar1;
  int iVar2;
  
                    /* 0xb57c0  3601
                       ?SetSurfaceRenderFlags@CModelObject@@QAEXJJW4SurfaceShadingType@@W4SurfaceTranslucencyType@@K@Z
                        */
  pCVar1 = GetData(this);
  if (param_1 < *(int *)(pCVar1 + 0x54)) {
    iVar2 = FUN_3600c0e0((undefined4 *)(pCVar1 + param_1 * 0x60 + 0xf8));
    if (param_2 < iVar2) {
      iVar2 = param_2 * 0x70 + *(int *)(pCVar1 + param_1 * 0x60 + 0xfc);
      *(SurfaceShadingType *)(iVar2 + 0x4c) = param_3;
      *(SurfaceTranslucencyType *)(iVar2 + 0x50) = param_4;
      *(ulong *)(iVar2 + 0x48) = param_5;
    }
  }
  return;
}

