
/* public: void __thiscall CModelInstance::AddColisionBox(class CTString,class Vector<float,3>,class
   Vector<float,3>) */

void __thiscall
CModelInstance::AddColisionBox
          (CModelInstance *this,char *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15cb80  961
                       ?AddColisionBox@CModelInstance@@QAEXVCTString@@V?$Vector@M$02@@1@Z */
  puStack_8 = &LAB_3621a14c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_36035f90((undefined4 *)(this + 0x1c));
  FUN_36160440(this + 0x1c,iVar1 + 1);
  this_00 = (undefined4 *)(iVar1 * 0x20 + *(int *)(this + 0x20));
  pcVar2 = StringDuplicate(param_2);
  FUN_36032d10(this_00,pcVar2);
  *this_00 = param_3;
  this_00[1] = param_4;
  this_00[2] = param_5;
  this_00[3] = param_6;
  this_00[4] = param_7;
  this_00[5] = param_8;
  *(undefined4 *)(this + 0xec) = 0;
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

