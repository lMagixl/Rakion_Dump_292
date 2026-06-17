
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CGfxLibrary::InitContext_OGL(void) */

void __thiscall CGfxLibrary::InitContext_OGL(CGfxLibrary *this)

{
  CTString *this_00;
  uint uVar1;
  char *pcVar2;
  HDC hdc;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  void *pvStack_124;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 *puStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x79530  2311  ?InitContext_OGL@CGfxLibrary@@AAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36211f20;
  pvStack_c = ExceptionList;
  DAT_362c4508 = 0;
  DAT_362c4528 = 1;
  DAT_362c450c = 0;
  DAT_362c452c = 1;
  _DAT_362c4510 = 0;
  _DAT_362c4530 = 1;
  _DAT_362c4514 = 0;
  _DAT_362c4534 = 1;
  _DAT_362c4518 = 0;
  _DAT_362c4538 = 1;
  _DAT_362c451c = 0;
  _DAT_362c453c = 1;
  _DAT_362c4520 = 0;
  _DAT_362c4540 = 1;
  _DAT_362c4524 = 0;
  _DAT_362c4544 = 1;
  DAT_362c44d4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(this + 0xab8) = 0x10;
  uStack_48 = 0xde1;
  _DAT_362c455c = 0;
  _DAT_362c4558 = 0;
  _DAT_362c4554 = 0;
  _DAT_362c4550 = 0;
  _DAT_362c454c = 0;
  _DAT_362c4548 = 0;
  DAT_362a4010 = 1;
  DAT_362c44d0 = 0;
  DAT_362a4008 = 1;
  DAT_362a4028 = 0xbc614e;
  uStack_4c = 0x36079610;
  (*DAT_362c3da4)();
  uStack_4c = 0xbd0;
  DAT_362c4508 = 1;
  uStack_50 = 0x36079621;
  (*DAT_362c3da4)();
  uStack_50 = 0xbe2;
  DAT_362a4000 = 1;
  uStack_54 = 0x36079632;
  (*DAT_362c3da8)();
  uStack_54 = 0xb71;
  DAT_362a4004 = 0;
  uStack_58 = 0x36079643;
  (*DAT_362c3da8)();
  uStack_58 = 0xbc0;
  DAT_362c44b8 = 0;
  uStack_5c = 0x36079654;
  (*DAT_362c3da8)();
  uStack_5c = 0xb50;
  DAT_362c44c0 = 0;
  uStack_60 = 0x36079665;
  (*DAT_362c3da8)();
  uStack_60 = 0x3000;
  DAT_362c44c4 = 0;
  uStack_64 = 0x36079676;
  (*DAT_362c3da8)();
  uStack_64 = 0xb44;
  DAT_362c44c8 = 0;
  uStack_68 = 0x36079687;
  (*DAT_362c3da8)();
  uStack_68 = 0x901;
  DAT_362a4020 = 0x3d;
  uStack_6c = 0x3607969c;
  (*DAT_362c3d68)();
  uStack_6c = 0;
  DAT_362a400c = 1;
  uStack_70 = 0x360796a9;
  (*DAT_362c3df8)();
  uStack_70 = 0x203;
  DAT_362c44bc = 0;
  uStack_74 = 0x360796ba;
  (*DAT_362c3df4)();
  uStack_74 = 1;
  uStack_78 = 1;
  DAT_362a401c = 0x2b;
  uStack_80 = CONCAT44(0x360796cc,(undefined4)uStack_80);
  (*DAT_362c3d5c)();
  uStack_80 = _DAT_36227d28;
  DAT_362a4018 = 0x15;
  uStack_88 = _DAT_36227d98;
  DAT_362a4014 = 0x15;
  puStack_8c = (undefined4 *)0x360796f7;
  (*DAT_362c3dfc)();
  _DAT_362c44d8 = 0;
  puStack_8c = &uStack_60;
  uStack_90 = 0xb53;
  _DAT_362c44dc = 0x3f800000;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  iStack_94 = 0x36079727;
  (*DAT_362c40f4)();
  iVar5 = 0;
  do {
    iStack_94 = iVar5 + 0x4000;
    (&DAT_362c44e8)[iVar5] = 0;
    uStack_98 = 0x36079744;
    (*DAT_362c3da8)();
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  iStack_94 = 0x5b;
  uStack_98 = 0x36079752;
  (*DAT_362c4678)();
  iStack_94 = 0x1d01;
  uStack_98 = 0x36079760;
  (*DAT_362c40d0)();
  uStack_98 = 0xc11;
  uStack_9c = 0x3607976b;
  (*DAT_362c3da4)();
  uStack_9c = 0x405;
  uStack_a0 = 0x36079776;
  (*DAT_362c3d9c)();
  uStack_a0 = 0x3f000000;
  uStack_a4 = 0x206;
  uStack_a8 = 0x36079786;
  (*DAT_362c3d58)();
  uStack_a8 = 0x3f800000;
  uStack_ac = 0x3f800000;
  uStack_b0 = 0x3f800000;
  uStack_b4 = 0x3f800000;
  uStack_b8 = 0x360797a0;
  (*DAT_362c3f4c)();
  uStack_b8 = 0x1700;
  uStack_bc = 0x360797ab;
  (*DAT_362c3e08)();
  uStack_bc = 0x360797b1;
  (*DAT_362c3e20)();
  uStack_bc = 0x1702;
  uStack_c0 = 0x360797bc;
  (*DAT_362c3e08)();
  uStack_c0 = 0x360797c2;
  (*DAT_362c3e20)();
  uStack_c0 = 0x8074;
  uStack_c4 = 0x360797cd;
  (*DAT_362c3db0)();
  uStack_c4 = 0x8075;
  uStack_c8 = 0x360797d8;
  (*DAT_362c3db4)();
  uStack_c8 = 0x8078;
  uStack_cc = 0x360797e3;
  (*DAT_362c3db4)();
  uStack_cc = 0x8076;
  uStack_d0 = 0x360797ee;
  (*DAT_362c3db4)();
  uStack_d0 = 1;
  DAT_362c44cc = 0;
  (*DAT_362c4120)();
  (*DAT_362c4120)();
  iVar5 = *(int *)(this + 0xa48);
  pcVar2 = (char *)(*DAT_362c3de0)();
  pcVar2 = StringDuplicate(pcVar2);
  StringFree(*(char **)(this + iVar5 * 0x144 + 0x138));
  fVar8 = 1.11221e-41;
  *(char **)(this + iVar5 * 0x144 + 0x138) = pcVar2;
  pcVar2 = (char *)(*DAT_362c3de0)();
  pcVar2 = StringDuplicate(pcVar2);
  StringFree(*(char **)(this + iVar5 * 0x144 + 0x13c));
  uVar7 = 0x1f02;
  *(char **)(this + iVar5 * 0x144 + 0x13c) = pcVar2;
  pcVar2 = (char *)(*DAT_362c3de0)();
  pcVar2 = StringDuplicate(pcVar2);
  StringFree(*(char **)(this + iVar5 * 0x144 + 0x140));
  *(char **)(this + iVar5 * 0x144 + 0x140) = pcVar2;
  pcVar2 = (char *)(*DAT_362c3de0)();
  pcVar2 = StringDuplicate(pcVar2);
  StringFree(*(char **)(this + 0xac8));
  *(char **)(this + 0xac8) = pcVar2;
  pcVar2 = Translate(s_ETRS___OpenGL_context_created____3622ab30,4);
  CPrintF(pcVar2);
  CPrintF(s___s___s___s__3622ab74);
  this_00 = (CTString *)(this + 0xad0);
  pcVar2 = StringDuplicate(&DAT_3622ab85);
  StringFree(*(char **)this_00);
  *(char **)this_00 = pcVar2;
  pcVar2 = StringDuplicate(&DAT_3622ab86);
  pvStack_124 = (void *)0x3607991e;
  StringFree(*(char **)(this + 0xacc));
  *(char **)(this + 0xacc) = pcVar2;
  DAT_362c3d3c = (code *)(*DAT_362c4438)();
  if (DAT_362c3d3c != (code *)0x0) {
    AddExtension_OGL(this,0,s_WGL_ARB_extensions_string_3622aba4);
    FUN_3609c160(&uStack_d0,(HWND)**(undefined4 **)(this + 0xa30));
    uStack_b0 = 0;
    pcVar2 = (char *)(*DAT_362c3d3c)();
    pcVar2 = StringDuplicate(pcVar2);
    StringFree(*(char **)(this + 0xacc));
    *(char **)(this + 0xacc) = pcVar2;
    uStack_b0 = 0xffffffff;
    FUN_3609c180(&uStack_d0);
  }
  uVar1 = *(uint *)(this + 0xa54);
  bVar6 = DAT_362c3d40 == 0;
  *(uint *)(this + 0xa54) = uVar1 & 0xfffffffb;
  if ((bVar6) && ((uVar1 & 0x200) != 0)) {
    hdc = GetDC((HWND)0x0);
    BVar3 = GetDeviceGammaRamp(hdc,&DAT_362c4d90);
    if (BVar3 == 0) {
      pcVar2 = Translate(s_ETRS_WARNING__Gamma__brightness_a_3622abc0,4);
      CPrintF(pcVar2);
    }
    else {
      *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 4;
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  *(undefined4 *)(this + 0xadc) = 1;
  *(undefined4 *)(this + 0xae0) = 1;
  DAT_362c446c = 0;
  DAT_362c4470 = 0;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    (*DAT_362c3dc4)();
    if ((*(int *)(this + 0xae0) < 2) || (iVar5 = FUN_36079110(), iVar5 == 0)) {
      pcVar2 = Translate(s_ETRS_GL_TEXTURE_ENV_COMBINE_exte_3622ac98,4);
      CPrintF(pcVar2);
    }
    else {
      AddExtension_OGL(this,0,s_GL_ARB_multitexture_3622ac34);
      AddExtension_OGL(this,0,s_GL_EXT_texture_env_combine_3622ac48);
      DAT_362c446c = (*DAT_362c4438)();
      DAT_362c4470 = (*DAT_362c4438)();
      iVar5 = *(int *)(this + 0xae0);
      if (3 < iVar5) {
        iVar5 = 4;
      }
      *(int *)(this + 0xadc) = iVar5;
    }
  }
  TestExtension_OGL(this,0x10000000,s_GL_EXT_texture_compression_s3tc_3622acec);
  TestExtension_OGL(this,0x20000000,s_GL_3DFX_texture_compression_FXT1_3622ad0c);
  TestExtension_OGL(this,0x40000000,s_GL_S3_s3tc_3622ad30);
  DAT_362c3d08 = 0;
  _DAT_362c3d04 = 0;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    AddExtension_OGL(this,0x8000000,s_GL_ARB_texture_compression_3622ad58);
    DAT_362c3d08 = (*DAT_362c4438)();
    _DAT_362c3d04 = (*DAT_362c4438)();
  }
  uVar1 = *(uint *)(this + 0xa54);
  uVar4 = uVar1 & 0xfffffff7;
  *(uint *)(this + 0xa54) = uVar4;
  if ((uVar1 & 0x78000000) != 0) {
    *(uint *)(this + 0xa54) = uVar4 | 8;
  }
  (*DAT_362c3dc4)();
  *(undefined4 *)(this + 0xaf8) = 0xffffff;
  *(undefined4 *)(this + 0xae8) = 0;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    AddExtension_OGL(this,0,s_GL_EXT_texture_lod_bias_3622adc4);
    (*DAT_362c3dc0)();
    iVar5 = (*DAT_362c3ddc)();
    if (((iVar5 != 0) || (fVar8 < _DAT_362287b0)) || (_DAT_3622879c < fVar8)) {
      fVar8 = 4.0;
    }
    *(float *)(this + 0xae8) = fVar8;
  }
  *(undefined4 *)(this + 0xaec) = 1;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    AddExtension_OGL(this,0,s_GL_EXT_texture_filter_anisotropi_3622ae00);
    (*DAT_362c3dc4)();
    *(undefined4 *)(this + 0xaec) = uVar7;
  }
  DAT_362c445c = 0;
  DAT_362c4460 = 0;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    AddExtension_OGL(this,0x200000,s_GL_EXT_compiled_vertex_array_3622ae44);
    DAT_362c445c = (*DAT_362c4438)();
    DAT_362c4460 = (*DAT_362c4438)();
  }
  DAT_362c4464 = 0;
  DAT_362c4468 = 0;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    AddExtension_OGL(this,0x20,s_WGL_EXT_swap_control_3622aea0);
    DAT_362c4464 = (*DAT_362c4438)();
    DAT_362c4468 = (*DAT_362c4438)();
  }
  DAT_362a4030 = 0xffffffff;
  DAT_362c45e8 = 0;
  DAT_362c3d10 = 0;
  _DAT_362c3d0c = 0;
  *(undefined4 *)(this + 0xaf4) = 0;
  *(undefined4 *)(this + 0xaf0) = 0;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    AddExtension_OGL(this,0,s_GL_ATI_pn_triangles_3622aef8);
    DAT_362c3d10 = (*DAT_362c4438)();
    _DAT_362c3d0c = (*DAT_362c4438)();
    (*DAT_362c3dc4)();
    *(undefined4 *)(this + 0xaf0) = uVar7;
  }
  TestExtension_OGL(this,0x100000,s_GL_EXT_texture_edge_clamp_3622af34);
  TestExtension_OGL(this,0x400000,s_GL_EXT_clip_volume_hint_3622af50);
  DAT_362c3d2c = (code *)0x0;
  DAT_362c3d28 = 0;
  DAT_362c3d24 = 0;
  DAT_362c3d20 = 0;
  DAT_362c3d1c = 0;
  _DAT_362c3d18 = 0;
  _DAT_362c3d14 = 0;
  iVar5 = FUN_36079110();
  if (iVar5 != 0) {
    AddExtension_OGL(this,0x800000,s_GL_NV_occlusion_query_3622af80);
    DAT_362c3d2c = (code *)(*DAT_362c4438)();
    DAT_362c3d28 = (*DAT_362c4438)();
    DAT_362c3d24 = (*DAT_362c4438)();
    DAT_362c3d20 = (*DAT_362c4438)();
    DAT_362c3d1c = (*DAT_362c4438)();
    _DAT_362c3d18 = (*DAT_362c4438)();
    _DAT_362c3d14 = (*DAT_362c4438)();
  }
  iVar5 = CTString::operator==(this_00,&DAT_3622b045);
  if (iVar5 != 0) {
    pcVar2 = StringDuplicate(&DAT_3622b048);
    StringFree(*(char **)this_00);
    *(char **)this_00 = pcVar2;
  }
  (*DAT_362c41cc)();
  (*DAT_362c41d4)();
  pvStack_124 = (void *)0x8058;
  iVar5 = 0xde1;
  (*DAT_362c41c4)(0xde1,0);
  *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 0xffffffef;
  (*DAT_362c41bc)(0xde1,0,0x805d,&stack0xfffffee4);
  if (iVar5 == 8) {
    *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 0x10;
  }
  (*DAT_362c41d0)(1,&pvStack_124);
  (*DAT_362c41cc)(1,&DAT_362c3b2c);
  (*DAT_362c41cc)(1,&DAT_362c3b64);
  DAT_362c3b34 = 0;
  DAT_362c3b38 = 0;
  DAT_362c3b4c = 0;
  (*DAT_362c41cc)(1,&DAT_362c46fc);
  DAT_362c4700 = 0;
  _DAT_362c4720 = 0;
  _DAT_362c4724 = 0;
  _DAT_362c4730 = 0;
  _DAT_362c472c = 0;
  FUN_360831b0();
  _tpGlobal = (CTexParams *)0x0;
  DAT_362c556c = 0;
  DAT_362c5578 = 0;
  DAT_362c5574 = 0;
  _DAT_362c557c = 0;
  _DAT_362c5580 = 0;
  _DAT_362c558c = 0;
  _DAT_362c5588 = 0;
  _DAT_362c5590 = 0;
  _DAT_362c5594 = 0;
  _DAT_362c55a0 = 0;
  _DAT_362c559c = 0;
  _DAT_362c55a4 = 0;
  _DAT_362c55a8 = 0;
  _DAT_362c55b4 = 0;
  _DAT_362c55b0 = 0;
  _DAT_362c55b8 = 0;
  _DAT_362c55bc = 0;
  _DAT_362c55c8 = 0;
  _DAT_362c55c4 = 0;
  _DAT_362c55cc = 0;
  _DAT_362c55d0 = 0;
  _DAT_362c55dc = 0;
  _DAT_362c55d8 = 0;
  _DAT_362c55e0 = 0;
  _DAT_362c55e4 = 0;
  _DAT_362c55f0 = 0;
  _DAT_362c55ec = 0;
  _DAT_362c55f4 = 0;
  _DAT_362c55f8 = 0;
  _DAT_362c5604 = 0;
  _DAT_362c5600 = 0;
  DAT_362c4560 = 0;
  *(undefined4 *)(this + 0xabc) = 0;
  *(undefined4 *)(this + 0xac0) = 0;
  FUN_3607b680((int *)&DAT_362a40d0,(int *)&DAT_362a40d4);
  FUN_3607b880((float *)&DAT_362a40d8);
  DAT_362c4d70 = AllocMemory(0x800);
  if ((*(uint *)(this + 0xa54) & 0x800000) == 0) {
    iVar5 = 0;
    do {
      *(int *)((int)DAT_362c4d70 + iVar5 * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x200);
  }
  else {
    (*DAT_362c3d2c)(0x200,DAT_362c4d70);
  }
  DAT_362b8cfc = 1;
  *(undefined4 *)(this + 0xb30) = 0;
  FUN_36085350();
  FUN_36086760();
  FUN_360866c0();
  if (DAT_362c53b8 != 0) {
    FUN_360f2e60();
  }
  ExceptionList = pvStack_124;
  return;
}

