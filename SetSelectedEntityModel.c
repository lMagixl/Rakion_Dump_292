
/* public: void __thiscall CWorldRenderPrefs::SetSelectedEntityModel(class CModelObject *) */

void __thiscall
CWorldRenderPrefs::SetSelectedEntityModel(CWorldRenderPrefs *this,CModelObject *param_1)

{
                    /* 0xd3880  3582
                       ?SetSelectedEntityModel@CWorldRenderPrefs@@QAEXPAVCModelObject@@@Z */
  *(CModelObject **)(this + 0x6c) = param_1;
  *(CModelObject **)(this + 0x74) = param_1;
  return;
}

