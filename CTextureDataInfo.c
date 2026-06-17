
/* public: __thiscall CTextureDataInfo::CTextureDataInfo(class CTextureDataInfo const &) */

CTextureDataInfo * __thiscall
CTextureDataInfo::CTextureDataInfo(CTextureDataInfo *this,CTextureDataInfo *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa79d0  274  ??0CTextureDataInfo@@QAE@ABV0@@Z */
  puStack_8 = &LAB_36213358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  local_4 = 0;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  pcVar1 = StringDuplicate(*(char **)(param_1 + 0xc));
  *(char **)(this + 0xc) = pcVar1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = local_c;
  return this;
}

