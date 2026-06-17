
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CEditModel::UpdateAnimations_t(class CTFileName &) */

void __thiscall CEditModel::UpdateAnimations_t(CEditModel *this,CTFileName *param_1)

{
  char cVar1;
  CEditModel *this_00;
  char *pcVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_188;
  float local_184 [4];
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  CEditModel *local_13c;
  float local_138 [4];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  int local_114;
  CListHead local_110 [12];
  CTFileStream local_104 [116];
  char local_90 [128];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xae880  3906  ?UpdateAnimations_t@CEditModel@@QAEXAAVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362139c6;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  local_13c = this;
  CTFileStream::CTFileStream(local_104);
  local_4 = 0;
  CListHead::Clear(local_110);
  FUN_3604f120(local_184,0x3f800000);
  CTFileStream::Open_t(local_104,param_1,1);
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          CTStream::GetLine_t((CTStream *)local_104,local_90,0x80,'\n');
          pcVar2 = local_90;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          local_114 = (int)pcVar2 - (int)(local_90 + 1);
        } while ((local_114 == 0) || (local_90[0] == ';'));
        iVar3 = _strnicmp(local_90,&DAT_36231594,4);
        if (iVar3 != 0) break;
        _strupr(local_90);
        local_188 = 1.0;
        sscanf(local_90,s_SIZE__g_3623159c,&local_188);
        local_184[0] = local_184[0] * local_188;
        local_184[1] = local_184[1] * local_188;
        local_184[2] = local_184[2] * local_188;
        local_184[3] = local_184[3] * local_188;
        local_174 = local_174 * local_188;
        local_170 = local_170 * local_188;
        local_16c = local_16c * local_188;
        local_168 = local_168 * local_188;
        local_164 = local_164 * local_188;
      }
      iVar3 = _strnicmp(local_90,s_TRANSFORM_362315a4,9);
      if (iVar3 != 0) break;
      _strupr(local_90);
      FUN_3604f120(&local_160,0x3f800000);
      sscanf(local_90,s_TRANSFORM__g__g__g__g__g__g__g___362315b0,&local_160,&local_15c,&local_158,
             &local_154,&local_150,&local_14c,&local_148,&local_144,&local_140);
      local_138[0] = local_160 * local_184[0] + local_154 * local_184[1] + local_148 * local_184[2];
      local_138[1] = local_15c * local_184[0] + local_150 * local_184[1] + local_144 * local_184[2];
      local_138[2] = local_158 * local_184[0] + local_14c * local_184[1] + local_140 * local_184[2];
      local_138[3] = local_184[3] * local_160 + local_174 * local_154 + local_170 * local_148;
      local_128 = local_184[3] * local_15c + local_174 * local_150 + local_170 * local_144;
      local_124 = local_184[3] * local_158 + local_174 * local_14c + local_170 * local_140;
      local_120 = local_16c * local_160 + local_168 * local_154 + local_164 * local_148;
      local_11c = local_16c * local_15c + local_168 * local_150 + local_164 * local_144;
      local_118 = local_16c * local_158 + local_168 * local_14c + local_164 * local_140;
      pfVar4 = local_138;
      pfVar5 = local_184;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
      }
    }
    iVar3 = _strnicmp(local_90,s_ANIM_START_362315d8,10);
    this_00 = local_13c;
    if (iVar3 == 0) break;
    iVar3 = _strnicmp(local_90,s_ORIGIN_TRI_362315e4,10);
    if (iVar3 == 0) {
      sscanf(local_90,s_ORIGIN_TRI__d__d__d_362315f0,&DAT_362a5264,&DAT_362a5268,&DAT_362a526c);
    }
  }
  LoadModelAnimationData_t(local_13c,(CTStream *)local_104,(Matrix<float,3,3> *)local_184);
  CTFileStream::Close(local_104);
  CreateEmptyAttachingSounds(this_00);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_104);
  ExceptionList = local_c;
  return;
}

