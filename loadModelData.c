
/* public: void __thiscall LoadModelMng::loadModelData(class CEntity &,enum ModelState::Enum const
   &,class CTString const &) */

void __thiscall
LoadModelMng::loadModelData(LoadModelMng *this,CEntity *param_1,Enum *param_2,CTString *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x133ba0  4240
                       ?loadModelData@LoadModelMng@@QAEXAAVCEntity@@ABW4Enum@ModelState@@ABVCTString@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219037;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  puVar1 = (undefined4 *)FUN_361bf99c(0xc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[1] = *param_2;
    local_14 = puVar1;
    pcVar2 = StringDuplicate(*(char **)param_3);
    puVar1[2] = pcVar2;
  }
  local_4 = 0xffffffff;
  local_14 = puVar1;
  FUN_36134710(&local_10,puVar1);
  local_4 = 1;
  FUN_36134600(this + 0x14,&local_14);
  local_4 = 0xffffffff;
  if (local_10 != (int *)0x0) {
    FUN_3600cd20(local_10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  ExceptionList = local_c;
  return;
}

