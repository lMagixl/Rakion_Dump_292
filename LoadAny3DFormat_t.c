
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CObject3D::LoadAny3DFormat_t(class CTFileName const &,class
   Matrix<float,3,3> const &,enum CObject3D::LoadType) */

void __thiscall
CObject3D::LoadAny3DFormat_t
          (CObject3D *this,CTFileName *param_1,Matrix<float,3,3> *param_2,LoadType param_3)

{
  undefined1 *puVar1;
  int iVar2;
  float local_148 [9];
  char *local_124;
  int local_120;
  CHAR local_11c [260];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0x4ef30  2543
                       ?LoadAny3DFormat_t@CObject3D@@QAEXABVCTFileName@@ABV?$Matrix@M$02$02@@W4LoadType@1@@Z
                        */
  puStack_c = &LAB_362119ce;
  local_10 = ExceptionList;
  local_18 = DAT_362abd90;
  local_14 = &stack0xfffffeac;
  local_120 = DAT_362bf554;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xfffffeac;
  if (DAT_362bf554 == 0) {
    ExceptionList = &local_10;
    BatchLoading_t(1);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_124);
  local_8 = CONCAT31(local_8._1_3_,1);
  wsprintfA(local_11c,&DAT_36227fc4,local_124);
  SendMessageA(DAT_362bf530,0x401,0,(LPARAM)local_11c);
  _DAT_362bf538 = SendMessageA(DAT_362bf530,0x409,0,0);
  if (_DAT_362bf538 == 0) {
    ThrowF_t(s_Unable_to_load_3D_object___s_36228020,*(undefined4 *)param_1);
    goto LAB_3604f0b5;
  }
  DAT_362bf534 = (**(code **)(**(int **)(_DAT_362bf538 + 0xc) + 0xc))
                           (*(int **)(_DAT_362bf538 + 0xc),0);
  if (param_3 == 0) {
    FUN_3604e140((float *)param_2);
    ConvertArraysToO3D(this);
  }
  else {
    if (param_3 == 1) {
      FUN_3604e140((float *)param_2);
      FUN_3604db40(1);
      ConvertArraysToO3D(this);
      FUN_3604e0a0();
      goto LAB_3604f0b5;
    }
    if (param_3 == 2) {
      FUN_3604f120(local_148,0x3f800000);
      FUN_3604e140(local_148);
      iVar2 = FUN_3600c180(&DAT_362bf654);
      if (iVar2 == 0) {
        ThrowF_t(s_Unable_to_import_mapping_from_3D_36227fc8);
      }
      FUN_3604db40(0);
      ConvertArraysToO3D(this);
      FUN_3604e0a0();
      goto LAB_3604f0b5;
    }
  }
  FUN_3604e0a0();
LAB_3604f0b5:
  if (local_120 == 0) {
    BatchLoading_t(0);
  }
  local_8 = local_8 & 0xffffff00;
  StringFree(local_124);
  ExceptionList = local_10;
  return;
}

