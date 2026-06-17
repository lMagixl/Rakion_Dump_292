
void __cdecl FUN_36033ad0(CTStream *param_1,int param_2)

{
  CSoundObject local_ac [160];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fdc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSoundObject::CSoundObject(local_ac);
  local_4 = 0;
  CSoundObject::Read_t(local_ac,param_1,param_2);
  local_4 = 0xffffffff;
  CSoundObject::~CSoundObject(local_ac);
  ExceptionList = local_c;
  return;
}

