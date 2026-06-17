
/* public: void __thiscall CPlayerCharacter::Save_t(class CTFileName const &) */

void __thiscall CPlayerCharacter::Save_t(CPlayerCharacter *this,CTFileName *param_1)

{
  CTFileStream local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1356c0  3203  ?Save_t@CPlayerCharacter@@QAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362191c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  CTFileStream::Create_t(local_80,param_1,2);
  Write_t(this,(CTStream *)local_80);
  CTFileStream::Close(local_80);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

