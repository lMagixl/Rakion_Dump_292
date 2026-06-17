
/* void __cdecl SaveStringVar(class CTFileName const &,class CTString &) */

void __cdecl SaveStringVar(CTFileName *param_1,CTString *param_2)

{
                    /* 0x23fd0  3198  ?SaveStringVar@@YAXABVCTFileName@@AAVCTString@@@Z */
  CTString::SaveVar(param_2,param_1);
  return;
}

