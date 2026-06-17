
/* class CTStream & __cdecl operator>>(class CTStream &,class CPlayerCharacter &) */

CTStream * __cdecl operator>>(CTStream *param_1,CPlayerCharacter *param_2)

{
                    /* 0x135580  771  ??5@YAAAVCTStream@@AAV0@AAVCPlayerCharacter@@@Z */
  CPlayerCharacter::Read_t(param_2,param_1);
  return param_1;
}

