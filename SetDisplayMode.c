
/* public: int __thiscall CGfxLibrary::SetDisplayMode(enum GfxAPIType,long,long,long,enum
   DisplayDepth) */

int __thiscall
CGfxLibrary::SetDisplayMode
          (CGfxLibrary *this,GfxAPIType param_1,long param_2,long param_3,long param_4,
          DisplayDepth param_5)

{
  int iVar1;
  
                    /* 0x8a2a0  3442
                       ?SetDisplayMode@CGfxLibrary@@QAEHW4GfxAPIType@@JJJW4DisplayDepth@@@Z */
  if (param_1 == 9) {
    param_1 = *(GfxAPIType *)(this + 0xa38);
  }
  StopDisplayMode(this);
  iVar1 = StartDisplayMode(this,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  *(long *)(this + *(int *)(this + 0xa38) * 0x518 + 0x514) = param_2;
  *(long *)(this + 0xa48) = param_2;
  *(long *)(this + 0xa3c) = param_3;
  *(long *)(this + 0xa40) = param_4;
  *(DisplayDepth *)(this + 0xa44) = param_5;
  FUN_360934b0(*(int *)(this + 0xa38));
  if (DAT_362a41ac != 0) {
    FUN_36084630();
  }
  return 1;
}

