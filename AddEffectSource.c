
/* public: void __thiscall CTextureEffectGlobal::AddEffectSource(unsigned long,long,long,long,long)
    */

void __thiscall
CTextureEffectGlobal::AddEffectSource
          (CTextureEffectGlobal *this,ulong param_1,long param_2,long param_3,long param_4,
          long param_5)

{
  int *this_00;
  
                    /* 0x9b620  973  ?AddEffectSource@CTextureEffectGlobal@@QAEXKJJJJ@Z */
  this_00 = FUN_36097be0(this + 0xc,1);
  FUN_36097d50(this_00,(int)this,param_1,param_2,param_3,param_4,param_5);
  return;
}

