
/* void __cdecl LoadStringVar(class CTFileName const &,class CTString &) */

void __cdecl LoadStringVar(CTFileName *param_1,CTString *param_2)

{
                    /* 0x246f0  2553  ?LoadStringVar@@YAXABVCTFileName@@AAVCTString@@@Z */
  CTString::LoadVar(param_2,param_1);
  return;
}

