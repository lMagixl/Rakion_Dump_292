
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Release */

void __cdecl __onexit(_onexit_t param_1)

{
  if (DAT_363884b8 == -1) {
                    /* WARNING: Could not recover jumptable at 0x361c0083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_363884b8,&DAT_363884b4);
  return;
}

