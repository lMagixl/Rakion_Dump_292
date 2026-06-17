
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: long __thiscall CImageInfo::GetGfxFileInfo_t(class CTFileName const &) */

long __thiscall CImageInfo::GetGfxFileInfo_t(CImageInfo *this,CTFileName *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  CTFileStream local_130 [20];
  undefined4 *local_11c;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4;
  char local_a0 [3];
  char local_9d;
  short local_9c;
  short local_9a;
  short local_98;
  short local_96;
  char local_5f;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x8c5f0  1898  ?GetGfxFileInfo_t@CImageInfo@@QAEJABVCTFileName@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_3621275b;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  ExceptionList = &local_14;
  CTFileStream::CTFileStream(local_130);
  local_c = 0;
  CTFileStream::Open_t(local_130,param_1,1);
  local_b4 = *local_11c;
  local_b0 = local_11c[1];
  local_ac = local_11c[2];
  local_a8 = local_11c[3];
  local_a4 = *(undefined2 *)(local_11c + 4);
  local_11c = (undefined4 *)((int)local_11c + 0x12);
  CTFileStream::Close(local_130);
  if (((local_b4._2_1_ == '\x02') || (local_b4._2_1_ == '\n')) && (0x17 < (byte)local_a4)) {
    Clear(this);
    *(uint *)(this + 8) = (uint)(byte)local_a4;
    *(uint *)this = local_a8 & 0xffff;
    *(uint *)(this + 4) = local_a8 >> 0x10;
    local_c = 0xffffffff;
    CTFileStream::~CTFileStream(local_130);
    lVar1 = 2;
  }
  else {
    CTFileStream::Open_t(local_130,param_1,1);
    puVar3 = local_11c;
    pcVar4 = local_a0;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pcVar4 = pcVar4 + 4;
    }
    local_11c = local_11c + 0x20;
    CTFileStream::Close(local_130);
    if ((local_a0[0] == '\n') && (local_9d == '\b')) {
      Clear(this);
      *(int *)this = ((int)local_98 - (int)local_9c) + 1;
      *(int *)(this + 4) = ((int)local_96 - (int)local_9a) + 1;
      *(int *)(this + 8) = (int)local_5f << 3;
      local_c = 0xffffffff;
      CTFileStream::~CTFileStream(local_130);
      lVar1 = 1;
    }
    else {
      local_c = 0xffffffff;
      CTFileStream::~CTFileStream(local_130);
      lVar1 = 0;
    }
  }
  ExceptionList = local_14;
  return lVar1;
}

