
/* private: void __thiscall CGfxLibrary::TestExtension_OGL(unsigned long,char const *) */

void __thiscall CGfxLibrary::TestExtension_OGL(CGfxLibrary *this,ulong param_1,char *param_2)

{
  int iVar1;
  
                    /* 0x79220  3805  ?TestExtension_OGL@CGfxLibrary@@AAEXKPBD@Z */
  iVar1 = FUN_36079110();
  if (iVar1 != 0) {
    AddExtension_OGL(this,param_1,param_2);
  }
  return;
}

