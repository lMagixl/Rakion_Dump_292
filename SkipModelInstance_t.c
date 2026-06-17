
/* void __cdecl SkipModelInstance_t(class CTStream &) */

void __cdecl SkipModelInstance_t(CTStream *param_1)

{
  CModelInstance local_128 [284];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x35e00  3640  ?SkipModelInstance_t@@YAXAAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ffba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CModelInstance::CModelInstance(local_128);
  local_4 = 0;
  ReadModelInstance_t(param_1,local_128,0);
  local_4 = 0xffffffff;
  CModelInstance::~CModelInstance(local_128);
  ExceptionList = local_c;
  return;
}

