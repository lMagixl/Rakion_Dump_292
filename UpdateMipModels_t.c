
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CEditModel::UpdateMipModels_t(class CTFileName &) */

void __thiscall CEditModel::UpdateMipModels_t(CEditModel *this,CTFileName *param_1)

{
  char *pcVar1;
  char cVar2;
  CEditModel *this_00;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  char *pcVar8;
  CTFileStream local_4ac [116];
  float local_438 [4];
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  CObject3D local_414 [20];
  int local_400;
  char *local_3fc;
  undefined4 local_3f8;
  char *local_3f4;
  CEditModel *local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  float local_3c8 [4];
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  undefined1 local_3a4 [260];
  char local_2a0 [259];
  char acStack_19d [2];
  undefined4 uStack_19b;
  char local_98 [128];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xab2e0  3916  ?UpdateMipModels_t@CEditModel@@QAEXAAVCTFileName@@@Z */
  puStack_c = &LAB_3621376e;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffb48;
  local_18 = DAT_362abd90;
  local_8 = 0;
  ExceptionList = &local_10;
  local_3f0 = this;
  CObject3D::BatchLoading_t(1);
  CTFileStream::CTFileStream(local_4ac);
  local_8 = CONCAT31(local_8._1_3_,1);
  CObject3D::CObject3D(local_414);
  acStack_19d[1] = 0;
  puVar6 = &uStack_19b;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined1 *)((int)puVar6 + 2) = 0;
  FUN_3604f120(local_3c8,0x3f800000);
  CTFileStream::Open_t(local_4ac,param_1,1);
  for (iVar4 = 1; iVar4 < *(int *)(this + 0x6c); iVar4 = iVar4 + 1) {
    ModelMipInfo::Clear((ModelMipInfo *)(this + iVar4 * 0x60 + 0xf0));
  }
  *(undefined4 *)(this + 0x6c) = 1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              do {
                CTStream::GetLine_t((CTStream *)local_4ac,local_98,0x80,'\n');
                local_3f4 = local_98;
                do {
                  cVar2 = *local_3f4;
                  local_3f4 = local_3f4 + 1;
                } while (cVar2 != '\0');
                local_3f4 = local_3f4 + -(int)(local_98 + 1);
              } while ((local_3f4 == (char *)0x0) || (local_98[0] == ';'));
              iVar4 = _strnicmp(local_98,&DAT_36231620,4);
              if (iVar4 != 0) break;
              _strupr(local_98);
              param_1 = (CTFileName *)0x3f800000;
              sscanf(local_98,s_SIZE__g_36231628,&param_1);
              local_3c8[0] = local_3c8[0] * (float)param_1;
              local_3c8[1] = local_3c8[1] * (float)param_1;
              local_3c8[2] = local_3c8[2] * (float)param_1;
              local_3c8[3] = local_3c8[3] * (float)param_1;
              local_3b8 = local_3b8 * (float)param_1;
              local_3b4 = local_3b4 * (float)param_1;
              local_3b0 = local_3b0 * (float)param_1;
              local_3ac = local_3ac * (float)param_1;
              local_3a8 = local_3a8 * (float)param_1;
            }
            iVar4 = _strnicmp(local_98,s_TRANSFORM_36231630,9);
            if (iVar4 != 0) break;
            _strupr(local_98);
            FUN_3604f120(&local_3ec,0x3f800000);
            sscanf(local_98,s_TRANSFORM__g__g__g__g__g__g__g___3623163c,&local_3ec,&local_3e8,
                   &local_3e4,&local_3e0,&local_3dc,&local_3d8,&local_3d4,&local_3d0,&local_3cc);
            local_438[0] = local_3ec * local_3c8[0] +
                           local_3e0 * local_3c8[1] + local_3d4 * local_3c8[2];
            local_438[1] = local_3e8 * local_3c8[0] +
                           local_3dc * local_3c8[1] + local_3d0 * local_3c8[2];
            local_438[2] = local_3e4 * local_3c8[0] +
                           local_3d8 * local_3c8[1] + local_3cc * local_3c8[2];
            local_438[3] = local_3c8[3] * local_3ec + local_3b8 * local_3e0 + local_3b4 * local_3d4;
            local_428 = local_3c8[3] * local_3e8 + local_3b8 * local_3dc + local_3b4 * local_3d0;
            local_424 = local_3b4 * local_3cc + local_3c8[3] * local_3e4 + local_3b8 * local_3d8;
            local_420 = local_3b0 * local_3ec + local_3ac * local_3e0 + local_3a8 * local_3d4;
            local_41c = local_3b0 * local_3e8 + local_3ac * local_3dc + local_3a8 * local_3d0;
            local_418 = local_3a8 * local_3cc + local_3b0 * local_3e4 + local_3ac * local_3d8;
            pfVar5 = local_438;
            pfVar7 = local_3c8;
            for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pfVar7 = *pfVar5;
              pfVar5 = pfVar5 + 1;
              pfVar7 = pfVar7 + 1;
            }
          }
          iVar4 = _strnicmp(local_98,s_DIRECTORY_36231664,9);
          if (iVar4 != 0) break;
          _strupr(local_98);
          sscanf(local_98,s_DIRECTORY__s_36231670,acStack_19d + 1);
          pcVar8 = acStack_19d;
          do {
            pcVar8 = pcVar8 + 1;
          } while (*pcVar8 != '\0');
          if (pcVar8[-1] != '\\') {
            pcVar8 = acStack_19d;
            do {
              pcVar1 = pcVar8 + 1;
              pcVar8 = pcVar8 + 1;
            } while (*pcVar1 != '\0');
            *(undefined2 *)pcVar8 = DAT_36231680;
          }
        }
        iVar4 = _strnicmp(local_98,s_MIP_MODELS_36231684,10);
        if (iVar4 != 0) break;
        _strupr(local_98);
        sscanf(local_98,s_MIP_MODELS__d_36231690,&local_400);
        CTStream::GetLine_t((CTStream *)local_4ac,local_98,0x80,'\n');
        iVar4 = 0;
        while (iVar4 < local_400 + -1) {
          CTStream::GetLine_t((CTStream *)local_4ac,local_98,0x80,'\n');
          _strupr(local_98);
          sscanf(local_98,&DAT_362316a0,local_3a4);
          sprintf(local_2a0,&DAT_362316a4,acStack_19d + 1,local_3a4);
          CObject3D::Clear(local_414);
          pcVar8 = StringDuplicate(local_2a0);
          local_8._0_1_ = 3;
          local_3f4 = pcVar8;
          local_3fc = StringDuplicate(pcVar8);
          local_3f8 = 0;
          local_8._0_1_ = 4;
          CObject3D::LoadAny3DFormat_t
                    (local_414,(CTFileName *)&local_3fc,(Matrix<float,3,3> *)local_3c8,0);
          local_8._0_1_ = 3;
          StringFree(local_3fc);
          local_8 = CONCAT31(local_8._1_3_,2);
          StringFree(pcVar8);
          iVar3 = FUN_3604a790(local_414,0);
          iVar3 = FUN_3604aa70(iVar3);
          this_00 = local_3f0;
          if (*(int *)(local_3f0 + 0x34) < iVar3) {
            ThrowF_t(s_It_is_unlikely_that_mip_model____362316b0,local_2a0);
          }
          if (*(int *)(this_00 + 0x6c) < 0x20) {
            FUN_3604a790(local_414,0);
            FUN_360502d0();
            AddMipModel(this_00,local_414);
            FUN_3604a790(local_414,0);
            FUN_360502e0();
            iVar4 = iVar4 + 1;
          }
          else {
            ThrowF_t(s_There_are_too_many_mip_models_de_36231728,0x1f);
            iVar4 = iVar4 + 1;
          }
        }
      }
      iVar4 = _strnicmp(local_98,s_ORIGIN_TRI_36231780,10);
      if (iVar4 != 0) break;
      sscanf(local_98,s_ORIGIN_TRI__d__d__d_3623178c,&DAT_362a5264,&DAT_362a5268,&DAT_362a526c);
    }
    iVar4 = _strnicmp(local_98,&DAT_362317a0,3);
  } while (iVar4 != 0);
  CModelData::LinkDataForSurfaces((CModelData *)(local_3f0 + 0x18),1);
  CObject3D::BatchLoading_t(0);
  local_8._0_1_ = 1;
  CObject3D::~CObject3D(local_414);
  local_8 = (uint)local_8._1_3_ << 8;
  CTFileStream::~CTFileStream(local_4ac);
  ExceptionList = local_10;
  return;
}

