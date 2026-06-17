
/* public: void __thiscall CGfxLibrary::GetCurrentDisplayMode(class CDisplayMode &) */

void __thiscall CGfxLibrary::GetCurrentDisplayMode(CGfxLibrary *this,CDisplayMode *param_1)

{
                    /* 0x1d80  1815  ?GetCurrentDisplayMode@CGfxLibrary@@QAEXAAVCDisplayMode@@@Z */
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0xa3c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xa40);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0xa44);
  return;
}

