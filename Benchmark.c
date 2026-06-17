
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGfxLibrary::Benchmark(class CViewPort *,class CDrawPort *) */

void __thiscall CGfxLibrary::Benchmark(CGfxLibrary *this,CViewPort *param_1,CDrawPort *param_2)

{
  HANDLE hProcess;
  HANDLE hThread;
  undefined4 *puVar1;
  int iVar2;
  char *local_30;
  char *local_2c;
  DWORD local_28;
  int local_24;
  HANDLE local_20;
  HANDLE local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
                    /* 0x614a0  1085  ?Benchmark@CGfxLibrary@@QAEXPAVCViewPort@@PAVCDrawPort@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_36211d13;
  local_14 = ExceptionList;
  DAT_362bf884 = param_1;
  DAT_362bf87c = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc);
  DAT_362bf888 = param_2;
  DAT_362bf880 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 8);
  iVar2 = *(int *)(_pGfx + 0xab8) + -3;
  if (*(int *)(_pGfx + 0xae0) <= *(int *)(_pGfx + 0xab8) + -3) {
    iVar2 = *(int *)(_pGfx + 0xae0);
  }
  if (8 < iVar2) {
    iVar2 = 8;
  }
  ExceptionList = &local_14;
  hProcess = GetCurrentProcess();
  local_1c = hProcess;
  hThread = GetCurrentThread();
  local_20 = hThread;
  local_28 = GetPriorityClass(hProcess);
  local_24 = GetThreadPriority(hThread);
  SetPriorityClass(hProcess,0x100);
  SetThreadPriority(hThread,0xf);
  local_c = 0;
  local_30 = StringDuplicate(&DAT_36228350);
  local_c = CONCAT31(local_c._1_3_,1);
  if (*(int *)(_pGfx + 0xa38) == 0) {
    local_2c = StringDuplicate(s_OpenGL_36228354);
    StringFree(local_30);
    local_30 = local_2c;
  }
  else if (*(int *)(_pGfx + 0xa38) == 1) {
    local_2c = StringDuplicate(s_Direct3D_3622835c);
    StringFree(local_30);
    local_30 = local_2c;
  }
  CPrintF(s__________________________________36228368);
  CPrintF(s__s_performance_testing_____36228390,local_30);
  FUN_360607e0();
  FUN_36061080();
  CPrintF(s_____Texture_upload_362283ac);
  DAT_362bf870 = DAT_362c9b54;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_RGBA8_full___5_01f_____5_02f_Mte_362283c4,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf89c = 1;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_sub___5_01f_____5_02f_Mtex_s_362283ec,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf870 = DAT_362c9b50;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_RGB8_full___5_01f_____5_02f_Mtex_36228410,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf89c = 1;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_sub___5_01f_____5_02f_Mtex_s_36228438,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf870 = DAT_362c9b5c;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_RGBA4_full___5_01f_____5_02f_Mte_3622845c,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf89c = 1;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_sub___5_01f_____5_02f_Mtex_s_36228484,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf870 = DAT_362c9b60;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_RGB5A1_full___5_01f_____5_02f_Mt_362284a8,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf89c = 1;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_sub___5_01f_____5_02f_Mtex_s_362284d0,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf870 = DAT_362c9b58;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_RGB5_full___5_01f_____5_02f_Mtex_362284f4,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf89c = 1;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_sub___5_01f_____5_02f_Mtex_s_3622851c,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf870 = DAT_362c9b64;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_LA8_full___5_01f_____5_02f_Mtex__36228540,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf89c = 1;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_sub___5_01f_____5_02f_Mtex_s_36228568,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf870 = DAT_362c9b68;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_L8_full___5_01f_____5_02f_Mtex_s_3622858c,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  DAT_362bf89c = 1;
  FUN_36060940(FUN_360608a0,9);
  CPrintF(s_sub___5_01f_____5_02f_Mtex_s_362285b4,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  if (((byte)_pGfx[0xa54] & 8) != 0) {
    DAT_362bf870 = DAT_362c9b70;
    DAT_362bf89c = 0;
    FUN_36060940(FUN_360608a0,3);
    CPrintF(s_RGB_C_full___5_01f_____5_02f_Mte_362285d8,_DAT_362bf868 * _DAT_36223438,
            _DAT_362bf860 * _DAT_36223438);
    DAT_362bf870 = DAT_362c9b74;
    DAT_362bf89c = 0;
    FUN_36060940(FUN_360608a0,3);
    CPrintF(s_RGBA_C_full___5_01f_____5_02f_Mt_36228600,_DAT_362bf868 * _DAT_36223438,
            _DAT_362bf860 * _DAT_36223438);
    if (DAT_362c9b74 != DAT_362c9b78) {
      DAT_362bf870 = DAT_362c9b78;
      DAT_362bf89c = 0;
      FUN_36060940(FUN_360608a0,3);
      CPrintF(s_RGBA_I_full___5_01f_____5_02f_Mt_36228628,_DAT_362bf868 * _DAT_36223438,
              _DAT_362bf860 * _DAT_36223438);
    }
  }
  DAT_362bf870 = DAT_362c9b58;
  DAT_362bf89c = 0;
  FUN_36060940(FUN_360608a0,1);
  CPrintF(s_____Fill_rate_36228650);
  DAT_362bf88c = 0;
  DAT_362bf894 = 0;
  DAT_362bf898 = 0;
  FUN_36060940(FUN_36060d30,9);
  puVar1 = FUN_360606a0(&local_2c);
  local_c._0_1_ = 2;
  CPrintF(s___38s__6_01f_____5_02f_Mpix_s_36228660,*puVar1,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  local_c._0_1_ = 1;
  StringFree(local_2c);
  DAT_362bf88c = 0;
  DAT_362bf894 = 0;
  DAT_362bf898 = 1;
  FUN_36060940(FUN_36060d30,9);
  puVar1 = FUN_360606a0(&local_2c);
  local_c._0_1_ = 3;
  CPrintF(s___38s__6_01f_____5_02f_Mpix_s_36228680,*puVar1,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  local_c._0_1_ = 1;
  StringFree(local_2c);
  DAT_362bf88c = 1;
  DAT_362bf894 = 1;
  DAT_362bf898 = 1;
  FUN_36060940(FUN_36060d30,9);
  puVar1 = FUN_360606a0(&local_2c);
  local_c._0_1_ = 4;
  CPrintF(s___38s__6_01f_____5_02f_Mpix_s_362286a0,*puVar1,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  local_c._0_1_ = 1;
  StringFree(local_2c);
  DAT_362bf88c = 0;
  DAT_362bf894 = 1;
  DAT_362bf898 = 1;
  FUN_36060940(FUN_36060d30,9);
  puVar1 = FUN_360606a0(&local_2c);
  local_c._0_1_ = 5;
  CPrintF(s___38s__6_01f_____5_02f_Mpix_s_362286c0,*puVar1,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  local_c = CONCAT31(local_c._1_3_,1);
  StringFree(local_2c);
  if ((1 < iVar2) && (DAT_362bf898 = 2, 1 < iVar2)) {
    do {
      FUN_36060940(FUN_36060d30,9);
      puVar1 = FUN_360606a0(&local_2c);
      local_c._0_1_ = 6;
      CPrintF(s___38s__6_01f_____5_02f_Mpix_s_362286e0,*puVar1,_DAT_362bf868 * _DAT_36223438,
              _DAT_362bf860 * _DAT_36223438);
      local_c = CONCAT31(local_c._1_3_,1);
      StringFree(local_2c);
      DAT_362bf898 = DAT_362bf898 + 1;
    } while (DAT_362bf898 <= iVar2);
  }
  local_2c = (char *)(DAT_362bf880 / DAT_362a2ac4);
  DAT_362bf88c = 0;
  DAT_362bf894 = 0;
  DAT_362bf898 = 0;
  CPrintF(s_____Geometry_speed___dpix_tris__36228700);
  DAT_362bf898 = 0;
  FUN_36060940(FUN_36061000,5);
  puVar1 = FUN_360606a0(&local_2c);
  local_c._0_1_ = 7;
  CPrintF(s___38s__5_02f_____4_02f_Mtri_s_36228724,*puVar1,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  local_c._0_1_ = 1;
  StringFree(local_2c);
  DAT_362bf898 = 1;
  FUN_36060940(FUN_36061000,5);
  puVar1 = FUN_360606a0(&local_2c);
  local_c._0_1_ = 8;
  CPrintF(s___38s__5_02f_____4_02f_Mtri_s_36228744,*puVar1,_DAT_362bf868 * _DAT_36223438,
          _DAT_362bf860 * _DAT_36223438);
  local_c = CONCAT31(local_c._1_3_,1);
  StringFree(local_2c);
  if ((1 < iVar2) && (DAT_362bf898 = 2, 1 < iVar2)) {
    do {
      FUN_36060940(FUN_36061000,5);
      puVar1 = FUN_360606a0(&local_2c);
      local_c._0_1_ = 9;
      CPrintF(s___38s__5_02f_____4_02f_Mtri_s_36228764,*puVar1,_DAT_362bf868 * _DAT_36223438,
              _DAT_362bf860 * _DAT_36223438);
      local_c = CONCAT31(local_c._1_3_,1);
      StringFree(local_2c);
      DAT_362bf898 = DAT_362bf898 + 1;
    } while (DAT_362bf898 <= iVar2);
  }
  CPrintF(&DAT_36228784);
  CDrawPort::Fill(DAT_362bf888,0xff);
  CViewPort::SwapBuffers(DAT_362bf884,0);
  CDrawPort::Fill(DAT_362bf888,0xff);
  CViewPort::SwapBuffers(DAT_362bf884,0);
  FUN_360613e0();
  FUN_36060870();
  local_c = local_c & 0xffffff00;
  StringFree(local_30);
  SetPriorityClass(local_1c,local_28);
  SetThreadPriority(local_20,local_24);
  ExceptionList = local_14;
  return;
}

