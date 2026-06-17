
/* public: void __thiscall CPlayerCharacter::Load_t(class CTFileName const &) */

void __thiscall CPlayerCharacter::Load_t(CPlayerCharacter *this,CTFileName *param_1)

{
  CTFileStream local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x135640  2559  ?Load_t@CPlayerCharacter@@QAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362191b2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  CTFileStream::Open_t(local_80,param_1,1);
  Read_t(this,(CTStream *)local_80);
  CTFileStream::Close(local_80);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

