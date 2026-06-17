
/* public: int __thiscall CGfxLibrary::ResetDisplayMode(enum GfxAPIType) */

int __thiscall CGfxLibrary::ResetDisplayMode(CGfxLibrary *this,GfxAPIType param_1)

{
  int iVar1;
  
                    /* 0x8a350  3162  ?ResetDisplayMode@CGfxLibrary@@QAEHW4GfxAPIType@@@Z */
  if (param_1 == 9) {
    param_1 = *(GfxAPIType *)(this + 0xa38);
  }
  StopDisplayMode(this);
  iVar1 = StartDisplayMode(this,param_1,0,0,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0xa48) = 0;
  *(undefined4 *)(this + 0xa3c) = 0;
  *(undefined4 *)(this + 0xa40) = 0;
  *(undefined4 *)(this + 0xa44) = 0;
  FUN_360934b0(*(int *)(this + 0xa38));
  FUN_36084650();
  return 1;
}

