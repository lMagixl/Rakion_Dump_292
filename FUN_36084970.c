
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36084970(void)

{
  double dVar1;
  CGfxLibrary *pCVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212015;
  local_c = ExceptionList;
  iVar4 = *(int *)(_pGfx + 0xa38);
  ExceptionList = &local_c;
  CPrintF(&DAT_3622b5e4);
  if (((*(int *)(_pGfx + 0xac4) == 0) && (*(int *)(_pGfx + 0xa5c) == 0)) || (iVar4 == -1)) {
    pcVar3 = Translate(s_ETRSDisplay_driver_hasn_t_been_i_3622b5e8,4);
    CPrintF(pcVar3);
    ExceptionList = local_c;
    return;
  }
  CPrintF(s___Graphics_API__3622b618);
  if (iVar4 == 0) {
    pcVar3 = s_OpenGL_3622b62c;
  }
  else {
    pcVar3 = s_Direct3D_3622b634;
  }
  CPrintF(pcVar3);
  CPrintF(s___Adapters_found___d_3622b640,*(undefined4 *)(_pGfx + iVar4 * 0x518 + 0x510));
  CPrintF(&DAT_3622b658);
  pCVar2 = _pGfx;
  iVar6 = *(int *)(_pGfx + 0xa48) * 0x144 + iVar4 * 0x518;
  if (iVar4 == 0) {
    CPrintF(s___Vendor___s_3622b65c,*(undefined4 *)(_pGfx + iVar6 + 0x138));
  }
  CPrintF(s___Renderer___s_3622b66c,*(undefined4 *)(pCVar2 + iVar6 + 0x13c));
  CPrintF(s___Version___s_3622b67c,*(undefined4 *)(pCVar2 + iVar6 + 0x140));
  CPrintF(&DAT_3622b68c);
  CPrintF(s___Z_buffer_precision__3622b690);
  if (*(int *)(_pGfx + 0xa4c) == 0) {
    CPrintF(s_default_3622b6a8);
  }
  else {
    CPrintF(s__d_bits_3622b6b4,*(int *)(_pGfx + 0xa4c));
  }
  CPrintF(s___32_bit_textures__3622b6c0);
  if (((byte)_pGfx[0xa54] & 0x10) == 0) {
    pcVar3 = s_not_supported_3622b6e0;
  }
  else {
    pcVar3 = s_supported_3622b6d4;
  }
  CPrintF(pcVar3);
  CPrintF(s___Grayscale_textures__3622b6f0);
  if (DAT_362a40e8 == 0) {
    pcVar3 = s_not_allowed_3622b714;
  }
  else {
    pcVar3 = s_allowed_3622b708;
  }
  CPrintF(pcVar3);
  CPrintF(s___Max_texture_dimension___d_pixe_3622b724,*(undefined4 *)(_pGfx + 0xad4));
  CPrintF(s___Multi_texturing__3622b748);
  if (*(int *)(_pGfx + 0xae0) < 2) {
    pcVar3 = s_not_supported_3622b75c;
LAB_36084bcf:
    CPrintF(pcVar3);
  }
  else {
    if (DAT_362a40cc < 2) {
      CPrintF(s_disabled_3622b790);
    }
    else {
      CPrintF(s_enabled__using__d_texture_units__3622b76c,DAT_362a40cc);
    }
    CPrintF(s___Texture_units___d_3622b79c,*(undefined4 *)(_pGfx + 0xae0));
    if (*(int *)(_pGfx + 0xae0) <= *(int *)(_pGfx + 0xadc)) {
      pcVar3 = &DAT_3622b7c4;
      goto LAB_36084bcf;
    }
    CPrintF(s___d_can_be_used__3622b7b0,*(int *)(_pGfx + 0xadc));
  }
  if (*(int *)(_pGfx + 0xaec) < 2) {
    CPrintF(s___Anisotropic_texture_filtering__3622b7e8);
  }
  else {
    CPrintF(s___Texture_anisotropy___d_of__d_3622b7c8,DAT_362c556c,*(int *)(_pGfx + 0xaec));
  }
  if (*(float *)(_pGfx + 0xae8) <= _DAT_3622376c) {
    CPrintF(s___Texture_LOD_biasing__not_suppo_3622b840);
  }
  else {
    dVar1 = (double)*(float *)(_pGfx + 0xae8);
    CPrintF(s___Texture_LOD_bias____1f_of______3622b818,SUB84((double)*(float *)(_pGfx + 0xae4),0),
            (int)((ulonglong)(double)*(float *)(_pGfx + 0xae4) >> 0x20),SUB84(dVar1,0),
            (int)((ulonglong)dVar1 >> 0x20));
  }
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      ExceptionList = local_c;
      return;
    }
    CPrintF(s___Hardware_T_L__3622bb1c);
    if ((*(uint *)(_pGfx + 0xa54) & 0x400) == 0) {
      pcVar3 = s_not_present_3622bb64;
LAB_360850a3:
      CPrintF(pcVar3);
    }
    else {
      if (*(int *)(_pGfx + 0xab8) < 4) {
        pcVar3 = s_cannot_be_used_3622bb30;
        goto LAB_360850a3;
      }
      if ((*(uint *)(_pGfx + 0xa54) & 0x800) == 0) {
        pcVar3 = s_disabled_3622bb58;
        goto LAB_360850a3;
      }
      CPrintF(s_enabled___d_streams__3622bb40,*(int *)(_pGfx + 0xab8));
    }
    local_10 = (char *)FUN_36072c80(*(int *)(_pGfx + 0xaa8));
    CPrintF(s___Vertex_buffer_size____1f_KB____3622bb74,
            SUB84((double)((float)(int)local_10 * _DAT_362265a4),0),
            (int)((ulonglong)(double)((float)(int)local_10 * _DAT_362265a4) >> 0x20),
            *(undefined4 *)(_pGfx + 0xaa8));
    CPrintF(s___N_Patches__3622bba4);
    if (*(int *)(_pGfx + 0xaf0) < 1) {
      pcVar3 = s_not_supported_3622bc40;
LAB_3608517a:
      CPrintF(pcVar3);
    }
    else {
      if ((*(uint *)(_pGfx + 0xa54) & 0x800) == 0) {
        pcVar3 = s_not_possible_with_SW_T_L_3622bbb4;
        goto LAB_3608517a;
      }
      if (*(int *)(_pGfx + 0xaf4) < 1) {
        pcVar3 = s_disabled_3622bc34;
        goto LAB_3608517a;
      }
      CPrintF(s_enabled_3622bbd0);
      if (DAT_362c53f4 == 0) {
        pcVar3 = s__only_for_Truform_ready_models__3622bbf0;
      }
      else {
        pcVar3 = s__for_all_models__3622bbdc;
      }
      CPrintF(pcVar3);
      CPrintF(s___Tesselation_level___d_of__d_3622bc14,*(undefined4 *)(_pGfx + 0xaf4),
              *(undefined4 *)(_pGfx + 0xaf0));
    }
    CPrintF(s___Texture_compression__3622bc50);
    if (((byte)_pGfx[0xa54] & 8) == 0) {
      pcVar3 = s_not_supported_3622bc74;
    }
    else {
      pcVar3 = s_supported_3622bc68;
    }
    CPrintF(pcVar3);
    CPrintF(s___Custom_clip_plane__3622bc84);
    if ((*(uint *)(_pGfx + 0xa54) & 0x1000) == 0) {
      pcVar3 = s_not_supported_3622bca8;
    }
    else {
      pcVar3 = s_supported_3622bc9c;
    }
    CPrintF(pcVar3);
    CPrintF(s___Color_masking__3622bcb8);
    if ((*(uint *)(_pGfx + 0xa54) & 0x2000) == 0) {
      pcVar3 = s_not_supported_3622bcd8;
    }
    else {
      pcVar3 = s_supported_3622bccc;
    }
    CPrintF(pcVar3);
    CPrintF(s___Depth_biasing__3622bce8);
    if ((*(uint *)(_pGfx + 0xa54) & 0x4000) == 0) {
      pcVar3 = s_not_supported_3622bd08;
    }
    else {
      pcVar3 = s_supported_3622bcfc;
    }
    CPrintF(pcVar3);
    CPrintF(s___Occlusion_culling__3622bd18);
    if (*(int *)(_pGfx + 0xa38) == 0) {
      uVar5 = *(uint *)(_pGfx + 0xa54) & 0x800000;
LAB_36085282:
      if (uVar5 == 0) goto LAB_3608529d;
      if (DAT_362a40ec == 0) {
        pcVar3 = s_disabled_3622bd30;
      }
      else {
        pcVar3 = s_enabled_3622bd3c;
      }
    }
    else {
      if (*(int *)(_pGfx + 0xa38) == 1) {
        uVar5 = *(uint *)(_pGfx + 0xa54) & 0x8000;
        goto LAB_36085282;
      }
LAB_3608529d:
      pcVar3 = s_not_supported_3622bd48;
    }
    CPrintF(pcVar3);
    if ((*(uint *)(_pGfx + 0xa54) & 0x200) == 0) {
      ExceptionList = local_c;
      return;
    }
    CPrintF(s___Swap_interval__3622bd58);
    if (((byte)_pGfx[0xa54] & 0x20) != 0) {
      CPrintF(s__d_frame_s__3622bd6c,*(undefined4 *)(_pGfx + 0xad8));
      ExceptionList = local_c;
      return;
    }
    pcVar3 = s_not_adjustable_3622bd7c;
    goto LAB_36085303;
  }
  CPrintF(s___Truform_tessellation__3622b868);
  if (*(int *)(_pGfx + 0xaf0) < 1) {
    pcVar3 = s_not_supported_3622b914;
LAB_36084d16:
    CPrintF(pcVar3);
  }
  else {
    if (*(int *)(_pGfx + 0xaf4) < 1) {
      pcVar3 = s_disabled_3622b908;
      goto LAB_36084d16;
    }
    CPrintF(s_enabled_3622b884);
    if (DAT_362c53f4 == 0) {
      pcVar3 = s__only_for_Truform_ready_models__3622b8a4;
    }
    else {
      pcVar3 = s__for_all_models__3622b890;
    }
    CPrintF(pcVar3);
    pcVar3 = s_linear_3622b8c8;
    if (DAT_362a40b4 == 0) {
      pcVar3 = s_quadratic_3622b8d0;
    }
    pcVar3 = StringDuplicate(pcVar3);
    local_4 = 0;
    local_10 = pcVar3;
    CPrintF(s___Tesselation_level___d_of__d____3622b8dc,*(undefined4 *)(_pGfx + 0xaf4),
            *(undefined4 *)(_pGfx + 0xaf0),pcVar3);
    local_4 = 0xffffffff;
    StringFree(pcVar3);
  }
  if ((*(uint *)(_pGfx + 0xa54) & 0x200) != 0) {
    CPrintF(s___Swap_interval__3622b924);
    if (((byte)_pGfx[0xa54] & 0x20) == 0) {
      pcVar3 = s_not_adjustable_3622b958;
    }
    else {
      iVar4 = (*DAT_362c4468)();
      if (-1 < iVar4) {
        CPrintF(s__d_frame_s__3622b938,iVar4);
        goto LAB_36084d79;
      }
      pcVar3 = s_not_readable_3622b948;
    }
    CPrintF(pcVar3);
  }
LAB_36084d79:
  CPrintF(s___Compiled_Vertex_Arrays__3622b968);
  if ((*(uint *)(_pGfx + 0xa54) & 0x200000) == 0) {
    pcVar3 = s_not_supported_3622b9cc;
LAB_36084e60:
    CPrintF(pcVar3);
  }
  else {
    if (DAT_362a40ac == 0) {
      pcVar3 = s_disabled_3622b9c0;
      goto LAB_36084e60;
    }
    pcVar3 = StringDuplicate(&DAT_3622b983);
    local_4 = 1;
    local_10 = pcVar3;
    CPrintF(s_enabled__for_3622b984);
    if (DAT_362c4d58 != 0) {
      CPrintF(s_world_3622b994);
      CTString::operator=((CTString *)&local_10,&DAT_3622b99c);
      pcVar3 = local_10;
    }
    if (DAT_362c4d5c != 0) {
      CPrintF(s__smodels_3622b9a0,pcVar3);
      CTString::operator=((CTString *)&local_10,&DAT_3622b9ac);
      pcVar3 = local_10;
    }
    if (DAT_362c4d54 != 0) {
      CPrintF(s__sparticles_3622b9b0,pcVar3);
    }
    CPrintF(&DAT_3622b9bc);
    local_4 = 0xffffffff;
    StringFree(pcVar3);
  }
  CPrintF(s___Supported_texture_compression_s_3622b9dc);
  if (((byte)_pGfx[0xa54] & 8) == 0) {
    CPrintF(s_none_3622ba08);
  }
  else {
    local_10 = StringDuplicate(&DAT_3622ba0e);
    local_4 = 2;
    if ((*(uint *)(_pGfx + 0xa54) & 0x8000000) != 0) {
      CPrintF(&DAT_3622ba10);
      CTString::operator=((CTString *)&local_10,&DAT_3622ba14);
    }
    if ((*(uint *)(_pGfx + 0xa54) & 0x10000000) != 0) {
      CPrintF(s__sS3TC_3622ba18,local_10);
      CTString::operator=((CTString *)&local_10,&DAT_3622ba20);
    }
    if ((*(uint *)(_pGfx + 0xa54) & 0x20000000) != 0) {
      CPrintF(s__sFXT1_3622ba24,local_10);
      CTString::operator=((CTString *)&local_10,&DAT_3622ba2c);
    }
    pcVar3 = local_10;
    if ((*(uint *)(_pGfx + 0xa54) & 0x40000000) != 0) {
      CPrintF(s__sold_S3TC_3622ba30,local_10);
    }
    CPrintF(s___Current_texture_compression_sy_3622ba3c);
    switch(DAT_362a40a8) {
    case 0:
      pcVar7 = s_none_3622ba64;
      break;
    case 1:
      pcVar7 = s_ARB_wrapper_3622ba6c;
      break;
    case 2:
      pcVar7 = s_S3TC_3622ba7c;
      break;
    case 3:
      pcVar7 = s_FXT1_3622ba84;
      break;
    default:
      pcVar7 = s_old_S3TC_3622ba8c;
    }
    CPrintF(pcVar7);
    local_4 = 0xffffffff;
    StringFree(pcVar3);
  }
  CPrintF(s___Occlusion_culling__3622ba98);
  if (*(int *)(_pGfx + 0xa38) == 0) {
    uVar5 = *(uint *)(_pGfx + 0xa54) & 0x800000;
LAB_36084ff1:
    if (uVar5 != 0) {
      switch(DAT_362a40ec) {
      case 0:
        pcVar3 = s_disabled_3622bab0;
        break;
      case 1:
        pcVar3 = s_enabled__for_models__3622babc;
        break;
      default:
        pcVar3 = s_undetermined_3622bafc;
        break;
      case 10:
        pcVar3 = s_enabled__for_lens_flares__3622bad4;
        break;
      case 0xb:
        pcVar3 = s_enabled_3622baf0;
      }
      goto LAB_36085303;
    }
  }
  else if (*(int *)(_pGfx + 0xa38) == 1) {
    uVar5 = *(uint *)(_pGfx + 0xa54) & 0x8000;
    goto LAB_36084ff1;
  }
  pcVar3 = s_not_supported_3622bb0c;
LAB_36085303:
  CPrintF(pcVar3);
  ExceptionList = local_c;
  return;
}

